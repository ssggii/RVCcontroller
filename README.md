# RVCcontroller
This repsoitory is an implementation of RVC(Robot Vacuum Cleaner) Controller Assignment in [software engineering class in Konkuk University](http://dslab.konkuk.ac.kr/). 

## How to run
Note that this repository doesn't exist for the real-world physical embedded controllers, but for the command-line interface environment. Therefore, you only need to run the C file to run this app like this:

### compile
`g++ main.c`

### run
`./main.c`

## How it was built
Note that this application is designed with SASD approach and this repository includes the implementation of it. SASD(Structural Analysis and Structural Design) is a development method used for procedural programming. In Structural Analysis step, we modelled the program by drawing [FSM(Finite State Machine)](https://drive.google.com/file/d/1IO13PMfYZL_JQLbLFZicN5SWvCmoyEPN/view?usp=sharing)
. In Structural Design Step, we built [structured charts(a kind of a data-flow diagram)](https://docs.google.com/presentation/d/14h40652Z8FSaqZ2yPGb6fMuDI63xpy2Jzjoj-ENqmag/edit?usp=sharing) to split the application into a modules and show how they are called.
