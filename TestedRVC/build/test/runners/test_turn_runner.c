/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include "mock_motorAction.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_turn_1001_turnLeft(void);
extern void test_turn_1011_turnLeft(void);
extern void test_turn_1101_turnRight(void);
extern void test_turn_1111_moveBackward(void);
extern void test_turn_0000_moveBackward(void);
extern void test_turn_0010_moveBackward(void);
extern void test_turn_1000_moveBackward(void);
extern void test_turn_1010_moveBackward(void);
extern void test_turn_0100_turnRight(void);
extern void test_turn_1100_turnRight(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_motorAction_Init();
}
static void CMock_Verify(void)
{
  mock_motorAction_Verify();
}
static void CMock_Destroy(void)
{
  mock_motorAction_Destroy();
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
  UnityBegin("test_turn.c");
  run_test(test_turn_1001_turnLeft, "test_turn_1001_turnLeft", 13);
  run_test(test_turn_1011_turnLeft, "test_turn_1011_turnLeft", 26);
  run_test(test_turn_1101_turnRight, "test_turn_1101_turnRight", 39);
  run_test(test_turn_1111_moveBackward, "test_turn_1111_moveBackward", 52);
  run_test(test_turn_0000_moveBackward, "test_turn_0000_moveBackward", 66);
  run_test(test_turn_0010_moveBackward, "test_turn_0010_moveBackward", 82);
  run_test(test_turn_1000_moveBackward, "test_turn_1000_moveBackward", 98);
  run_test(test_turn_1010_moveBackward, "test_turn_1010_moveBackward", 114);
  run_test(test_turn_0100_turnRight, "test_turn_0100_turnRight", 130);
  run_test(test_turn_1100_turnRight, "test_turn_1100_turnRight", 146);

  CMock_Guts_MemFreeFinal();
  return UnityEnd();
}
