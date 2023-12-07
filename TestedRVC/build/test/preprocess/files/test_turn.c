#include "build/test/mocks/mock_motorAction.h"
#include "src/turn.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_turn_1001_turnLeft(void)

{



    int f = 1;

    int l = 0;

    int r = 0;

    int mode = 1;





    turnLeft_Expect();

    turn(f, l, r, mode);

}



void test_turn_1011_turnLeft(void)

{



    int f = 1;

    int l = 0;

    int r = 1;

    int mode = 1;





    turnLeft_Expect();

    turn(f, l, r, mode);

}



void test_turn_1101_turnRight(void)

{



    int f = 1;

    int l = 1;

    int r = 0;

    int mode = 1;





    turnRight_Expect();

    turn(f, l, r, mode);

}



void test_turn_1111_moveBackward(void)

{



    int f = 1;

    int l = 1;

    int r = 1;

    int mode = 1;

    int command = 1;





    moveBackward_Expect(command);

    turn(f, l, r, mode);

}



void test_turn_0000_moveBackward(void)

{



    int f = 0;

    int l = 0;

    int r = 0;

    int mode = 0;

    int command = 0;





    moveBackward_Expect(command);

    turnLeft_Expect();

    turn(f, l, r, mode);

}



void test_turn_0010_moveBackward(void)

{



    int f = 0;

    int l = 0;

    int r = 1;

    int mode = 0;

    int command = 0;





    moveBackward_Expect(command);

    turnLeft_Expect();

    turn(f, l, r, mode);

}



void test_turn_1000_moveBackward(void)

{



    int f = 1;

    int l = 0;

    int r = 0;

    int mode = 0;

    int command = 0;





    moveBackward_Expect(command);

    turnLeft_Expect();

    turn(f, l, r, mode);

}



void test_turn_1010_moveBackward(void)

{



    int f = 1;

    int l = 0;

    int r = 1;

    int mode = 0;

    int command = 0;





    moveBackward_Expect(command);

    turnLeft_Expect();

    turn(f, l, r, mode);

}



void test_turn_0100_turnRight(void)

{



    int f = 0;

    int l = 1;

    int r = 0;

    int mode = 0;

    int command = 0;





    moveBackward_Expect(command);

    turnRight_Expect();

    turn(f, l, r, mode);

}



void test_turn_1100_turnRight(void)

{



    int f = 1;

    int l = 1;

    int r = 0;

    int mode = 0;

    int command = 0;





    moveBackward_Expect(command);

    turnRight_Expect();

    turn(f, l, r, mode);

}
