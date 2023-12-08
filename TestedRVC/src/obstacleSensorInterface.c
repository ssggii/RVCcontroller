// Copyright 2023 algoORgoal, ssggii
#include "obstacleSensorInterface.h"
#include <stdlib.h>
#include <time.h>

int detectDust(int dustInput) {
    int dustLevel = dustInput;
    int isDustDetected = 0;
    if (dustLevel > 60) {
        isDustDetected = 1;
    }
    return isDustDetected;
}

int dustSensorInterface(unsigned int *seed) {  // Detect dust level from sensor
    int dustLevel;
    dustLevel = rand_r(seed) % 101;  // range from 0 to 100
    return dustLevel;
}

int frontSensorInterface(unsigned int *seed) {  // Detect F input
    int isObstacleDetectedOnFront;
    isObstacleDetectedOnFront = rand_r(seed) % 2;
    return isObstacleDetectedOnFront;
}

int leftSensorInterface(unsigned int *seed) {  // Detect L input
    int isObstacleDetectedOnLeft;
    isObstacleDetectedOnLeft = rand_r(seed) % 2;
    return isObstacleDetectedOnLeft;
}

int rightSensorInterface(unsigned int *seed) {  // Detect R input
    int isObstacleDetectedOnRight;
    isObstacleDetectedOnRight = rand_r(seed) % 2;
    return isObstacleDetectedOnRight;
}
