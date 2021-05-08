#include "path.h"

Path::Path(QGraphicsPixmapItem * parent)
{

}
Path::Path(QGraphicsPixmapItem * parent,int g ,int nX, int nY,int s,int l){
    goal = g;
    dist = s;
    remainingSteps = l + 2*l*goal;
    if(g == 0)
        setPixmap(QPixmap(":/images/foodPath.png"));
    else
        setPixmap(QPixmap(":/images/colonyPath.png"));
    setPos(nX,nY);

}

