/*
 * Copyright (c) 2002-2004 LWJGL Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 *
 * * Neither the name of 'LWJGL' nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
package org.lwjgl.opengl;

import org.lwjgl.generator.*;

public interface ATI_pn_triangles {
	int GL_PN_TRIANGLES_ATI = 0x87F0;
	int GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI = 0x87F1;
	int GL_PN_TRIANGLES_POINT_MODE_ATI = 0x87F2;
	int GL_PN_TRIANGLES_NORMAL_MODE_ATI = 0x87F3;
	int GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI = 0x87F4;
	int GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI = 0x87F5;
	int GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI = 0x87F6;
	int GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI = 0x87F7;
	int GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI = 0x87F8;

	void glPNTrianglesfATI(@GLenum int pname, float param);

	void glPNTrianglesiATI(@GLenum int pname, int param);
}