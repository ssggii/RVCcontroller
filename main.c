#include <stdio.h>

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

}