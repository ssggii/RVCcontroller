#include "detectObstacleDirection.h"
#include "obstacleSensorInterface.h"

void detectObstacleDirection(int obstacleArray[]) {
    obstacleArray[0] = frontSensorInterface();  // F input
    obstacleArray[1] = leftSensorInterface();   // L input
    obstacleArray[2] = rightSensorInterface();  // R input
}