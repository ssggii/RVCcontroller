#include "src/obstacleSensorInterface.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






int d, f, l, r;

unsigned int seed;



void setUp(void)

{

    seed = time(

               ((void *)0)

                   );

}



void tearDown(void)

{

    d = 0;

    f = 0;

    l = 0;

    r = 0;



}





void test_detectDust_DustLevelLessThanOrEqulTo60_ReturnFalse(void) {



    int dustLevel1 = 40;

    int dustLevel2 = 60;





    int result1 = detectDust(dustLevel1);

    int result2 = detectDust(dustLevel2);





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((result1)), (

   ((void *)0)

   ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((result2)), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

}





void test_detectDust_DustLevelGreaterThan60_ReturnTrue(void) {



    int dustLevel1 = 70;

    int dustLevel2 = 100;





    int result1 = detectDust(dustLevel1);

    int result2 = detectDust(dustLevel2);





    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((result1)), (

   ((void *)0)

   ), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((result2)), (

   ((void *)0)

   ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

}





void test_dustSensorInterface_Default_ReturnCorrectRangeInput(void) {



    int dustInput = dustSensorInterface(&seed);





    UnityAssertNumbersWithin( ((50)), (UNITY_INT) ((50)), (UNITY_INT) ((dustInput)), (

   ((void *)0)

   ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);

}





void test_frontSensorInterface_Default_ReturnCorrectRangeInput(void) {



    f = frontSensorInterface(&seed);





    UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT) ((1)), (UNITY_INT) ((f)), UNITY_SMALLER_OR_EQUAL, (

   ((void *)0)

   ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_UINT);

}





void test_leftSensorInterface_Default_ReturnCorrectRangeInput(void) {



    l = leftSensorInterface(&seed);





    UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT) ((1)), (UNITY_INT) ((l)), UNITY_SMALLER_OR_EQUAL, (

   ((void *)0)

   ), (UNITY_UINT)(78), UNITY_DISPLAY_STYLE_UINT);

}





void test_rightSensorInterface_Default_ReturnCorrectRangeInput(void) {



    r = rightSensorInterface(&seed);





    UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT) ((1)), (UNITY_INT) ((r)), UNITY_SMALLER_OR_EQUAL, (

   ((void *)0)

   ), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_UINT);

}
