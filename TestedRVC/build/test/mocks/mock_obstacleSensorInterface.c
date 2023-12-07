/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_obstacleSensorInterface.h"

static const char* CMockString_detectDust = "detectDust";
static const char* CMockString_dustSensorInterface = "dustSensorInterface";
static const char* CMockString_frontSensorInterface = "frontSensorInterface";
static const char* CMockString_leftSensorInterface = "leftSensorInterface";
static const char* CMockString_rightSensorInterface = "rightSensorInterface";

typedef struct _CMOCK_detectDust_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;

} CMOCK_detectDust_CALL_INSTANCE;

typedef struct _CMOCK_dustSensorInterface_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;

} CMOCK_dustSensorInterface_CALL_INSTANCE;

typedef struct _CMOCK_frontSensorInterface_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;

} CMOCK_frontSensorInterface_CALL_INSTANCE;

typedef struct _CMOCK_leftSensorInterface_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;

} CMOCK_leftSensorInterface_CALL_INSTANCE;

typedef struct _CMOCK_rightSensorInterface_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;

} CMOCK_rightSensorInterface_CALL_INSTANCE;

static struct mock_obstacleSensorInterfaceInstance
{
  char detectDust_IgnoreBool;
  int detectDust_FinalReturn;
  char detectDust_CallbackBool;
  CMOCK_detectDust_CALLBACK detectDust_CallbackFunctionPointer;
  int detectDust_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE detectDust_CallInstance;
  char dustSensorInterface_IgnoreBool;
  int dustSensorInterface_FinalReturn;
  char dustSensorInterface_CallbackBool;
  CMOCK_dustSensorInterface_CALLBACK dustSensorInterface_CallbackFunctionPointer;
  int dustSensorInterface_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE dustSensorInterface_CallInstance;
  char frontSensorInterface_IgnoreBool;
  int frontSensorInterface_FinalReturn;
  char frontSensorInterface_CallbackBool;
  CMOCK_frontSensorInterface_CALLBACK frontSensorInterface_CallbackFunctionPointer;
  int frontSensorInterface_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE frontSensorInterface_CallInstance;
  char leftSensorInterface_IgnoreBool;
  int leftSensorInterface_FinalReturn;
  char leftSensorInterface_CallbackBool;
  CMOCK_leftSensorInterface_CALLBACK leftSensorInterface_CallbackFunctionPointer;
  int leftSensorInterface_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE leftSensorInterface_CallInstance;
  char rightSensorInterface_IgnoreBool;
  int rightSensorInterface_FinalReturn;
  char rightSensorInterface_CallbackBool;
  CMOCK_rightSensorInterface_CALLBACK rightSensorInterface_CallbackFunctionPointer;
  int rightSensorInterface_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE rightSensorInterface_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_obstacleSensorInterface_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.detectDust_CallInstance;
  if (Mock.detectDust_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_detectDust);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.detectDust_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.dustSensorInterface_CallInstance;
  if (Mock.dustSensorInterface_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_dustSensorInterface);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.dustSensorInterface_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.frontSensorInterface_CallInstance;
  if (Mock.frontSensorInterface_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_frontSensorInterface);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.frontSensorInterface_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.leftSensorInterface_CallInstance;
  if (Mock.leftSensorInterface_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_leftSensorInterface);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.leftSensorInterface_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.rightSensorInterface_CallInstance;
  if (Mock.rightSensorInterface_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_rightSensorInterface);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.rightSensorInterface_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_obstacleSensorInterface_Init(void)
{
  mock_obstacleSensorInterface_Destroy();
}

void mock_obstacleSensorInterface_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

int detectDust(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_detectDust_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_detectDust);
  cmock_call_instance = (CMOCK_detectDust_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.detectDust_CallInstance);
  Mock.detectDust_CallInstance = CMock_Guts_MemNext(Mock.detectDust_CallInstance);
  if (Mock.detectDust_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.detectDust_FinalReturn;
    Mock.detectDust_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.detectDust_CallbackBool &&
      Mock.detectDust_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.detectDust_CallbackFunctionPointer(Mock.detectDust_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.detectDust_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.detectDust_CallbackFunctionPointer(Mock.detectDust_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void detectDust_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_detectDust_CALL_INSTANCE));
  CMOCK_detectDust_CALL_INSTANCE* cmock_call_instance = (CMOCK_detectDust_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.detectDust_CallInstance = CMock_Guts_MemChain(Mock.detectDust_CallInstance, cmock_guts_index);
  Mock.detectDust_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.detectDust_IgnoreBool = (char)1;
}

void detectDust_CMockStopIgnore(void)
{
  if(Mock.detectDust_IgnoreBool)
    Mock.detectDust_CallInstance = CMock_Guts_MemNext(Mock.detectDust_CallInstance);
  Mock.detectDust_IgnoreBool = (char)0;
}

void detectDust_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_detectDust_CALL_INSTANCE));
  CMOCK_detectDust_CALL_INSTANCE* cmock_call_instance = (CMOCK_detectDust_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.detectDust_CallInstance = CMock_Guts_MemChain(Mock.detectDust_CallInstance, cmock_guts_index);
  Mock.detectDust_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void detectDust_AddCallback(CMOCK_detectDust_CALLBACK Callback)
{
  Mock.detectDust_IgnoreBool = (char)0;
  Mock.detectDust_CallbackBool = (char)1;
  Mock.detectDust_CallbackFunctionPointer = Callback;
}

void detectDust_Stub(CMOCK_detectDust_CALLBACK Callback)
{
  Mock.detectDust_IgnoreBool = (char)0;
  Mock.detectDust_CallbackBool = (char)0;
  Mock.detectDust_CallbackFunctionPointer = Callback;
}

int dustSensorInterface(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_dustSensorInterface_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_dustSensorInterface);
  cmock_call_instance = (CMOCK_dustSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.dustSensorInterface_CallInstance);
  Mock.dustSensorInterface_CallInstance = CMock_Guts_MemNext(Mock.dustSensorInterface_CallInstance);
  if (Mock.dustSensorInterface_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.dustSensorInterface_FinalReturn;
    Mock.dustSensorInterface_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.dustSensorInterface_CallbackBool &&
      Mock.dustSensorInterface_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.dustSensorInterface_CallbackFunctionPointer(Mock.dustSensorInterface_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.dustSensorInterface_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.dustSensorInterface_CallbackFunctionPointer(Mock.dustSensorInterface_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void dustSensorInterface_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_dustSensorInterface_CALL_INSTANCE));
  CMOCK_dustSensorInterface_CALL_INSTANCE* cmock_call_instance = (CMOCK_dustSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.dustSensorInterface_CallInstance = CMock_Guts_MemChain(Mock.dustSensorInterface_CallInstance, cmock_guts_index);
  Mock.dustSensorInterface_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.dustSensorInterface_IgnoreBool = (char)1;
}

void dustSensorInterface_CMockStopIgnore(void)
{
  if(Mock.dustSensorInterface_IgnoreBool)
    Mock.dustSensorInterface_CallInstance = CMock_Guts_MemNext(Mock.dustSensorInterface_CallInstance);
  Mock.dustSensorInterface_IgnoreBool = (char)0;
}

void dustSensorInterface_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_dustSensorInterface_CALL_INSTANCE));
  CMOCK_dustSensorInterface_CALL_INSTANCE* cmock_call_instance = (CMOCK_dustSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.dustSensorInterface_CallInstance = CMock_Guts_MemChain(Mock.dustSensorInterface_CallInstance, cmock_guts_index);
  Mock.dustSensorInterface_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void dustSensorInterface_AddCallback(CMOCK_dustSensorInterface_CALLBACK Callback)
{
  Mock.dustSensorInterface_IgnoreBool = (char)0;
  Mock.dustSensorInterface_CallbackBool = (char)1;
  Mock.dustSensorInterface_CallbackFunctionPointer = Callback;
}

void dustSensorInterface_Stub(CMOCK_dustSensorInterface_CALLBACK Callback)
{
  Mock.dustSensorInterface_IgnoreBool = (char)0;
  Mock.dustSensorInterface_CallbackBool = (char)0;
  Mock.dustSensorInterface_CallbackFunctionPointer = Callback;
}

int frontSensorInterface(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_frontSensorInterface_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_frontSensorInterface);
  cmock_call_instance = (CMOCK_frontSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.frontSensorInterface_CallInstance);
  Mock.frontSensorInterface_CallInstance = CMock_Guts_MemNext(Mock.frontSensorInterface_CallInstance);
  if (Mock.frontSensorInterface_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.frontSensorInterface_FinalReturn;
    Mock.frontSensorInterface_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.frontSensorInterface_CallbackBool &&
      Mock.frontSensorInterface_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.frontSensorInterface_CallbackFunctionPointer(Mock.frontSensorInterface_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.frontSensorInterface_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.frontSensorInterface_CallbackFunctionPointer(Mock.frontSensorInterface_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void frontSensorInterface_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_frontSensorInterface_CALL_INSTANCE));
  CMOCK_frontSensorInterface_CALL_INSTANCE* cmock_call_instance = (CMOCK_frontSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.frontSensorInterface_CallInstance = CMock_Guts_MemChain(Mock.frontSensorInterface_CallInstance, cmock_guts_index);
  Mock.frontSensorInterface_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.frontSensorInterface_IgnoreBool = (char)1;
}

void frontSensorInterface_CMockStopIgnore(void)
{
  if(Mock.frontSensorInterface_IgnoreBool)
    Mock.frontSensorInterface_CallInstance = CMock_Guts_MemNext(Mock.frontSensorInterface_CallInstance);
  Mock.frontSensorInterface_IgnoreBool = (char)0;
}

void frontSensorInterface_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_frontSensorInterface_CALL_INSTANCE));
  CMOCK_frontSensorInterface_CALL_INSTANCE* cmock_call_instance = (CMOCK_frontSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.frontSensorInterface_CallInstance = CMock_Guts_MemChain(Mock.frontSensorInterface_CallInstance, cmock_guts_index);
  Mock.frontSensorInterface_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void frontSensorInterface_AddCallback(CMOCK_frontSensorInterface_CALLBACK Callback)
{
  Mock.frontSensorInterface_IgnoreBool = (char)0;
  Mock.frontSensorInterface_CallbackBool = (char)1;
  Mock.frontSensorInterface_CallbackFunctionPointer = Callback;
}

void frontSensorInterface_Stub(CMOCK_frontSensorInterface_CALLBACK Callback)
{
  Mock.frontSensorInterface_IgnoreBool = (char)0;
  Mock.frontSensorInterface_CallbackBool = (char)0;
  Mock.frontSensorInterface_CallbackFunctionPointer = Callback;
}

int leftSensorInterface(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_leftSensorInterface_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_leftSensorInterface);
  cmock_call_instance = (CMOCK_leftSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.leftSensorInterface_CallInstance);
  Mock.leftSensorInterface_CallInstance = CMock_Guts_MemNext(Mock.leftSensorInterface_CallInstance);
  if (Mock.leftSensorInterface_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.leftSensorInterface_FinalReturn;
    Mock.leftSensorInterface_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.leftSensorInterface_CallbackBool &&
      Mock.leftSensorInterface_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.leftSensorInterface_CallbackFunctionPointer(Mock.leftSensorInterface_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.leftSensorInterface_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.leftSensorInterface_CallbackFunctionPointer(Mock.leftSensorInterface_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void leftSensorInterface_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_leftSensorInterface_CALL_INSTANCE));
  CMOCK_leftSensorInterface_CALL_INSTANCE* cmock_call_instance = (CMOCK_leftSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.leftSensorInterface_CallInstance = CMock_Guts_MemChain(Mock.leftSensorInterface_CallInstance, cmock_guts_index);
  Mock.leftSensorInterface_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.leftSensorInterface_IgnoreBool = (char)1;
}

void leftSensorInterface_CMockStopIgnore(void)
{
  if(Mock.leftSensorInterface_IgnoreBool)
    Mock.leftSensorInterface_CallInstance = CMock_Guts_MemNext(Mock.leftSensorInterface_CallInstance);
  Mock.leftSensorInterface_IgnoreBool = (char)0;
}

void leftSensorInterface_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_leftSensorInterface_CALL_INSTANCE));
  CMOCK_leftSensorInterface_CALL_INSTANCE* cmock_call_instance = (CMOCK_leftSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.leftSensorInterface_CallInstance = CMock_Guts_MemChain(Mock.leftSensorInterface_CallInstance, cmock_guts_index);
  Mock.leftSensorInterface_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void leftSensorInterface_AddCallback(CMOCK_leftSensorInterface_CALLBACK Callback)
{
  Mock.leftSensorInterface_IgnoreBool = (char)0;
  Mock.leftSensorInterface_CallbackBool = (char)1;
  Mock.leftSensorInterface_CallbackFunctionPointer = Callback;
}

void leftSensorInterface_Stub(CMOCK_leftSensorInterface_CALLBACK Callback)
{
  Mock.leftSensorInterface_IgnoreBool = (char)0;
  Mock.leftSensorInterface_CallbackBool = (char)0;
  Mock.leftSensorInterface_CallbackFunctionPointer = Callback;
}

int rightSensorInterface(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rightSensorInterface_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_rightSensorInterface);
  cmock_call_instance = (CMOCK_rightSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rightSensorInterface_CallInstance);
  Mock.rightSensorInterface_CallInstance = CMock_Guts_MemNext(Mock.rightSensorInterface_CallInstance);
  if (Mock.rightSensorInterface_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.rightSensorInterface_FinalReturn;
    Mock.rightSensorInterface_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.rightSensorInterface_CallbackBool &&
      Mock.rightSensorInterface_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.rightSensorInterface_CallbackFunctionPointer(Mock.rightSensorInterface_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.rightSensorInterface_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.rightSensorInterface_CallbackFunctionPointer(Mock.rightSensorInterface_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void rightSensorInterface_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rightSensorInterface_CALL_INSTANCE));
  CMOCK_rightSensorInterface_CALL_INSTANCE* cmock_call_instance = (CMOCK_rightSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rightSensorInterface_CallInstance = CMock_Guts_MemChain(Mock.rightSensorInterface_CallInstance, cmock_guts_index);
  Mock.rightSensorInterface_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.rightSensorInterface_IgnoreBool = (char)1;
}

void rightSensorInterface_CMockStopIgnore(void)
{
  if(Mock.rightSensorInterface_IgnoreBool)
    Mock.rightSensorInterface_CallInstance = CMock_Guts_MemNext(Mock.rightSensorInterface_CallInstance);
  Mock.rightSensorInterface_IgnoreBool = (char)0;
}

void rightSensorInterface_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rightSensorInterface_CALL_INSTANCE));
  CMOCK_rightSensorInterface_CALL_INSTANCE* cmock_call_instance = (CMOCK_rightSensorInterface_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rightSensorInterface_CallInstance = CMock_Guts_MemChain(Mock.rightSensorInterface_CallInstance, cmock_guts_index);
  Mock.rightSensorInterface_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void rightSensorInterface_AddCallback(CMOCK_rightSensorInterface_CALLBACK Callback)
{
  Mock.rightSensorInterface_IgnoreBool = (char)0;
  Mock.rightSensorInterface_CallbackBool = (char)1;
  Mock.rightSensorInterface_CallbackFunctionPointer = Callback;
}

void rightSensorInterface_Stub(CMOCK_rightSensorInterface_CALLBACK Callback)
{
  Mock.rightSensorInterface_IgnoreBool = (char)0;
  Mock.rightSensorInterface_CallbackBool = (char)0;
  Mock.rightSensorInterface_CallbackFunctionPointer = Callback;
}

