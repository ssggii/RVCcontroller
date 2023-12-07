#include "build/test/mocks/mock_obstacleSensorInterface.h"
#include "src/detectObstacleDirection.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_detectObstacleDirection_Default_SaveObstacleInputsToArray(void)

{



    int obstacleInputArray[3] = {0};

    int frontSensorInput = 1;

    int leftSensorInput = 1;

    int rightSensorInput = 1;





    frontSensorInterface_CMockExpectAndReturn(23, frontSensorInput);

    leftSensorInterface_CMockExpectAndReturn(24, leftSensorInput);

    rightSensorInterface_CMockExpectAndReturn(25, rightSensorInput);



    detectObstacleDirection(obstacleInputArray);





    UnityAssertEqualNumber((UNITY_INT)((frontSensorInput)), (UNITY_INT)((obstacleInputArray[0])), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((leftSensorInput)), (UNITY_INT)((obstacleInputArray[1])), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((rightSensorInput)), (UNITY_INT)((obstacleInputArray[2])), (

   ((void *)0)

   ), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);



}
