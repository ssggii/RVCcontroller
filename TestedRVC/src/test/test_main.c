#include "unity.h"
#include "main.h"

int d,f,l,r;

void setUp(void)
{
}

void tearDown(void)
{
}


void detectDust_DustLevelLessThanOrEqulTo60_ReturnFalse(void) // dustLevel이 60 이하일 때 False(0) 반환하면 PASS
{
    // Arrange
    int dustLevel1 = 40;
    int dustLevel2 = 60;
    
    // Act
    int result1 = detectDust(dustLevel1);
    int result2 = detectDust(dustLevel2);

    // Assert
    TEST_ASSERT_EQUAL_INT(0, result1);
    TEST_ASSERT_EQUAL_INT(0, result2);

}

void detectDust_DustLevelGreaterThan60_ReturnTrue(void) // dustLevel이 60 초과일 때 True(1) 반환하면 PASS
{
    // Arrange
    int dustLevel1 = 70;
    int dustLevel2 = 100;
    
    // Act
    int result1 = detectDust(dustLevel1);
    int result2 = detectDust(dustLevel2);

    // Assert
    TEST_ASSERT_EQUAL_INT(1, result1);
    TEST_ASSERT_EQUAL_INT(1, result2);
    
}

void dustSensorInterface_Default_ReturnCorrectRangeInput(void) // 먼지 흡입량(input)이 0~100 범위에 있으면 PASS
{
    // Arrange, Act
    int dustInput = dustSensorInterface();

    // Assert
    TEST_ASSERT_INT_WITHIN(50, 50, dustInput);

}

void frontSensorInterface_Default_ReturnCorrectRangeInput(void) // 전방 장애물 센서 input이 0 또는 1이면 PASS
{
    // Arrange, Act
    f = frontSensorInterface();

    // Assert
    TEST_ASSERT_LESS_OR_EQUAL_UINT(1, f);

}

void leftSensorInterface_Default_ReturnCorrectRangeInput(void) // 좌측 장애물 센서 input이 0 또는 1이면 PASS
{
    // Arrange, Act
    l = leftSensorInterface();

    // Assert
    TEST_ASSERT_LESS_OR_EQUAL_UINT(1, l);

}

void rightSensorInterface_Default_ReturnCorrectRangeInput(void) // 우측 장애물 센서 input이 0 또는 1이면 PASS
{
    // Arrange, Act
    r = rightSensorInterface();

    // Assert
    TEST_ASSERT_LESS_OR_EQUAL_UINT(1, r);

}

