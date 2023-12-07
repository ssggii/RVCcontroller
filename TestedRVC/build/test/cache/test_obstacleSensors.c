#include "build/test/mocks/mock_obstacleSensors.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


int d,f,l,r;



void setUp(void)

{

}



void tearDown(void)

{

    d = 0;

    f = 0;

    l = 0;

    r = 0;

}



void test_detectDust_DustLevelLessThanOrEqulTo60_ReturnFalse(void)

{



    int dustLevel1 = 40;

    int dustLevel2 = 60;





    int result1 = detectDust(dustLevel1);

    int result2 = detectDust(dustLevel2);





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((result1)), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((result2)), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);



}



void test_detectDust_DustLevelGreaterThan60_ReturnTrue(void)

{



    int dustLevel1 = 70;

    int dustLevel2 = 100;





    int result1 = detectDust(dustLevel1);

    int result2 = detectDust(dustLevel2);





    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((result1)), (

   ((void *)0)

   ), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((result2)), (

   ((void *)0)

   ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);



}



void test_dustSensorInterface_Default_ReturnCorrectRangeInput(void)

{



    int dustInput = dustSensorInterface();





    UnityAssertNumbersWithin( ((50)), (UNITY_INT) ((50)), (UNITY_INT) ((dustInput)), (

   ((void *)0)

   ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_INT);



}



void test_frontSensorInterface_Default_ReturnCorrectRangeInput(void)

{



    f = frontSensorInterface();





    UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT) ((1)), (UNITY_INT) ((f)), UNITY_SMALLER_OR_EQUAL, (

   ((void *)0)

   ), (UNITY_UINT)(67), UNITY_DISPLAY_STYLE_UINT);



}



void test_leftSensorInterface_Default_ReturnCorrectRangeInput(void)

{



    l = leftSensorInterface();





    UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT) ((1)), (UNITY_INT) ((l)), UNITY_SMALLER_OR_EQUAL, (

   ((void *)0)

   ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_UINT);



}



void test_rightSensorInterface_Default_ReturnCorrectRangeInput(void)

{



    r = rightSensorInterface();





    UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT) ((1)), (UNITY_INT) ((r)), UNITY_SMALLER_OR_EQUAL, (

   ((void *)0)

   ), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_UINT);



}



void test_detectObstacleDirection_Default_SaveObstacleInputsToArray(void)

{



    int obstacleInputArray[3] = {0};

    int frontSensorInput = 1;

    int leftSensorInput = 1;

    int rightSensorInput = 1;





    frontSensorInterface_CMockExpectAndReturn(100, frontSensorInput);

    leftSensorInterface_CMockExpectAndReturn(101, leftSensorInput);

    rightSensorInterface_CMockExpectAndReturn(102, rightSensorInput);



    detectObstacleDirection(obstacleInputArray);





    UnityAssertEqualNumber((UNITY_INT)((frontSensorInput)), (UNITY_INT)((obstacleInputArray[0])), (

   ((void *)0)

   ), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((leftSensorInput)), (UNITY_INT)((obstacleInputArray[1])), (

   ((void *)0)

   ), (UNITY_UINT)(108), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((rightSensorInput)), (UNITY_INT)((obstacleInputArray[2])), (

   ((void *)0)

   ), (UNITY_UINT)(109), UNITY_DISPLAY_STYLE_INT);



}
