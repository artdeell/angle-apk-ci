//
// Copyright 2021 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Spinlock.h:
//   Spinlock is a lock that loops actively until it gets the resource.
//   Only use it when the lock will be granted in reasonably short time.

#ifndef COMMON_SPINLOCK_H_
#define COMMON_SPINLOCK_H_

#include <atomic>

#ifdef _MSC_VER
#    include <intrin.h>  // for _mm_pause() and __yield()
#endif

#if defined(__ARM_ARCH_7__) || defined(__aarch64__)
#    if defined(__GNUC__) || defined(__clang__)
#        include <arm_acle.h>  // for __yield()
#    endif
#endif

#if defined(_MSC_VER) && (defined(_M_IX86) || defined(_M_X64))
#    define ANGLE_SMT_PAUSE() _mm_pause()
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
#    define ANGLE_SMT_PAUSE() __asm__ __volatile__("pause;")
#elif defined(_M_ARM) || defined(_M_ARM64) || defined(__ARM_ARCH_7__) || defined(__aarch64__)
#    define ANGLE_SMT_PAUSE() __yield()
#else
#    define ANGLE_SMT_PAUSE() static_cast<void>(0)
#endif

namespace angle
{

class Spinlock
{
  public:
    Spinlock() noexcept;

    bool try_lock() noexcept;
    void lock() noexcept;
    void unlock() noexcept;

  private:
    std::atomic_bool mLock;
};

inline Spinlock::Spinlock() noexcept : mLock(false) {}

inline bool Spinlock::try_lock() noexcept
{
    // Relaxed check first to prevent unnecessary cache misses.
    return !mLock.load(std::memory_order_relaxed) &&
           !mLock.exchange(true, std::memory_order_acquire);
}

inline void Spinlock::lock() noexcept
{
    while (mLock.exchange(true, std::memory_order_acquire))
    {
        // Relaxed wait to prevent unnecessary cache misses.
        while (mLock.load(std::memory_order_relaxed))
        {
            // Optimization for simultaneous multithreading.
            ANGLE_SMT_PAUSE();
        }
    }
}

inline void Spinlock::unlock() noexcept
{
    mLock.store(false, std::memory_order_release);
}

}  // namespace angle

#endif  // COMMON_SPINLOCK_H_
