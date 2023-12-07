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

    // Act, Assert
    turnLeft_Expect();
    turn(f, l, r, mode);
}

void test_turn_1011_turnLeft(void)
{
    // Arrange
    int f = 1;
    int l = 0;
    int r = 1;
    int mode = 1;

    // Act, Assert
    turnLeft_Expect();
    turn(f, l, r, mode);
}

void test_turn_1101_turnRight(void)
{
    // Arrange
    int f = 1;
    int l = 1;
    int r = 0;
    int mode = 1;

    // Act, Assert
    turnRight_Expect();
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

    // Act, Assert
    moveBackward_Expect(command);
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

    // Act, Assert
    moveBackward_Expect(command);
    turnLeft_Expect();
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

    // Act, Assert
    moveBackward_Expect(command);
    turnLeft_Expect();
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

    // Act, Assert
    moveBackward_Expect(command);
    turnLeft_Expect();
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

    // Act, Assert
    moveBackward_Expect(command);
    turnLeft_Expect();
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

    // Act, Assert
    moveBackward_Expect(command);
    turnRight_Expect();
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

    // Act, Assert
    moveBackward_Expect(command);
    turnRight_Expect();
    turn(f, l, r, mode);
}