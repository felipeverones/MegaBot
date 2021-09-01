#ifndef BOSS_H
#define BOSS_H

#include <QString>
#include "unit.h"
#include "enemy.h"
#include "configuration.h"
#include "powerprojectile.h"

class Boss: public Enemy
{
public:
    Boss();

    void switchSide();

    PowerProjectile * launchPower(int xOffset,int yOffset);


   // void setBossSprite(QString resource);
private:
    QPixmap img;
};

#endif // BOSS_H
