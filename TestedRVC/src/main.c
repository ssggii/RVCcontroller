#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "cleanerAction.h"
#include "detectObstacleDirection.h"
#include "obstacleSensorInterface.h"
#include "performAction.h"
#include "motorAction.h"
#include "performActionByMode.h"
#include "turn.h"
#include "turnFirstOrSecondAction.h"

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
        printf("d, f, l, r, mode: %d, %d, %d, %d, %d\n", d, f, l, r, mode);
        mode = performActionByMode(d, f, l, r, mode);
        printf("\n");
        sleep(3);
    }
}

/*
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
            printf("%s", powerUpCleaner());
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
    printf("%s", moveForward(0));
    printf("%s", cleanerSwitch(0));
    turn(f, l, r, mode);
}

void turnFirstActionFromBackward(int f, int l, int r, int mode){
    turn(f, l, r, mode);
}

void turnSecondAction(){
    printf("%s", moveForward(1));
    printf("%s", cleanerSwitch(1));
}

char* cleanerSwitch(int command){
    char* log;
    if (command == 1){ // turn on
        log = "turn on cleaner\n";
    }else if (command == 0){ // turn off
        log = "turn off cleaner\n";
    }
    return log;
}

char* powerUpCleaner(){
    char* log = "power up cleaner\n";
    return log;
}

void turn(int f, int l, int r, int mode){
    if (mode == 1){
        if (f && !l){
            printf("%s", turnLeft());
        }else if (f && l && !r){
            printf("%s", turnRight());
        }else if (f && l && r){
            printf("%s", moveBackward(1));
        }
    }else if (mode == 0){
        printf("%s", moveBackward(0));
        if (!l){
            printf("%s", turnLeft());
        }else if (l && !r){
            printf("%s", turnRight());
        }
    }
}

char* turnLeft(){
    char* log = "trigger turn left\n";
    return log;
}

char* turnRight(){
    char* log = "trigger turn right\n";
    return log;
}

char* moveForward(int command){
    char* log;
    if (command == 1){ //enable
        log = "enable move forward\n";
    }else if (command == 0){ //disable
        log = "disable move forward\n";
    } 
    return log;
}

char* moveBackward(int command){
    char* log;
    if (command == 1){ //enable
        log = "enable move backward\n";
    } else if (command == 0){ //disable
        log = "disable move backward\n";
    }
    return log;
}

*/
