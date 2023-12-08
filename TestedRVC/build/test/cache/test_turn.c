#include "build/test/mocks/mock_motorAction.h"
#include "src/turn.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void setUp(void) {

}



void tearDown(void) {

}



void test_turn_1001_turnLeft(void) {



    int f = 1;

    int l = 0;

    int r = 0;

    int mode = 1;

    char* log = "trigger turn left\n";





    turnLeft_CMockExpectAndReturn(22, log);

    turn(f, l, r, mode);

}



void test_turn_1011_turnLeft(void) {



    int f = 1;

    int l = 0;

    int r = 1;

    int mode = 1;

    char* log = "trigger turn left\n";





    turnLeft_CMockExpectAndReturn(35, log);

    turn(f, l, r, mode);

}



void test_turn_1101_turnRight(void) {



    int f = 1;

    int l = 1;

    int r = 0;

    int mode = 1;

    char* log = "trigger turn right\n";





    turnRight_CMockExpectAndReturn(48, log);

    turn(f, l, r, mode);

}



void test_turn_1111_moveBackward(void) {



    int f = 1;

    int l = 1;

    int r = 1;

    int mode = 1;

    int command = 1;

    char* log = "enable move backward\n";





    moveBackward_CMockExpectAndReturn(62, command, log);

    turn(f, l, r, mode);

}



void test_turn_0000_moveBackward(void) {



    int f = 0;

    int l = 0;

    int r = 0;

    int mode = 0;

    int command = 0;

    char* log1 = "disable move backward\n";

    char* log2 = "trigger turn left\n";





    moveBackward_CMockExpectAndReturn(77, command, log1);

    turnLeft_CMockExpectAndReturn(78, log2);

    turn(f, l, r, mode);

}



void test_turn_0010_moveBackward(void) {



    int f = 0;

    int l = 0;

    int r = 1;

    int mode = 0;

    int command = 0;

    char* log1 = "disable move backward\n";

    char* log2 = "trigger turn left\n";





    moveBackward_CMockExpectAndReturn(93, command, log1);

    turnLeft_CMockExpectAndReturn(94, log2);

    turn(f, l, r, mode);

}



void test_turn_1000_moveBackward(void) {



    int f = 1;

    int l = 0;

    int r = 0;

    int mode = 0;

    int command = 0;

    char* log1 = "disable move backward\n";

    char* log2 = "trigger turn left\n";





    moveBackward_CMockExpectAndReturn(109, command, log1);

    turnLeft_CMockExpectAndReturn(110, log2);

    turn(f, l, r, mode);

}



void test_turn_1010_moveBackward(void) {



    int f = 1;

    int l = 0;

    int r = 1;

    int mode = 0;

    int command = 0;

    char* log1 = "disable move backward\n";

    char* log2 = "trigger turn left\n";





    moveBackward_CMockExpectAndReturn(125, command, log1);

    turnLeft_CMockExpectAndReturn(126, log2);

    turn(f, l, r, mode);

}



void test_turn_0100_turnRight(void) {



    int f = 0;

    int l = 1;

    int r = 0;

    int mode = 0;

    int command = 0;

    char* log1 = "disable move backward\n";

    char* log2 = "trigger turn right\n";





    moveBackward_CMockExpectAndReturn(141, command, log1);

    turnRight_CMockExpectAndReturn(142, log2);

    turn(f, l, r, mode);

}



void test_turn_1100_turnRight(void) {



    int f = 1;

    int l = 1;

    int r = 0;

    int mode = 0;

    int command = 0;

    char* log1 = "disable move backward\n";

    char* log2 = "trigger turn right\n";





    moveBackward_CMockExpectAndReturn(157, command, log1);

    turnRight_CMockExpectAndReturn(158, log2);

    turn(f, l, r, mode);

}
