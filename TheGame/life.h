#ifndef LIFE_H
#define LIFE_H

#include "consumables.h"
#include "configuration.h"

//classe dos consumíveis de saúde
class Life: public Consumables
{
public:

    //reseta o tipo para life
    Life();

    //aplica o efeito do consumível de vida se um player o pega
    void applyEffect(Unit * unit);
};

#endif // LIFE_H
