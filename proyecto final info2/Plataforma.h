#ifndef PLATAFORMA_H
#define PLATAFORMA_H
#include <QGraphicsItem>
#include <QPainter>
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

class Plataforma:public QGraphicsItem
{
public:
    int posx,posy,M[5]={-215,-195,-175,-155,-135},j=0;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    Plataforma(int i);
    void mover(int x);

};

#endif // PLATAFORMA_H




