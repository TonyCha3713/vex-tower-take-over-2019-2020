#include "main.h"
void redSmallZone7()
{   
    moveBasePID(350,350,600);
    moveBasePID(-185,-185,450);
    runArm(85);
    delay(250);
    runIntake(-110);
    delay(750);
    runArm(-130);
    delay(1000);
    runIntake(100);
    moveBase(1100,90);
    delay(2600);
    runLeftBase(50);
    runRightBase(130);
    delay(500);
    runLeftBase(-50);
    runRightBase(-130);
    delay(550);
    moveBasePID(750,750,1000);
    moveBasePID(-1000,-1000,1200);
    turnBase(515,75);
    delay(1500);
    moveBasePID(650,650,1100);
    runIntake(0);
    pidTray(2800);
    /*
    delay(480);
    moveBasePID(700,700,900);
    moveBasePID(-1100,-1100,1100);
    turnBase(465,80);
    delay(1400);
    moveBasePID(620,620,450);
    runIntake(0);
    pidTray(2700);
    moveBasePID(-500,-500,1000);
    */
}