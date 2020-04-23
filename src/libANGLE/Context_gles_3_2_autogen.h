// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Context_gles_3_2_autogen.h: Creates a macro for interfaces in Context.

#ifndef ANGLE_CONTEXT_GLES_3_2_AUTOGEN_H_
#define ANGLE_CONTEXT_GLES_3_2_AUTOGEN_H_

#define ANGLE_GLES_3_2_CONTEXT_API                                                                 \
    void blendBarrier();                                                                           \
    void blendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha);                     \
    void blendEquationi(GLuint buf, GLenum mode);                                                  \
    void blendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha,             \
                            GLenum dstAlpha);                                                      \
    void blendFunci(GLuint buf, GLenum src, GLenum dst);                                           \
    void colorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);             \
    void copyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX,            \
                          GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget,                \
                          GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth,    \
                          GLsizei srcHeight, GLsizei srcDepth);                                    \
    void debugMessageCallback(GLDEBUGPROC callback, const void *userParam);                        \
    void debugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count,           \
                             const GLuint *ids, GLboolean enabled);                                \
    void debugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity,                \
                            GLsizei length, const GLchar *buf);                                    \
    void disablei(GLenum target, GLuint index);                                                    \
    void drawElementsBaseVertex(PrimitiveMode modePacked, GLsizei count,                           \
                                DrawElementsType typePacked, const void *indices,                  \
                                GLint basevertex);                                                 \
    void drawElementsInstancedBaseVertex(PrimitiveMode modePacked, GLsizei count,                  \
                                         DrawElementsType typePacked, const void *indices,         \
                                         GLsizei instancecount, GLint basevertex);                 \
    void drawRangeElementsBaseVertex(PrimitiveMode modePacked, GLuint start, GLuint end,           \
                                     GLsizei count, DrawElementsType typePacked,                   \
                                     const void *indices, GLint basevertex);                       \
    void enablei(GLenum target, GLuint index);                                                     \
    void framebufferTexture(GLenum target, GLenum attachment, TextureID texturePacked,             \
                            GLint level);                                                          \
    GLuint getDebugMessageLog(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types,       \
                              GLuint *ids, GLenum *severities, GLsizei *lengths,                   \
                              GLchar *messageLog);                                                 \
    GLenum getGraphicsResetStatus();                                                               \
    void getObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length,          \
                        GLchar *label);                                                            \
    void getObjectPtrLabel(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);      \
    void getPointerv(GLenum pname, void **params);                                                 \
    void getSamplerParameterIiv(SamplerID samplerPacked, GLenum pname, GLint *params);             \
    void getSamplerParameterIuiv(SamplerID samplerPacked, GLenum pname, GLuint *params);           \
    void getTexParameterIiv(TextureType targetPacked, GLenum pname, GLint *params);                \
    void getTexParameterIuiv(TextureType targetPacked, GLenum pname, GLuint *params);              \
    void getnUniformfv(ShaderProgramID programPacked, GLint location, GLsizei bufSize,             \
                       GLfloat *params);                                                           \
    void getnUniformiv(ShaderProgramID programPacked, GLint location, GLsizei bufSize,             \
                       GLint *params);                                                             \
    void getnUniformuiv(ShaderProgramID programPacked, GLint location, GLsizei bufSize,            \
                        GLuint *params);                                                           \
    GLboolean isEnabledi(GLenum target, GLuint index);                                             \
    void minSampleShading(GLfloat value);                                                          \
    void objectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar *label);         \
    void objectPtrLabel(const void *ptr, GLsizei length, const GLchar *label);                     \
    void patchParameteri(GLenum pname, GLint value);                                               \
    void popDebugGroup();                                                                          \
    void primitiveBoundingBox(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW,              \
                              GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);             \
    void pushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar *message);          \
    void readnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type,  \
                     GLsizei bufSize, void *data);                                                 \
    void samplerParameterIiv(SamplerID samplerPacked, GLenum pname, const GLint *param);           \
    void samplerParameterIuiv(SamplerID samplerPacked, GLenum pname, const GLuint *param);         \
    void texBuffer(GLenum target, GLenum internalformat, BufferID bufferPacked);                   \
    void texBufferRange(GLenum target, GLenum internalformat, BufferID bufferPacked,               \
                        GLintptr offset, GLsizeiptr size);                                         \
    void texParameterIiv(TextureType targetPacked, GLenum pname, const GLint *params);             \
    void texParameterIuiv(TextureType targetPacked, GLenum pname, const GLuint *params);           \
    void texStorage3DMultisample(TextureType targetPacked, GLsizei samples, GLenum internalformat, \
                                 GLsizei width, GLsizei height, GLsizei depth,                     \
                                 GLboolean fixedsamplelocations);

#endif  // ANGLE_CONTEXT_API_3_2_AUTOGEN_H_
