#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QTimer>
#include <QDebug>

#include "unit.h"
#include "wall.h"
#include "configuration.h"
#include "info.h"
#include "shield.h"
#include "powerprojectile.h"

class Player : public Unit{
    Q_OBJECT
public:

    Player();

    //faz o player pular
    void jump();

    //faz o player quicar ao cair em cima de um inimigo
    void bounce();

    //muda as vidas do player
    void setLife(int value);

    //retorna os valores de info
    Info *getInfo() const;

    //Seta info
    void setInfo(Info *value);

    //equipa o player com shield
    void putShield();

    //equipa o player com poder
    void catchPower();

    //retorna true se o player tem poder
    bool getGotPower() const;

    //retorna um objeto PowerProjectile* que será um projétil
    PowerProjectile * launchPower(int xOffset,int yOffset);

    //retorna o valor do atributo fire
    bool getFire() const;

    //modifica o valor de fire
    void setFire(bool value);

    //retorna o valor do Shield Timer
    QTimer *getShieldTimer() const;

    //retorna o valor do powerTimer
    QTimer *getPowerTimer() const;

    //retorna o valor do atributo gotShield
    bool getGotShield() const;

public slots:

    //tira o shield do player
    void takeOffShield();

    //tira o power do player
    void disablePower();

private:

    //contém as informações do player
    Info * info;

    //o timer a partir de quando o shield é pego
    QTimer * shieldTimer;

    //o timer a partir de quando o poder é pego
    QTimer * powerTimer;

    //true se o player tem poder
    bool gotPower;

    //true se o player tem shield
    bool gotShield;

    //true se o player tem fire
    bool fire;
};

#endif // PLAYER_H
