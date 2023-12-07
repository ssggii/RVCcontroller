#include "turnFirstOrSecondAction.h"
#include "cleanerAction.h"
#include "motorAction.h"
#include "turn.h"
#include <stdio.h>

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