#include "path.h"

Path::Path(QGraphicsPixmapItem * parent)
{

}
Path::Path(QGraphicsPixmapItem * parent,int g ,int nX, int nY,int s){
    goal = g;
    dist = s;
    remainingSteps = 100 + 200*goal;
    if(g == 0)
        setPixmap(QPixmap(":/images/foodPath.png"));
    else
        setPixmap(QPixmap(":/images/colonyPath.png"));
    setPos(nX,nY);

}

