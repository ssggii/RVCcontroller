// Copyright 2023 algoORgoal, ssggii
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "cleanerAction.h"
#include "detectObstacleDirection.h"
#include "obstacleSensorInterface.h"
#include "performAction.h"
#include "motorAction.h"
#include "performActionByMode.h"
#include "turn.h"
#include "turnFirstOrSecondAction.h"

int main(void) {
    int d, f, l, r;
    int obstacleLocationArray[3];
    int mode = 1;
    while (1) {
        int dustInput = dustSensorInterface();
        d = detectDust(dustInput);  // Decide if dust detected (d)
        // Get obstacle direction inputs(f,l,r)
        detectObstacleDirection(obstacleLocationArray);
        f = obstacleLocationArray[0];
        l = obstacleLocationArray[1];
        r = obstacleLocationArray[2];
        printf("d, f, l, r, mode: %d, %d, %d, %d, %d\n", d, f, l, r, mode);
        mode = performActionByMode(d, f, l, r, mode);
        sleep(3);
    }
}
