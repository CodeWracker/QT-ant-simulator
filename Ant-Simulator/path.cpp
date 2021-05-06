#include "path.h"

Path::Path(QGraphicsPixmapItem * parent)
{

}
Path::Path(QGraphicsPixmapItem * parent,int g ,int nX, int nY,float lA ,int lx, int ly){
    goal = g;
    remainingSteps = 1000;
    if(g == 0)
        setPixmap(QPixmap(":/images/foodPath.png"));
    else
        setPixmap(QPixmap(":/images/colonyPath.png"));
    setPos(nX,nY);
    setLast(lx,ly);
    lastAngle = lY;

}

