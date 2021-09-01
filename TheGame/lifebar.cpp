#include "lifebar.h"

LifeBar::LifeBar()
{
    lifeWidth = 50;
    lifeHeight = 50;
    LifeList = new QList<Element *>();

}

LifeBar::~LifeBar()
{
    clearLives();
    delete LifeList;
}

void LifeBar::setNbLife(int nb,int x,int y)
{
    clearLives();
    int lifeGap = 10;
    for(int index = 0 ; index < nb ; index ++){
        Element * life = new Element();
        life->setHeight(lifeHeight);
        life->setWidth(lifeHeight);
        life->setSprite(":resources/images/life.png");
        life->setPos(index * (lifeWidth + lifeGap) + x, y);
        this->addToGroup(life);
        LifeList->append(life);
    }
}

void LifeBar::clearLives()
{
    foreach(Element * life,*LifeList){
        this->removeFromGroup(life);
        delete life;
    }
    LifeList->clear();
}

int LifeBar::getLifeWidth() const
{
    return lifeWidth;
}

int LifeBar::getLifeHeight() const
{
    return lifeHeight;
}
