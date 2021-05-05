#include "colony.h"
#include <iostream>
#include <QColor>
#include <QPainter>
#include <QPen>
using namespace std;
Colony::Colony(QGraphicsPixmapItem * parent)
{

}
//setRect(qreal x, qreal y, qreal width, qreal height)

Colony::Colony(QGraphicsPixmapItem * parent,int nX, int nY){
    stock =0;
    fillMax = 2;
    setPos(nX-25,nY-25);
    setPixmap(QPixmap(":/images/colony.png"));

    createdAnts = false;
}
