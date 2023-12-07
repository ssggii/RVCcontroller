#include "unity.h"
#include "turn.h"

#include "mock_motorAction.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_turn_1001_turnLeft(void)
{
    // Arrange
    int f = 1;
    int l = 0;
    int r = 0;
    int mode = 1;
    char* log = "trigger turn left\n";

    // Act, Assert
    turnLeft_ExpectAndReturn(log);
    turn(f, l, r, mode);
}

void test_turn_1011_turnLeft(void)
{
    // Arrange
    int f = 1;
    int l = 0;
    int r = 1;
    int mode = 1;
    char* log = "trigger turn left\n";

    // Act, Assert
    turnLeft_ExpectAndReturn(log);
    turn(f, l, r, mode);
}

void test_turn_1101_turnRight(void)
{
    // Arrange
    int f = 1;
    int l = 1;
    int r = 0;
    int mode = 1;
    char* log = "trigger turn right\n";

    // Act, Assert
    turnRight_ExpectAndReturn(log);
    turn(f, l, r, mode);
}

void test_turn_1111_moveBackward(void)
{
    // Arrange
    int f = 1;
    int l = 1;
    int r = 1;
    int mode = 1;
    int command = 1;
    char* log = "enable move backward\n";

    // Act, Assert
    moveBackward_ExpectAndReturn(command, log);
    turn(f, l, r, mode);
}

void test_turn_0000_moveBackward(void)
{
    // Arrange
    int f = 0;
    int l = 0;
    int r = 0;
    int mode = 0;
    int command = 0;
    char* log1 = "disable move backward\n";
    char* log2 = "trigger turn left\n";

    // Act, Assert
    moveBackward_ExpectAndReturn(command, log1);
    turnLeft_ExpectAndReturn(log2);
    turn(f, l, r, mode);
}

void test_turn_0010_moveBackward(void)
{
    // Arrange
    int f = 0;
    int l = 0;
    int r = 1;
    int mode = 0;
    int command = 0;
    char* log1 = "disable move backward\n";
    char* log2 = "trigger turn left\n";

    // Act, Assert
    moveBackward_ExpectAndReturn(command, log1);
    turnLeft_ExpectAndReturn(log2);
    turn(f, l, r, mode);
}

void test_turn_1000_moveBackward(void)
{
    // Arrange
    int f = 1;
    int l = 0;
    int r = 0;
    int mode = 0;
    int command = 0;
    char* log1 = "disable move backward\n";
    char* log2 = "trigger turn left\n";

    // Act, Assert
    moveBackward_ExpectAndReturn(command, log1);
    turnLeft_ExpectAndReturn(log2);
    turn(f, l, r, mode);
}

void test_turn_1010_moveBackward(void)
{
    // Arrange
    int f = 1;
    int l = 0;
    int r = 1;
    int mode = 0;
    int command = 0;
    char* log1 = "disable move backward\n";
    char* log2 = "trigger turn left\n";

    // Act, Assert
    moveBackward_ExpectAndReturn(command, log1);
    turnLeft_ExpectAndReturn(log2);
    turn(f, l, r, mode);
}

void test_turn_0100_turnRight(void)
{
    // Arrange
    int f = 0;
    int l = 1;
    int r = 0;
    int mode = 0;
    int command = 0;
    char* log1 = "disable move backward\n";
    char* log2 = "trigger turn right\n";

    // Act, Assert
    moveBackward_ExpectAndReturn(command, log1);
    turnRight_ExpectAndReturn(log2);
    turn(f, l, r, mode);
}

void test_turn_1100_turnRight(void)
{
    // Arrange
    int f = 1;
    int l = 1;
    int r = 0;
    int mode = 0;
    int command = 0;
    char* log1 = "disable move backward\n";
    char* log2 = "trigger turn right\n";

    // Act, Assert
    moveBackward_ExpectAndReturn(command, log1);
    turnRight_ExpectAndReturn(log2);
    turn(f, l, r, mode);
}