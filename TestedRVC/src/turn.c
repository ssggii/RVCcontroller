#include "turn.h"
#include "motorAction.h"
#include <stdio.h>

void turn(int f, int l, int r, int mode){
    if (mode == 1){
        if (f && !l){
            printf("%s", turnLeft());
        }else if (f && l && !r){
            printf("%s", turnRight());
        }else if (f && l && r){
            printf("%s", moveBackward(1));
        }
    }else if (mode == 0){
        printf("%s", moveBackward(0));
        if (!l){
            printf("%s", turnLeft());
        }else if (l && !r){
            printf("%s", turnRight());
        }
    }
}