/*
* Copyright (c) 2002 Lightweight Java Game Library Project
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
* * Neither the name of 'Light Weight Java Game Library' nor the names of
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

// ----------------------------------
// IMPLEMENTATION OF NATIVE METHODS FOR CLASS: org.lwjgl.opengl.ati.ATIFragmentShader
// ----------------------------------

#include "org_lwjgl_opengl_ati_ATIFragmentShader.h"
#include "extgl.h"
#include "checkGLerror.h"

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glGenFragmentShadersATI
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glGenFragmentShadersATI
	(JNIEnv * env, jclass clazz, jint range)
{
	CHECK_EXISTS(glGenFragmentShadersATI)
	GLuint result = glGenFragmentShadersATI(range);
	CHECK_GL_ERROR
	return result;
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glBindFragmentShaderATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glBindFragmentShaderATI
	(JNIEnv * env, jclass clazz, jint id)
{
	CHECK_EXISTS(glBindFragmentShaderATI)
	glBindFragmentShaderATI(id);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glDeleteFragmentShaderATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glDeleteFragmentShaderATI
	(JNIEnv * env, jclass clazz, jint id)
{
	CHECK_EXISTS(glDeleteFragmentShaderATI)
	glDeleteFragmentShaderATI(id);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glBeginFragmentShaderATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glBeginFragmentShaderATI
	(JNIEnv * env, jclass clazz)
{
	CHECK_EXISTS(glBeginFragmentShaderATI)
	glBeginFragmentShaderATI();
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glEndFragmentShaderATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glEndFragmentShaderATI
	(JNIEnv * env, jclass clazz)
{
	CHECK_EXISTS(glEndFragmentShaderATI)
	glEndFragmentShaderATI();
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glPassTexCoordATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glPassTexCoordATI
	(JNIEnv * env, jclass clazz, jint dst, jint coord, jint swizzle)
{
	CHECK_EXISTS(glPassTexCoordATI)
	glPassTexCoordATI(dst, coord, swizzle);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glSampleMapATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glSampleMapATI
	(JNIEnv * env, jclass clazz, jint dst, jint interp, jint swizzle)
{
	CHECK_EXISTS(glSampleMapATI)
	glSampleMapATI(dst, interp, swizzle);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glColorFragmentOp1ATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glColorFragmentOp1ATI
	(JNIEnv * env, jclass clazz, jint op, jint dst, jint dstMask, jint dstMod, jint arg1, jint arg1Rep, jint arg1Mod)
{
	CHECK_EXISTS(glColorFragmentOp1ATI)
	glColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glColorFragmentOp2ATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glColorFragmentOp2ATI
	(JNIEnv * env, jclass clazz, jint op, jint dst, jint dstMask, jint dstMod, jint arg1, jint arg1Rep, jint arg1Mod, jint arg2, jint arg2Rep, jint arg2Mod)
{
	CHECK_EXISTS(glColorFragmentOp2ATI)
	glColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glColorFragmentOp3ATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glColorFragmentOp3ATI
	(JNIEnv * env, jclass clazz, jint op, jint dst, jint dstMask, jint dstMod, jint arg1, jint arg1Rep, jint arg1Mod, jint arg2, jint arg2Rep, jint arg2Mod, jint arg3, jint arg3Rep, jint arg3Mod)
{
	CHECK_EXISTS(glColorFragmentOp3ATI)
	glColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glAlphaFragmentOp1ATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glAlphaFragmentOp1ATI
	(JNIEnv * env, jclass clazz, jint op, jint dst, jint dstMod, jint arg1, jint arg1Rep, jint arg1Mod)
{
	CHECK_EXISTS(glAlphaFragmentOp1ATI)
	glAlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glAlphaFragmentOp2ATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glAlphaFragmentOp2ATI
	(JNIEnv * env, jclass clazz, jint op, jint dst, jint dstMod, jint arg1, jint arg1Rep, jint arg1Mod, jint arg2, jint arg2Rep, jint arg2Mod)
{
	CHECK_EXISTS(glAlphaFragmentOp2ATI)
	glAlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	glAlphaFragmentOp3ATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_glAlphaFragmentOp3ATI
	(JNIEnv * env, jclass clazz, jint op, jint dst, jint dstMod, jint arg1, jint arg1Rep, jint arg1Mod, jint arg2, jint arg2Rep, jint arg2Mod, jint arg3, jint arg3Rep, jint arg3Mod)
{
	CHECK_EXISTS(glAlphaFragmentOp3ATI)
	glAlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
	CHECK_GL_ERROR
}

/*
 * Class:	org.lwjgl.opengl.ati.ATIFragmentShader
 * Method:	nglSetFragmentShaderConstantATI
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ati_ATIFragmentShader_nglSetFragmentShaderConstantATI
	(JNIEnv * env, jclass clazz, jint dst, jobject pfValue, jint pfValue_offset)
{
	CHECK_EXISTS(glSetFragmentShaderConstantATI)
	GLfloat *pfValue_ptr = (GLfloat *)env->GetDirectBufferAddress(pfValue) + pfValue_offset;
	glSetFragmentShaderConstantATI(dst, pfValue_ptr);
	CHECK_GL_ERROR
}
