#include "power.h"

Power::Power()
{
    type = "power";
    width = POWER_HEIGHT;
    height = POWER_HEIGHT;

    setSprite(":/resources/images/power.png");
}

void Power::applyEffect(Unit *unit)
{
    if(unit->getType() == "player"){
        Player * player = static_cast<Player*>(unit);
        player->catchPower();
    }
}
