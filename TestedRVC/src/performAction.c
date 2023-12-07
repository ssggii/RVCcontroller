#include "turnFirstOrSecondAction.h"

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