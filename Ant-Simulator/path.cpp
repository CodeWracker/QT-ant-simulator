#include "path.h"

Path::Path(QGraphicsPixmapItem * parent)
{

}
Path::Path(QGraphicsPixmapItem * parent,int g,int nX, int nY){
    goal = g;
    remainingSteps = 10;
    if(g == 0)
        setPixmap(QPixmap(":/images/foodPath.png"));
    else
        setPixmap(QPixmap(":/images/colonyPath.png"));
    setPos(nX,nY);

}

