#include "ant.h"
#include <math.h>
#include <iostream>
using namespace std;
#define PI 3.14159265
Ant::Ant(QGraphicsPixmapItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/antLeft.png"));
    float ran = rand()%360;
    setRotation(ran);
    goal = 0;
}
void Ant::move(){
    float ran = rand()%90;
    float rot = rotation() +(ran-45);
    setRotation(rot);
    float dX = -20*cos(rot*PI/180);
    float dY = -10*sin(rot*PI/180);
    if(x()+dX<10 || x()+dX>1230) dX = 0;
    if(y()+ dY < 10 || y()+dY>710) dY = 0;
    moveBy(dX,dY);
}
