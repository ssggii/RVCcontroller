





int detectDust();

void detectObstacleDirection(int obstacleArray[]);

int dustSensorInterface();

int frontSensorInterface();

int leftSensorInterface();

int rightSensorInterface();

int performActionByMode(int d,int f, int l, int r,int mode);

void performActionForward(int f, int l, int r, int mode);

void performActionBackward(int f, int l, int r, int mode);

void turnFirstActionFromForward(int f, int l, int r, int mode);

void turnFirstActionFromBackward(int f, int l, int r, int mode);

void turnSecondAction();

void moveForward(int command);

void cleanerSwitch(int command);

void powerUpCleaner();

void turn(int f, int l, int r, int mode);

void turnLeft();

void turnRight();

void moveBackward(int command);
