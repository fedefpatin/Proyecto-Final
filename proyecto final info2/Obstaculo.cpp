#include "Obstaculo.h"

QRectF Obstaculo::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void Obstaculo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-r,-r,2*r,2*r,QPixmap(":/rock"));
    //painter->drawEllipse(boundingRect());
}
Obstaculo::Obstaculo()
{
        angulo=(30*pi)/180;
        posx=-2000;
        posy=-2000;
        vel_ini=-25;
        vy=0;
        vx=0;
        r=10;
        setPos(posx,-posy);
}

void Obstaculo::ActualizaPos()
{
    CalculaVelocidad();
    posx+=vx*delta;
    posy+=vy*delta+(0.5*g*delta*delta);
    angulo=atan2(vy,vx);
    setPos(posx,-posy);
}

void Obstaculo::CalculaVelocidad()
{
    vx=vel_ini*cos(angulo);
    vy= vel_ini*sin(angulo)+g*delta;
    vel_ini= (sqrt(pow(vx,2)+pow(vy,2)));
}


