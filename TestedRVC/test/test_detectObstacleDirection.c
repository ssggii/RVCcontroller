// Copyright 2023 algoORgoal, ssggii
#include "unity.h"
#include "detectObstacleDirection.h"

#include "mock_obstacleSensorInterface.h"

void setUp(void) {
}

void tearDown(void) {
}

// f,l,r input을 int[] 배열로 저장하면 PASS
void test_detectObstacleDirection_Default_SaveObstacleInputsToArray(void) {
    // Arrange
    int obstacleInputArray[3] = {0};
    int frontSensorInput = 1;
    int leftSensorInput = 1;
    int rightSensorInput = 1;

    // Act
    frontSensorInterface_ExpectAndReturn(frontSensorInput);
    leftSensorInterface_ExpectAndReturn(leftSensorInput);
    rightSensorInterface_ExpectAndReturn(rightSensorInput);

    detectObstacleDirection(obstacleInputArray);

    // Assert
    TEST_ASSERT_EQUAL_INT(frontSensorInput, obstacleInputArray[0]);
    TEST_ASSERT_EQUAL_INT(leftSensorInput, obstacleInputArray[1]);
    TEST_ASSERT_EQUAL_INT(rightSensorInput, obstacleInputArray[2]);
}
