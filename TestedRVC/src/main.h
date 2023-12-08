// Copyright 2023 algoORgoal, ssggii
#ifndef TESTEDRVC_SRC_MAIN_H_
#define TESTEDRVC_SRC_MAIN_H_
int detectDust(int dustInput);
void detectObstacleDirection(int obstacleArray[], unsigned int *seed);
int dustSensorInterface(unsigned int *seed);
int frontSensorInterface(unsigned int *seed);
int leftSensorInterface(unsigned int *seed);
int rightSensorInterface(unsigned int *seed);
int performActionByMode(int d, int f, int l, int r, int mode);
void performActionForward(int f, int l, int r, int mode);
void performActionBackward(int f, int l, int r, int mode);
void turnFirstActionFromForward(int f, int l, int r, int mode);
void turnFirstActionFromBackward(int f, int l, int r, int mode);
void turnSecondAction();
char* cleanerSwitch(int command);
char* powerUpCleaner();
void turn(int f, int l, int r, int mode);
char* turnLeft();
char* turnRight();
char* moveForward(int command);
char* moveBackward(int command);
#endif  // TESTEDRVC_SRC_MAIN_H_
