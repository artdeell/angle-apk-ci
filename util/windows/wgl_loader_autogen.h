// GENERATED FILE - DO NOT EDIT.
// Generated by generate_loader.py using data from wgl.xml.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// wgl_loader_autogen.h:
//   Simple WGL function loader.

#ifndef UTIL_WINDOWS_WGL_LOADER_AUTOGEN_H_
#define UTIL_WINDOWS_WGL_LOADER_AUTOGEN_H_

#include <GLES2/gl2.h>
#include <WGL/wgl.h>

// We add an underscore before each function name to ensure common names like "ChoosePixelFormat"
// and "SwapBuffers" don't conflict with our function pointers. We can't use a namespace because
// some functions conflict with preprocessor definitions.

#define _ChoosePixelFormat l__ChoosePixelFormat
#define _DescribePixelFormat l__DescribePixelFormat
#define _GetEnhMetaFilePixelFormat l__GetEnhMetaFilePixelFormat
#define _GetPixelFormat l__GetPixelFormat
#define _SetPixelFormat l__SetPixelFormat
#define _SwapBuffers l__SwapBuffers
#define _wglCopyContext l__wglCopyContext
#define _wglCreateContext l__wglCreateContext
#define _wglCreateLayerContext l__wglCreateLayerContext
#define _wglDeleteContext l__wglDeleteContext
#define _wglDescribeLayerPlane l__wglDescribeLayerPlane
#define _wglGetCurrentContext l__wglGetCurrentContext
#define _wglGetCurrentDC l__wglGetCurrentDC
#define _wglGetLayerPaletteEntries l__wglGetLayerPaletteEntries
#define _wglGetProcAddress l__wglGetProcAddress
#define _wglMakeCurrent l__wglMakeCurrent
#define _wglRealizeLayerPalette l__wglRealizeLayerPalette
#define _wglSetLayerPaletteEntries l__wglSetLayerPaletteEntries
#define _wglShareLists l__wglShareLists
#define _wglSwapLayerBuffers l__wglSwapLayerBuffers
#define _wglUseFontBitmaps l__wglUseFontBitmaps
#define _wglUseFontBitmapsA l__wglUseFontBitmapsA
#define _wglUseFontBitmapsW l__wglUseFontBitmapsW
#define _wglUseFontOutlines l__wglUseFontOutlines
#define _wglUseFontOutlinesA l__wglUseFontOutlinesA
#define _wglUseFontOutlinesW l__wglUseFontOutlinesW
#define _wglCreateContextAttribsARB l__wglCreateContextAttribsARB
#define _wglGetExtensionsStringARB l__wglGetExtensionsStringARB
#define _wglChoosePixelFormatARB l__wglChoosePixelFormatARB
#define _wglGetPixelFormatAttribfvARB l__wglGetPixelFormatAttribfvARB
#define _wglGetPixelFormatAttribivARB l__wglGetPixelFormatAttribivARB
#define _wglGetSwapIntervalEXT l__wglGetSwapIntervalEXT
#define _wglSwapIntervalEXT l__wglSwapIntervalEXT
extern PFNCHOOSEPIXELFORMATPROC l__ChoosePixelFormat;
extern PFNDESCRIBEPIXELFORMATPROC l__DescribePixelFormat;
extern PFNGETENHMETAFILEPIXELFORMATPROC l__GetEnhMetaFilePixelFormat;
extern PFNGETPIXELFORMATPROC l__GetPixelFormat;
extern PFNSETPIXELFORMATPROC l__SetPixelFormat;
extern PFNSWAPBUFFERSPROC l__SwapBuffers;
extern PFNWGLCOPYCONTEXTPROC l__wglCopyContext;
extern PFNWGLCREATECONTEXTPROC l__wglCreateContext;
extern PFNWGLCREATELAYERCONTEXTPROC l__wglCreateLayerContext;
extern PFNWGLDELETECONTEXTPROC l__wglDeleteContext;
extern PFNWGLDESCRIBELAYERPLANEPROC l__wglDescribeLayerPlane;
extern PFNWGLGETCURRENTCONTEXTPROC l__wglGetCurrentContext;
extern PFNWGLGETCURRENTDCPROC l__wglGetCurrentDC;
extern PFNWGLGETLAYERPALETTEENTRIESPROC l__wglGetLayerPaletteEntries;
extern PFNWGLGETPROCADDRESSPROC l__wglGetProcAddress;
extern PFNWGLMAKECURRENTPROC l__wglMakeCurrent;
extern PFNWGLREALIZELAYERPALETTEPROC l__wglRealizeLayerPalette;
extern PFNWGLSETLAYERPALETTEENTRIESPROC l__wglSetLayerPaletteEntries;
extern PFNWGLSHARELISTSPROC l__wglShareLists;
extern PFNWGLSWAPLAYERBUFFERSPROC l__wglSwapLayerBuffers;
extern PFNWGLUSEFONTBITMAPSPROC l__wglUseFontBitmaps;
extern PFNWGLUSEFONTBITMAPSAPROC l__wglUseFontBitmapsA;
extern PFNWGLUSEFONTBITMAPSWPROC l__wglUseFontBitmapsW;
extern PFNWGLUSEFONTOUTLINESPROC l__wglUseFontOutlines;
extern PFNWGLUSEFONTOUTLINESAPROC l__wglUseFontOutlinesA;
extern PFNWGLUSEFONTOUTLINESWPROC l__wglUseFontOutlinesW;
extern PFNWGLCREATECONTEXTATTRIBSARBPROC l__wglCreateContextAttribsARB;
extern PFNWGLGETEXTENSIONSSTRINGARBPROC l__wglGetExtensionsStringARB;
extern PFNWGLCHOOSEPIXELFORMATARBPROC l__wglChoosePixelFormatARB;
extern PFNWGLGETPIXELFORMATATTRIBFVARBPROC l__wglGetPixelFormatAttribfvARB;
extern PFNWGLGETPIXELFORMATATTRIBIVARBPROC l__wglGetPixelFormatAttribivARB;
extern PFNWGLGETSWAPINTERVALEXTPROC l__wglGetSwapIntervalEXT;
extern PFNWGLSWAPINTERVALEXTPROC l__wglSwapIntervalEXT;

using GenericProc = void (*)();
using LoadProc    = GenericProc(KHRONOS_APIENTRY *)(const char *);
void LoadWGL(LoadProc loadProc);

#endif  // UTIL_WINDOWS_WGL_LOADER_AUTOGEN_H_
