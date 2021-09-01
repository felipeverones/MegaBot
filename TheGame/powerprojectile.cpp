#include "powerprojectile.h"

PowerProjectile::PowerProjectile(bool right) : Projectile()
{
    isRightSide = right;
    height = PROJ_HEIGHT;
    width = PROJ_WIDTH;
    setSprite(":/resources/images/projectile.png");

    //força inicial
    if(isRightSide){
        xForce = 13;
    }
    else{
        xForce = -13;
    }
}

void PowerProjectile::touch(Unit * unit)
{
    unit->receiveDammage(1);
}
