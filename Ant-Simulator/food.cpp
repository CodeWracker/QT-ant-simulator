#include "food.h"

#include <iostream>
using namespace std;
Food::Food(QGraphicsPixmapItem * parent)
{

}
Food::Food(QGraphicsPixmapItem * parent,int nX, int nY){
    remaining =2;
    setPos(nX-25,nY-25);
    setPixmap(QPixmap(":/images/food-2.png"));

}
