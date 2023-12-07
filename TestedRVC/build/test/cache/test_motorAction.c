#include "src/motorAction.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_turnLeft_triggered_ReturnCorrectLog(void)

{



    char* resultLog;

    char* expectedLog = "trigger turn left\n";





    resultLog = turnLeft();





    UnityAssertEqualString((const char*)((expectedLog)), (const char*)((resultLog)), (

   ((void *)0)

   ), (UNITY_UINT)(22));



}



void test_turnRight_triggered_ReturnCorrectLog(void)

{



    char* resultLog;

    char* expectedLog = "trigger turn right\n";





    resultLog = turnRight();





    UnityAssertEqualString((const char*)((expectedLog)), (const char*)((resultLog)), (

   ((void *)0)

   ), (UNITY_UINT)(36));



}



void test_moveForward_command1_ReturnEnableLog(void)

{



    char* resultLog;

    char* expectedLog = "enable move forward\n";

    int command = 1;





    resultLog = moveForward(command);





    UnityAssertEqualString((const char*)((expectedLog)), (const char*)((resultLog)), (

   ((void *)0)

   ), (UNITY_UINT)(51));



}



void test_moveForward_command0_ReturnDisableLog(void)

{



    char* resultLog;

    char* expectedLog = "disable move forward\n";

    int command = 0;





    resultLog = moveForward(command);





    UnityAssertEqualString((const char*)((expectedLog)), (const char*)((resultLog)), (

   ((void *)0)

   ), (UNITY_UINT)(66));



}



void test_moveBackward_command1_ReturnEnableLog(void)

{



    char* resultLog;

    char* expectedLog = "enable move backward\n";

    int command = 1;





    resultLog = moveBackward(command);





    UnityAssertEqualString((const char*)((expectedLog)), (const char*)((resultLog)), (

   ((void *)0)

   ), (UNITY_UINT)(81));



}



void test_moveBackward_command0_ReturnDisableLog(void)

{



    char* resultLog;

    char* expectedLog = "disable move backward\n";

    int command = 0;





    resultLog = moveBackward(command);





    UnityAssertEqualString((const char*)((expectedLog)), (const char*)((resultLog)), (

   ((void *)0)

   ), (UNITY_UINT)(96));



}
