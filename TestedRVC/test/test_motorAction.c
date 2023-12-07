#include "unity.h"
#include "motorAction.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_turnLeft_triggered_ReturnCorrectLog(void) // turnLeft 호출되면 "trigger turn left\n" 반환해야 PASS
{
    // Arrange
    char* resultLog;
    char* expectedLog = "trigger turn left\n";
    
    // Act
    resultLog = turnLeft();

    // Assert
    TEST_ASSERT_EQUAL_STRING(expectedLog, resultLog);

}

void test_turnRight_triggered_ReturnCorrectLog(void) // turnRight 호출되면 "trigger turn right\n" 반환해야 PASS
{
    // Arrange
    char* resultLog;
    char* expectedLog = "trigger turn right\n";
    
    // Act
    resultLog = turnRight();

    // Assert
    TEST_ASSERT_EQUAL_STRING(expectedLog, resultLog);

}

void test_moveForward_command1_ReturnEnableLog(void) // moveForward(1)이면 "enable move forward\n" 반환해야 PASS
{
    // Arrange
    char* resultLog;
    char* expectedLog = "enable move forward\n";
    int command = 1;

    // Act
    resultLog = moveForward(command);

    // Assert
    TEST_ASSERT_EQUAL_STRING(expectedLog, resultLog);

}

void test_moveForward_command0_ReturnDisableLog(void) // moveForward(0)이면 "disable move forward\n" 반환해야 PASS
{
    // Arrange
    char* resultLog;
    char* expectedLog = "disable move forward\n";
    int command = 0;

    // Act
    resultLog = moveForward(command);

    // Assert
    TEST_ASSERT_EQUAL_STRING(expectedLog, resultLog);

}

void test_moveBackward_command1_ReturnEnableLog(void) // moveBackward(1)이면 "enable move backward\n" 반환해야 PASS
{
    // Arrange
    char* resultLog;
    char* expectedLog = "enable move backward\n";
    int command = 1;

    // Act
    resultLog = moveBackward(command);

    // Assert
    TEST_ASSERT_EQUAL_STRING(expectedLog, resultLog);

}

void test_moveBackward_command0_ReturnDisableLog(void) // moveBackward(0)이면 "disable move backward\n" 반환해야 PASS
{
    // Arrange
    char* resultLog;
    char* expectedLog = "disable move backward\n";
    int command = 0;

    // Act
    resultLog = moveBackward(command);

    // Assert
    TEST_ASSERT_EQUAL_STRING(expectedLog, resultLog);

}