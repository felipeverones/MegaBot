#include "enemy.h"

Enemy::Enemy() : Unit()
{
    width = ENEMY_WIDTH;
    height = ENEMY_HEIGHT;

    // set graphic
    QPixmap img = QPixmap(":/resources/images/enemy.png");
    img = img.scaled(width,height);
    setPixmap(img);

    // Accept collision with transparent pixels
    this->setShapeMode(QGraphicsPixmapItem::BoundingRectShape);

    type = "enemy";
}
