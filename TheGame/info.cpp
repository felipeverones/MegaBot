#include "info.h"

Info::Info()
{
    int separator = 10;

    life = new LifeBar();
    this->addToGroup(life);

    shieldIndicator = new Element(50,50);  //50x70
    shieldIndicator->setSprite(":/resources/images/shield.png");
    shieldIndicator->setPos(0,separator + life->getLifeHeight());
    shieldIndicator->hide();
    this->addToGroup(shieldIndicator);

    powerIndicator = new Element(50,50);
    powerIndicator->setSprite(":/resources/images/power.png");
    powerIndicator->setPos(shieldIndicator->getWidth() + separator,separator + life->getLifeHeight());
    powerIndicator->hide();
    this->addToGroup(powerIndicator);
    setPos(10,10);
}

Info::~Info()
{
    delete life;
    delete shieldIndicator;
    delete powerIndicator;
}

void Info::setNbLife(int value)
{
    life->setNbLife(value,x(),y());
}

void Info::setShieldIndicator(bool state)
{
    if(state){
        shieldIndicator->show();
        shieldIndicator->setType("shown");
    }

    else{
        shieldIndicator->hide();
        shieldIndicator->setType("hide");
    }
    updateIndicatorPos();
}

void Info::setPowerIndicator(bool state)
{
    if(state){
        powerIndicator->show();
        powerIndicator->setType("shown");

    }

    else{
        powerIndicator->hide();
        powerIndicator->setType("hide");
    }
    updateIndicatorPos();
}

void Info::updateIndicatorPos()
{
    int xUsed = 0;
    int separator = 10;
    if(powerIndicator->getType() == "shown"){
        powerIndicator->setPos(xUsed + separator,separator + life->getLifeHeight());
        xUsed = powerIndicator->getWidth();
    }
    if(shieldIndicator->getType() == "shown"){
        shieldIndicator->setPos(xUsed + separator,separator + life->getLifeHeight());
        xUsed = shieldIndicator->getWidth();
    }
}
