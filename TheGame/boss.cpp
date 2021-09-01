#include "boss.h"

Boss::Boss(): Enemy()
{
    width = BOSS_WIDTH;
    height = BOSS_HEIGHT;

    // set graphic
    setSprite(":/resources/images/boss/boss.png");
    type = "boss";

    // Accept collision with transparent pixels
    this->setShapeMode(QGraphicsPixmapItem::BoundingRectShape);


    isRightSide = false;
    //setXForce(3);
    setLife(20);

}

PowerProjectile *Boss::launchPower(int xPlanOffset, int yPlanOffset)
{

    // create projectile
        PowerProjectile * proj = new PowerProjectile(getIsRightSide());
        if(getIsRightSide()){
            proj->setX(x() + getWidth() + xPlanOffset);
            proj->setBegin(x() + getWidth());
        }
        else{
            proj->setX(x() + xPlanOffset);
            proj->setBegin(x());
        }

        proj->setY(y() + getHeight() / 2 - proj->getHeight() / 2 + yPlanOffset);
        return proj;

}



void Boss::switchSide()
{
//    if(isRightSide){
//        isRightSide = false;
//        setXForce(-3);
//    }
//    else{
//        isRightSide = true;
//        setXForce(3);
//    }
}



