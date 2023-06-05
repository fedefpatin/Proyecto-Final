#include "Plataforma.h"

QRectF Plataforma::boundingRect() const
{
    return QRectF(-56,-31,36*7,7*7);
}

void Plataforma::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-56,-31,16*7,7*7,QPixmap(":/indigena"));
    //painter->drawRect(boundingRect());
}

Plataforma::Plataforma(int i)
{
    posx=0;
    posy=M[i];
    setPos(posx,-posy);
}

void Plataforma::mover(int x){
    posx=x;
    setPos(posx,-posy);
}
