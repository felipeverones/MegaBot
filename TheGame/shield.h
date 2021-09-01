#ifndef SHIELD_H
#define SHIELD_H

#include "consumables.h"
#include "configuration.h"

//consumível shield
class Shield : public Consumables
{
public:

    //reseta o tipo para shield
    Shield();

    //aplica o efeito do consumível shield ao player
    void applyEffect(Unit * unit);

private:

    //tempo que o shield dura
    QTimer * bonusTimer;
};

#endif // SHIELD_H
