// Copyright 2023 algoORgoal, ssggii
#include "cleanerAction.h"

char* cleanerSwitch(int command) {
    char* log;
    if (command == 1) {  // turn on
        log = "turn on cleaner\n";
    } else if (command == 0) {  // turn off
        log = "turn off cleaner\n";
    }
    return log;
}

char* powerUpCleaner() {
    char* log = "power up cleaner\n";
    return log;
}
