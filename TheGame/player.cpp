#include "player.h"

Player::Player() : Unit()
{
    width = PLAYER_WIDTH;
    height = PLAYER_HEIGHT;
    gotPower = false;
    fire = false;
    gotShield = false;

    setSprite(":/resources/images/player/p1.png");
    type = "player";

    // Accept collision with transparent pixels
    this->setShapeMode(QGraphicsPixmapItem::BoundingRectShape);

    shieldTimer = NULL;
    powerTimer = NULL;
}

void Player::jump()
{
    if(flying == false){
        yForce = -900;
        updateMovementStates();
    }
}

void Player::bounce()
{
    yForce = -800;
    updateMovementStates();
}

void Player::setLife(int value)
{
    life = value;
    if(life <= 0)
        alive = false;
    else
        alive = true;
    getInfo()->setNbLife(life);
}

Info *Player::getInfo() const
{
    return info;
}

void Player::setInfo(Info *value)
{
    info = value;
}

void Player::putShield()
{
    setImmune(true);
    gotShield = true;
    shieldTimer = new QTimer();
    shieldTimer->start(5000);
    connect(shieldTimer,&QTimer::timeout,this,&Player::takeOffShield);
    info->setShieldIndicator(true);
}

void Player::catchPower()
{
    gotPower = true;
    powerTimer = new QTimer();
    powerTimer->start(10000);
    connect(powerTimer,&QTimer::timeout,this,&Player::disablePower);
    info->setPowerIndicator(true);
}

void Player::takeOffShield()
{
    gotShield = false;
    delete shieldTimer;
    shieldTimer = NULL;
    setImmune(false);
    info->setShieldIndicator(false);
}

void Player::disablePower()
{
    delete powerTimer;
    powerTimer = NULL;
    gotPower = false;
    info->setPowerIndicator(false);
}

bool Player::getGotShield() const
{
    return gotShield;
}

QTimer *Player::getPowerTimer() const
{
    return powerTimer;
}

QTimer *Player::getShieldTimer() const
{
    return shieldTimer;
}

bool Player::getFire() const
{
    return fire;
}

void Player::setFire(bool value)
{
    fire = value;
}

bool Player::getGotPower() const
{
    return gotPower;
}

PowerProjectile *Player::launchPower(int xPlanOffset, int yPlanOffset)
{

    //cria projétil
    if(getGotPower()){
        fire = true;
        PowerProjectile * proj = new PowerProjectile(getIsRightSide());
        if(getIsRightSide()){
            proj->setX(x() + getWidth() + xPlanOffset);
            proj->setBegin(x() + getWidth());
        }
        else{
            proj->setX(x() + xPlanOffset);
            proj->setBegin(x());
        }

        proj->setY(y() + getHeight() / 2 - proj->getHeight() / 2 + yPlanOffset);
        return proj;
    }
    return NULL;
}







