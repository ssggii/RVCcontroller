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





    turnLeft_CMockExpect(23);

    turn(f, l, r, mode);

}



void test_turn_1011_turnLeft(void)

{



    int f = 1;

    int l = 0;

    int r = 1;

    int mode = 1;





    turnLeft_CMockExpect(36);

    turn(f, l, r, mode);

}



void test_turn_1101_turnRight(void)

{



    int f = 1;

    int l = 1;

    int r = 0;

    int mode = 1;





    turnRight_CMockExpect(49);

    turn(f, l, r, mode);

}



void test_turn_1111_moveBackward(void)

{



    int f = 1;

    int l = 1;

    int r = 1;

    int mode = 1;

    int command = 1;





    moveBackward_CMockExpect(63, command);

    turn(f, l, r, mode);

}



void test_turn_0000_moveBackward(void)

{



    int f = 0;

    int l = 0;

    int r = 0;

    int mode = 0;

    int command = 0;





    moveBackward_CMockExpect(77, command);

    turnLeft_CMockExpect(78);

    turn(f, l, r, mode);

}



void test_turn_0010_moveBackward(void)

{



    int f = 0;

    int l = 0;

    int r = 1;

    int mode = 0;

    int command = 0;





    moveBackward_CMockExpect(92, command);

    turnLeft_CMockExpect(93);

    turn(f, l, r, mode);

}



void test_turn_1000_moveBackward(void)

{



    int f = 1;

    int l = 0;

    int r = 0;

    int mode = 0;

    int command = 0;





    moveBackward_CMockExpect(107, command);

    turnLeft_CMockExpect(108);

    turn(f, l, r, mode);

}



void test_turn_1010_moveBackward(void)

{



    int f = 1;

    int l = 0;

    int r = 1;

    int mode = 0;

    int command = 0;





    moveBackward_CMockExpect(122, command);

    turnLeft_CMockExpect(123);

    turn(f, l, r, mode);

}



void test_turn_0100_turnRight(void)

{



    int f = 0;

    int l = 1;

    int r = 0;

    int mode = 0;

    int command = 0;





    moveBackward_CMockExpect(137, command);

    turnRight_CMockExpect(138);

    turn(f, l, r, mode);

}



void test_turn_1100_turnRight(void)

{



    int f = 1;

    int l = 1;

    int r = 0;

    int mode = 0;

    int command = 0;





    moveBackward_CMockExpect(152, command);

    turnRight_CMockExpect(153);

    turn(f, l, r, mode);

}
