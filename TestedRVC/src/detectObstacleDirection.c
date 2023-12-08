// Copyright 2023 algoORgoal, ssggii
#include "detectObstacleDirection.h"
#include "obstacleSensorInterface.h"

void detectObstacleDirection(int obstacleArray[], unsigned int *seed) {
    obstacleArray[0] = frontSensorInterface(seed);  // F input
    obstacleArray[1] = leftSensorInterface(seed);   // L input
    obstacleArray[2] = rightSensorInterface(seed);  // R input
}
