#include "mobileenemy.h"

MobileEnemy::MobileEnemy() : Enemy()
{
    setSprite(":/resources/images/mobile.png");
    type = "mobileEnemy";
    isRightSide = true;
    setXForce(20);
}

void MobileEnemy::switchSide()
{
    if(isRightSide){
        isRightSide = false;
        setXForce(-20);
    }
    else{
        isRightSide = true;
        setXForce(20);
    }
}
