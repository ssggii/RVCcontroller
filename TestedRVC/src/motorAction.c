#include "motorAction.h"

void turnLeft(){
    printf("trigger turn left\n");
}

void turnRight(){
    printf("trigger turn right\n");
}

void moveForward(int command){
    if (command == 1){ //enable
        printf("enable move forward\n");
    }else if (command == 0){ //disable
        printf("disable move forward\n");
    }
}

void moveBackward(int command){
    if (command == 1){ //enable
        printf("enable move backward\n");
    }else if (command == 0){ //disable
        printf("disable move backward\n");
    }
}