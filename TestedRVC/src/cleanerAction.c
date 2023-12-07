#include "cleanerAction.h"

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