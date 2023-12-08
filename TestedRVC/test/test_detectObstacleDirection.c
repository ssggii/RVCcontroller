// Copyright 2023 algoORgoal, ssggii
#include "unity.h"
#include "detectObstacleDirection.h"
#include <time.h>
#include <stdlib.h>

#include "mock_obstacleSensorInterface.h"

void setUp(void) {
}

void tearDown(void) {
}

// f,l,r input을 int[] 배열로 저장하면 PASS
void test_detectObstacleDirection_Default_SaveObstacleInputsToArray(void) {
    // Arrange
    unsigned int *seed;
    *seed = time(NULL);
    int obstacleInputArray[3] = {0};
    int frontSensorInput = 1;
    int leftSensorInput = 1;
    int rightSensorInput = 1;
    

    // Act
    frontSensorInterface_ExpectAndReturn(seed, frontSensorInput);
    leftSensorInterface_ExpectAndReturn(seed, leftSensorInput);
    rightSensorInterface_ExpectAndReturn(seed, rightSensorInput);

    detectObstacleDirection(obstacleInputArray, seed);

    // Assert
    TEST_ASSERT_EQUAL_INT(frontSensorInput, obstacleInputArray[0]);
    TEST_ASSERT_EQUAL_INT(leftSensorInput, obstacleInputArray[1]);
    TEST_ASSERT_EQUAL_INT(rightSensorInput, obstacleInputArray[2]);
}
