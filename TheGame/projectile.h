#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "unit.h"

class Projectile : public Unit
{
public:

    Projectile();

    virtual void touch(Unit *)=0;

    //move o projétil
    void move();

    //checa se o projétil está na máxima distância
    bool isMaxDist();

    //seta o valor do atributo begin
    void setBegin(int value);

private:
    //máxima distância que o projétil pode viajar
    int maxDist;

    //a distância que o projétil viajou
    int begin;
};

#endif // PROJECTILE_H
