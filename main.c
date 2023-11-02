#include <stdio.h>

int detectDust(){ // Decide dust input (0 or 1)
   int dustLevel = dustSensorInterface();
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
    printf("Please enter the dust level between 0 and 100: ");
    scanf("%d", &dustLevel); // Need exception handling?
    while (getchar() != '\n');
    return dustLevel;
}

int frontSensorInterface(){ // Detect F input
    int isObstacleDetectedOnFront;
    printf("Please enter the F input(1 for true, 0 for false): ");
    scanf("%d", &isObstacleDetectedOnFront); // Need exception handling?
    while (getchar() != '\n');
    return isObstacleDetectedOnFront;
}

int leftSensorInterface(){ // Detect L input
    int isObstacleDetectedOnLeft;
    printf("Please enter the L input(1 for true, 0 for false): ");
    scanf("%d", &isObstacleDetectedOnLeft); // Need exception handling?
    while (getchar() != '\n');
    return isObstacleDetectedOnLeft;
}

int rightSensorInterface(){ // Detect R input
    int isObstacleDetectedOnRight;
    printf("Please enter the R input(1 for true, 0 for false): ");
    scanf("%d", &isObstacleDetectedOnRight); // Need exception handling?
    while (getchar() != '\n');
    return isObstacleDetectedOnRight;
}

void performActionByMode(int f, int l, int r,int mode){
    if (mode == 1 && f == 1){
        powerUpCleaner();
    }
    else if ( mode == 1){
        performActionForward(f, l, r, mode);
    }else if (mode == 0){
        performActionBackward(f, l, r, mode);
    }
}

void performActionForward(int f, int l, int r, int mode){
    turnFirstActionFromForward(f, l, r, mode);
    turnSecondAction();
}

void performActionBackward(int f, int l, int r, int mode){
    turnFirstActionFromBackward(f, l, r, mode);
    turnSecondAction();
}


void turnFirstActionFromForward(int f, int l, int r, int mode){
    moveForward(0);
    cleanerSwtich(0);
    turn(f, l, r, mode);
}

void turnFirstActionFromBackward(int f, int l, int r, int mode){
    moveBackward(0);
    turn(f, l, r, mode);
}

void turnSecondAction(){
    moveForward(1);
    cleanerSwtich(1);
}

void moveForward(int command){
    if (command == 1){ //enable
        printf("enable move forward\n");
    }else if (command == 0){ //disable
        printf("disable move forward\n");
    }
}

void cleanerSwtich(int command){
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
        if (!l){
            turnLeft();
        }else if (l && !r){
            turnRight();
        }
        moveBackward(0);
    }
}

void turnLeft(){
    printf("trigger turn left");
}

void turnRight(){
    print("trigger turn right\n");
}

void moveBackward(int command){
    if (command == 1){ //enable
        printf("enable move backward\n");
    }else if (command == 0){ //disable
        printf("disable move backward\n");
    }
}

int main(void){
    while(1){
        // todo: take inputs from sensors
        int d,f,l,r;
        int obstacleLocationArray[3];
        d = detectDust(); // Get dust input(d)
        detectObstacleDirection(obstacleLocationArray); // Get obstacle direction inputs(f,l,r) 
        f = obstacleLocationArray[0];
        l = obstacleLocationArray[1];
        r = obstacleLocationArray[2];
        performActionByMode(0, 0, 0, 0);
    }
}