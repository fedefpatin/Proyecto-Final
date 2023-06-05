#include "Extra.h"

QRectF Extra::boundingRect() const
{
    return QRectF(-6*r,-1.5*r,12*r,6*r);
}

void Extra::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->drawPixmap(-6*r,-1.5*r,12*r,6*r,QPixmap(":/minero"));
   //painter->drawRect(boundingRect());
}

Extra::Extra(double x, double y)
{
    posx=x;
    posy=y;
    v=0;
    r=5;
    setPos(posx,-posy);
}

void Extra::ActualizaPos()
{
    CalculaVelocidad();
    if(posy-r<=-225)
        v=-v;
    posy+=v*delta+(0.5*gr*delta*delta);
    setPos(-posx,-posy);
}

void Extra::CalculaVelocidad()
{
    v+=gr*delta;
}

Extra::~Extra(){

}
