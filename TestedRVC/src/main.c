#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

#ifndef TEST
int main(void){
    int d,f,l,r;
    int obstacleLocationArray[3];
    int mode = 1;
    while(1){
        int dustInput = dustSensorInterface();
        d = detectDust(dustInput); // Decide if dust detected (d)
        detectObstacleDirection(obstacleLocationArray); // Get obstacle direction inputs(f,l,r) 
        f = obstacleLocationArray[0];
        l = obstacleLocationArray[1];
        r = obstacleLocationArray[2];
        mode = performActionByMode(d, f, l, r, mode);
    }
}
#endif

int detectDust(int dustInput){ 
   int dustLevel = dustInput;
   int isDustDetected = 0;
   if(dustLevel > 60){
        isDustDetected = 1;
   }
   return isDustDetected;
}

void detectObstacleDirection(int obstacleArray[]) {
    obstacleArray[0] = frontSensorInterface();  // F input
    obstacleArray[1] = leftSensorInterface();   // L input
    obstacleArray[2] = rightSensorInterface();  // R input
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

int performActionByMode(int d, int f, int l, int r, int mode){
    if (mode == 1 && f == 0){
        if (d == 1){
            powerUpCleaner();
        }else{
            printf("\n");
        }
        return 1;
    }else if (mode == 1){
        performActionForward(f, l, r, mode);
        if (f == 1 && l == 1 && r == 1)
            return 0;
    }else if (mode == 0){
        performActionBackward(f, l, r, mode);
        return 1;
    }
}

void performActionForward(int f, int l, int r, int mode){
    turnFirstActionFromForward(f, l, r, mode);
    if (f == 1 && l == 1 && r == 1)
        return;
    turnSecondAction();
}

void performActionBackward(int f, int l, int r, int mode){
    turnFirstActionFromBackward(f, l, r, mode);
    turnSecondAction();
}


void turnFirstActionFromForward(int f, int l, int r, int mode){
    moveForward(0);
    cleanerSwitch(0);
    turn(f, l, r, mode);
}

void turnFirstActionFromBackward(int f, int l, int r, int mode){
    turn(f, l, r, mode);
}

void turnSecondAction(){
    moveForward(1);
    cleanerSwitch(1);
}

void moveForward(int command){
    if (command == 1){ //enable
        printf("enable move forward\n");
    }else if (command == 0){ //disable
        printf("disable move forward\n");
    }
}

void cleanerSwitch(int command){
    if (command == 1){ // turn on
        printf("turn on cleaner\n");
    }else if (command == 0){ // turn off
        printf("turn off cleaner\n");
    }
}

void powerUpCleaner(){
    printf("power up cleaner\n");
}

void turn(int f, int l, int r, int mode){
    if (mode == 1){
        if (f && !l){
            turnLeft();
        }else if (f && l && !r){
            turnRight();
        }else if (f && l && r){
            moveBackward(1);
        }
    }else if (mode == 0){
        moveBackward(0);
        if (!l){
            turnLeft();
        }else if (l && !r){
            turnRight();
        }
    }
}

void turnLeft(){
    printf("trigger turn left\n");
}

void turnRight(){
    printf("trigger turn right\n");
}

void moveBackward(int command){
    if (command == 1){ //enable
        printf("enable move backward\n");
    }else if (command == 0){ //disable
        printf("disable move backward\n");
    }
}

