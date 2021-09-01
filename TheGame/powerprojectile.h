#ifndef POWERPROJECTILE_H
#define POWERPROJECTILE_H

#include "projectile.h"

class PowerProjectile : public Projectile
{
public:

    PowerProjectile(bool right);

    //dá 1 de dano ao enemy ao qual se colide
    void touch(Unit *);
};

#endif // POWERPROJECTILE_H
