#ifndef LIFEBAR_H
#define LIFEBAR_H

#include <QGraphicsItemGroup>
#include "element.h"
#include <QDebug>

//barra de vidas
class LifeBar : public QGraphicsItemGroup
{
public:

    //inicializa a barra de vidas do player com 1
    LifeBar();

    //remove todos os objetos da barra de vidas do player
    ~LifeBar();

    //Seta o número de vidas na lifebar
    void setNbLife(int nb,int x, int y);

    //limpa toda a lifebar
    void clearLives();

    //retorna a largura da vida na lifebar
    int getLifeWidth() const;

    //retorna a altura da vida na lifebar
    int getLifeHeight() const;

private:

    //a lista de vidas na lifebar
    QList<Element *> * LifeList;

    //largura da vida
    int lifeWidth;

    //altura da vida
    int lifeHeight;
};

#endif // LIFEBAR_H
