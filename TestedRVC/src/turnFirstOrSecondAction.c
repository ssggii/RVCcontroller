#include "turnFirstOrSecondAction.h"
#include "cleanerAction.h"
#include "motorAction.h"
#include "turn.h"

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