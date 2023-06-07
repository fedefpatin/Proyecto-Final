#include "Esfera.h"

void Esfera::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-r,-r,2*r,2*r,QPixmap(":/flecha"));
    //painter->drawEllipse(boundingRect());
}

Esfera::Esfera()
{
    int i;

    srand(time(NULL));
    i=rand()%2;
    posx=(rand()%100)*L[i];
    i=rand()%2;
    posy=(rand()%100)*L[i];
    posx=0;
    posy=M[i];
    setPos(posx,-posy);
    i=rand()%2;
    vx=25*L[i];
    vx=25*M[i];
    vy=60;
    r=10;
    setPos(-1000,-1000);
}

QRectF Esfera::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void Esfera::ActualizaPos()
{
    if(posx+r>=250 || posx-r<=-250)
        vx=vx*e;
    if(posy+r>=225)
        vy=vy*e;
    if(posy-r<=-225)
        vy=-vy;
    posx+=vx*delta;
    posy+=vy*delta;
    setPos(posx,-posy);
}

