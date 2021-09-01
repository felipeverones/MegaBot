#include "life.h"

Life::Life()
{
    type = "life";
    width = LIFE_WIDTH;
    height = LIFE_HEIGHT;

    setSprite(":/resources/images/life.png");

}

void Life::applyEffect(Unit *unit)
{
    unit->setLife(unit->getLife() + 1);
}
