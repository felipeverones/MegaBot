#include "shield.h"
#include "player.h"

#include <QColor>

Shield::Shield()
{
    type = "shield";
    width = SHIELD_WIDTH;
    height = SHIELD_HEIGHT;

    QPixmap img = QPixmap(":/resources/images/shield.png");
    img = img.scaled(width,height);
    setPixmap(img);

    // Accept collision with transparent pixels
    this->setShapeMode(QGraphicsPixmapItem::BoundingRectShape);
}

void Shield::applyEffect(Unit *unit)
{
    if(unit->getType() == "player"){
        Player * player = static_cast<Player*>(unit);
        player->putShield();
    }
}
