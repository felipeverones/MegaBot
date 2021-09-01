#ifndef INFO_H
#define INFO_H

#include <QGraphicsItemGroup>
#include "configuration.h"
#include "lifebar.h"
#include "element.h"

//Informações do player, interface do jogador no mapa
class Info : public QGraphicsItemGroup
{
public:

    Info();

    //remove todos os objetos das informações do player
    ~Info();

    //valor das vidas do jogador
    void setNbLife(int value);

    //indicador de shield
    void setShieldIndicator(bool state);

    //indicador de power
    void setPowerIndicator(bool state);

private:

    //barra de vidas do jogador
    LifeBar * life;

    //indicador de shield
    Element * shieldIndicator;

    //indicador de poder
    Element * powerIndicator;

    //atualiza a posição dos indicadores
    void updateIndicatorPos();
};

#endif // INFO_H
