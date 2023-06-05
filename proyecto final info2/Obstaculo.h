#ifndef OBSTACULO_H
#define OBSTACULO_H
#include <math.h>
#include <QGraphicsItem>
#include <QPainter>

#define g -9.8
#define delta 0.1
#define pi 3.1416

class Obstaculo : public QGraphicsItem
{
public:
  double angulo,vx,vy,vel_ini,posx,posy;
  int r;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    Obstaculo();
    void ActualizaPos();
    void CalculaVelocidad();

};
#endif // OBSTACULO_H




