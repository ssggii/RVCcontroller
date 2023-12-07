/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_detectDust_DustLevelLessThanOrEqulTo60_ReturnFalse(void);
extern void test_detectDust_DustLevelGreaterThan60_ReturnTrue(void);
extern void test_dustSensorInterface_Default_ReturnCorrectRangeInput(void);
extern void test_frontSensorInterface_Default_ReturnCorrectRangeInput(void);
extern void test_leftSensorInterface_Default_ReturnCorrectRangeInput(void);
extern void test_rightSensorInterface_Default_ReturnCorrectRangeInput(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_main.c");
  run_test(test_detectDust_DustLevelLessThanOrEqulTo60_ReturnFalse, "test_detectDust_DustLevelLessThanOrEqulTo60_ReturnFalse", 18);
  run_test(test_detectDust_DustLevelGreaterThan60_ReturnTrue, "test_detectDust_DustLevelGreaterThan60_ReturnTrue", 34);
  run_test(test_dustSensorInterface_Default_ReturnCorrectRangeInput, "test_dustSensorInterface_Default_ReturnCorrectRangeInput", 50);
  run_test(test_frontSensorInterface_Default_ReturnCorrectRangeInput, "test_frontSensorInterface_Default_ReturnCorrectRangeInput", 60);
  run_test(test_leftSensorInterface_Default_ReturnCorrectRangeInput, "test_leftSensorInterface_Default_ReturnCorrectRangeInput", 70);
  run_test(test_rightSensorInterface_Default_ReturnCorrectRangeInput, "test_rightSensorInterface_Default_ReturnCorrectRangeInput", 80);

  return UnityEnd();
}
