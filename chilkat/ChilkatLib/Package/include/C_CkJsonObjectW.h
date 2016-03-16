// This is a generated source file for Chilkat version 9.5.0.56
#ifndef _C_CkJsonObjectWH
#define _C_CkJsonObjectWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"

CK_VISIBLE_PUBLIC HCkJsonObjectW CkJsonObjectW_Create(void);
CK_VISIBLE_PUBLIC void CkJsonObjectW_Dispose(HCkJsonObjectW handle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_getDebugLogFilePath(HCkJsonObjectW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkJsonObjectW_putDebugLogFilePath(HCkJsonObjectW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkJsonObjectW_debugLogFilePath(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_getEmitCompact(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_putEmitCompact(HCkJsonObjectW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_getEmitCrLf(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_putEmitCrLf(HCkJsonObjectW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkJsonObjectW_getI(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_putI(HCkJsonObjectW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkJsonObjectW_getJ(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_putJ(HCkJsonObjectW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkJsonObjectW_getK(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_putK(HCkJsonObjectW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkJsonObjectW_getLastErrorHtml(HCkJsonObjectW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkJsonObjectW_lastErrorHtml(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_getLastErrorText(HCkJsonObjectW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkJsonObjectW_lastErrorText(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_getLastErrorXml(HCkJsonObjectW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkJsonObjectW_lastErrorXml(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_getLastMethodSuccess(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_putLastMethodSuccess(HCkJsonObjectW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkJsonObjectW_getSize(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_getVerboseLogging(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC void CkJsonObjectW_putVerboseLogging(HCkJsonObjectW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkJsonObjectW_getVersion(HCkJsonObjectW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkJsonObjectW_version(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_AddArrayAt(HCkJsonObjectW cHandle, int index, const wchar_t *name);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_AddBoolAt(HCkJsonObjectW cHandle, int index, const wchar_t *name, BOOL value);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_AddIntAt(HCkJsonObjectW cHandle, int index, const wchar_t *name, int value);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_AddNullAt(HCkJsonObjectW cHandle, int index, const wchar_t *name);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_AddNumberAt(HCkJsonObjectW cHandle, int index, const wchar_t *name, const wchar_t *numericStr);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_AddObjectAt(HCkJsonObjectW cHandle, int index, const wchar_t *name);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_AddStringAt(HCkJsonObjectW cHandle, int index, const wchar_t *name, const wchar_t *value);
CK_VISIBLE_PUBLIC HCkJsonArrayW CkJsonObjectW_ArrayAt(HCkJsonObjectW cHandle, int index);
CK_VISIBLE_PUBLIC HCkJsonArrayW CkJsonObjectW_ArrayOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_BoolAt(HCkJsonObjectW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_BoolOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_Delete(HCkJsonObjectW cHandle, const wchar_t *name);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_DeleteAt(HCkJsonObjectW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_Emit(HCkJsonObjectW cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkJsonObjectW_emit(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC HCkJsonObjectW CkJsonObjectW_GetDocRoot(HCkJsonObjectW cHandle);
CK_VISIBLE_PUBLIC int CkJsonObjectW_IndexOf(HCkJsonObjectW cHandle, const wchar_t *name);
CK_VISIBLE_PUBLIC int CkJsonObjectW_IntAt(HCkJsonObjectW cHandle, int index);
CK_VISIBLE_PUBLIC int CkJsonObjectW_IntOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_IsNullAt(HCkJsonObjectW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_IsNullOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_Load(HCkJsonObjectW cHandle, const wchar_t *json);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_LoadFile(HCkJsonObjectW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_NameAt(HCkJsonObjectW cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkJsonObjectW_nameAt(HCkJsonObjectW cHandle, int index);
CK_VISIBLE_PUBLIC HCkJsonObjectW CkJsonObjectW_ObjectAt(HCkJsonObjectW cHandle, int index);
CK_VISIBLE_PUBLIC HCkJsonObjectW CkJsonObjectW_ObjectOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_Rename(HCkJsonObjectW cHandle, const wchar_t *oldName, const wchar_t *newName);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_RenameAt(HCkJsonObjectW cHandle, int index, const wchar_t *name);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SaveLastError(HCkJsonObjectW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetBoolAt(HCkJsonObjectW cHandle, int index, BOOL value);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetBoolOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath, BOOL value);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetIntAt(HCkJsonObjectW cHandle, int index, int value);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetIntOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath, int value);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetNullAt(HCkJsonObjectW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetNullOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetNumberAt(HCkJsonObjectW cHandle, int index, const wchar_t *value);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetNumberOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath, const wchar_t *value);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetStringAt(HCkJsonObjectW cHandle, int index, const wchar_t *value);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_SetStringOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath, const wchar_t *value);
CK_VISIBLE_PUBLIC int CkJsonObjectW_SizeOfArray(HCkJsonObjectW cHandle, const wchar_t *jsonPath);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_StringAt(HCkJsonObjectW cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkJsonObjectW_stringAt(HCkJsonObjectW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkJsonObjectW_StringOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkJsonObjectW_stringOf(HCkJsonObjectW cHandle, const wchar_t *jsonPath);
#endif
