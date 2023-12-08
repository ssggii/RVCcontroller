// Copyright 2023 algoORgoal, ssggii
#include "motorAction.h"
#include <stdio.h>

char* turnLeft() {
    char* log = "trigger turn left\n";
    return log;
}

char* turnRight() {
    char* log = "trigger turn right\n";
    return log;
}

char* moveForward(int command) {
    char* log;
    if (command == 1) {  // enable
        log = "enable move forward\n";
    } else if (command == 0) {  // disable
        log = "disable move forward\n";
    }

    return log;
}

char* moveBackward(int command) {
    char* log;
    if (command == 1) {  // enable
        log = "enable move backward\n";
    } else if (command == 0) {  // disable
        log = "disable move backward\n";
    }
    return log;
}
