#include "turn.h"
#include "motorAction.h"

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
        moveBackward(0);
        if (!l){
            turnLeft();
        }else if (l && !r){
            turnRight();
        }
    }
}