#include "../unity/unity.h"
#include "../main.h"

/*
    Unit testing for sensor intefaces implemented by:

    int detectDust();
    int dustSensorInterface();
    int frontSensorInterface();
    int leftSensorInterface();
    int rightSensorInterface();
    void detectObstacleDirection(int obstacleArray[]);

}

*/

void setUp(){ // before each test
}

void tearDown(){ // after each test
}

void detectDust_DustLevelLessThanOrEqulTo60_ReturnZero(void)
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

void detectDust_DustLevelGreaterThan60_ReturnZero(void)
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

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(detectDust_DustLevelLessThanOrEqulTo60_ReturnZero);
	RUN_TEST(detectDust_DustLevelGreaterThan60_ReturnZero);
	return UNITY_END();
}