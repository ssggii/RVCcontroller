#include "performActionByMode.h"
#include "performAction.h"
#include "cleanerAction.h"
#include <stdio.h>

int performActionByMode(int d, int f, int l, int r, int mode){
    if (mode == 1 && f == 0){
        if (d == 1){
            printf("%s", powerUpCleaner());
        }else{
            printf("\n");
        }
        return 1;
    }else if (mode == 1){
        performActionForward(f, l, r, mode);
        if (f == 1 && l == 1 && r == 1)
            return 0;
    }else if (mode == 0){
        performActionBackward(f, l, r, mode);
        return 1;
    }
}