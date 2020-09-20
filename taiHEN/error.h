/**
 * @brief      Error codes
 */
#ifndef TAI_ERROR_HEADER
#define TAI_ERROR_HEADER

#include "taihen_internal.h"

#define TAI_SUCCESS 0
#define TAI_ERROR_SYSTEM 0x90010000
#define TAI_ERROR_MEMORY 0x90010001
#define TAI_ERROR_NOT_FOUND 0x90010002
#define TAI_ERROR_INVALID_ARGS 0x90010003
#define TAI_ERROR_INVALID_KERNEL_ADDR 0x90010004
#define TAI_ERROR_PATCH_EXISTS 0x90010005
#define TAI_ERROR_HOOK_ERROR 0x90010006
#define TAI_ERROR_NOT_IMPLEMENTED 0x90010007
#define TAI_ERROR_USER_MEMORY 0x90010008
#define TAI_ERROR_NOT_ALLOWED 0x90010009
#define TAI_ERROR_STUB_NOT_RESOLVED 0x9001000A
#define TAI_ERROR_INVALID_MODULE 0x9001000B
#define TAI_ERROR_MODULE_OVERFLOW 0x9001000C
#define TAI_ERROR_BLOCKING 0x9001000D

#endif // TAI_ERROR_HEADER
