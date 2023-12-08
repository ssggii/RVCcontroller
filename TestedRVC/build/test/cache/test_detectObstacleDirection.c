#include "build/test/mocks/mock_obstacleSensorInterface.h"
#include "src/detectObstacleDirection.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void setUp(void) {

}



void tearDown(void) {

}





void test_detectObstacleDirection_Default_SaveObstacleInputsToArray(void) {



    unsigned int *seed;

    *seed = time(

                ((void *)0)

                    );

    int obstacleInputArray[3] = {0};

    int frontSensorInput = 1;

    int leftSensorInput = 1;

    int rightSensorInput = 1;







    frontSensorInterface_CMockExpectAndReturn(27, seed, frontSensorInput);

    leftSensorInterface_CMockExpectAndReturn(28, seed, leftSensorInput);

    rightSensorInterface_CMockExpectAndReturn(29, seed, rightSensorInput);



    detectObstacleDirection(obstacleInputArray, seed);





    UnityAssertEqualNumber((UNITY_INT)((frontSensorInput)), (UNITY_INT)((obstacleInputArray[0])), (

   ((void *)0)

   ), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((leftSensorInput)), (UNITY_INT)((obstacleInputArray[1])), (

   ((void *)0)

   ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((rightSensorInput)), (UNITY_INT)((obstacleInputArray[2])), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

}
