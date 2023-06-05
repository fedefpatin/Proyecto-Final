#ifndef EXTRA_H
#define EXTRA_H

#include <QGraphicsItem>
#include <QPainter>

#define gr -0.0005
#define delta 0.1
#define pi 3.1416

class Extra : public QGraphicsItem
{
    public:
    double posx,posy,v;
    int r;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    Extra(double x, double y );
    void ActualizaPos();
    void CalculaVelocidad();
    ~Extra();
};

#endif // MOVIMIENTO_H
