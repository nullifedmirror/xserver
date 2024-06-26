/*
 * Copyright (c) 2000-2003 by The XFree86 Project, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of the copyright holder(s)
 * and author(s) shall not be used in advertising or otherwise to promote
 * the sale, use or other dealings in this Software without prior written
 * authorization from the copyright holder(s) and author(s).
 */

/*
 * Abstraction of the AGP GART interface.  Stubs for platforms without
 * AGP GART support.
 */

#ifdef HAVE_XORG_CONFIG_H
#include <xorg-config.h>
#endif

#include <X11/X.h>

#include "xf86.h"
#include "xf86Priv.h"
#include "xf86_os_support.h"
#include "xf86_OSlib.h"
#include "xf86_os_support.h"

Bool
xf86GARTCloseScreen(int screenNum)
{
    return FALSE;
}

Bool
xf86AgpGARTSupported(void)
{
    return FALSE;
}

AgpInfoPtr
xf86GetAGPInfo(int screenNum)
{
    return NULL;
}

Bool
xf86AcquireGART(int screenNum)
{
    return FALSE;
}

Bool
xf86ReleaseGART(int screenNum)
{
    return FALSE;
}

int
xf86AllocateGARTMemory(int screenNum, unsigned long size, int type,
                       unsigned long *physical)
{
    return -1;
}

Bool
xf86DeallocateGARTMemory(int screenNum, int key)
{
    return FALSE;
}

Bool
xf86BindGARTMemory(int screenNum, int key, unsigned long offset)
{
    return FALSE;
}

Bool
xf86UnbindGARTMemory(int screenNum, int key)
{
    return FALSE;
}
