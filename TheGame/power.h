#ifndef POWER_H
#define POWER_H         //Era Power //

#include "consumables.h"
#include "configuration.h"
#include "player.h"

//Consumível power
class Power : public Consumables
{
public:

    //reseta o tipo para power
    Power();

    //aplica o efeito do consumível power se a unidade for um player
    void applyEffect(Unit * unit);
};

#endif // Power_H
