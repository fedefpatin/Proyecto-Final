#ifndef ESFERA_H
#define ESFERA_H
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <QGraphicsItem>
#include <QPainter>
#include "Plataforma.h"

#define delta 0.1
#define PI 3.1416

class Esfera : public QGraphicsItem
{
public:
    double posx,posy,vx,vy,L[2]={-1,1},e=-1.01;
    double M[5]={-215,-195,-175,-155,-135},j=0;

    int r;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    Esfera();
    void ActualizaPos();



};

#endif // ESFERA_H
