#ifndef SELECTOR_LIGHTS_DRIVER_H
#define SELECTOR_LIGHTS_DRIVER_H

#include "arch/arch_platform.h"

/* LightsDriver selector. */
#ifdef HAVE_WIN32
#include "LightsDriver_Win32Parallel.h"
#endif
#ifdef HAVE_LINUXKERNEL
#include "LightsDriver_LinuxParallel.h"
#include "LightsDriver_LinuxWeedTech.h"
#endif
#include "LightsDriver_External.h"
#include "LightsDriver_SystemMessage.h"

#ifndef XBOX
#include "LightsDriver_PacDrive.h"
#include "LightsDriver_G15.h"
#endif

#include "LightsDriver_Null.h"

#endif

/*
 * (c) 2005 Ben Anderson.
 * All rights reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, and/or sell copies of the Software, and to permit persons to
 * whom the Software is furnished to do so, provided that the above
 * copyright notice(s) and this permission notice appear in all copies of
 * the Software and that both the above copyright notice(s) and this
 * permission notice appear in supporting documentation.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF
 * THIRD PARTY RIGHTS. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS
 * INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT
 * OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */