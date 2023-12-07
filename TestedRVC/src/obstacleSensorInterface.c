#include "obstacleSensorInterface.h"
#include <stdlib.h>
#include <time.h>

int detectDust(int dustInput){ 
   int dustLevel = dustInput;
   int isDustDetected = 0;
   if(dustLevel > 60){
        isDustDetected = 1;
   }
   return isDustDetected;
}

int dustSensorInterface(){ // Detect dust level from sensor
    int dustLevel;
    srand(time(NULL));
    dustLevel = rand() % 101; // range from 0 to 100
    return dustLevel;
}

int frontSensorInterface(){ // Detect F input
    int isObstacleDetectedOnFront;
    srand(time(NULL));
    isObstacleDetectedOnFront = rand() % 2;
    return isObstacleDetectedOnFront;
}

int leftSensorInterface(){ // Detect L input
    int isObstacleDetectedOnLeft;
    srand(time(NULL));
    isObstacleDetectedOnLeft = rand() % 2;
    return isObstacleDetectedOnLeft;
}

int rightSensorInterface(){ // Detect R input
    int isObstacleDetectedOnRight;
    srand(time(NULL));
    isObstacleDetectedOnRight = rand() % 2;
    return isObstacleDetectedOnRight;
}