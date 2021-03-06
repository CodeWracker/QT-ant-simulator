#include "eraser.h"
#include "ant.h"
#include "food.h"
#include "colony.h"
#include "path.h"
#include <math.h>
#include <iostream>
#include <QGraphicsScene>
using namespace std;
Eraser::Eraser(QGraphicsPixmapItem *parent) : QGraphicsPixmapItem(parent)
{
}
Eraser::Eraser(QPoint p)
{

    setPixmap(QPixmap(":/images/eraser.png"));
    setPos(p.x() - 20, p.y() - 20);
}
void Eraser::erase(QPoint p, vector<Path *> &pathList, QGraphicsScene *scene, bool run)
{
    vector<Path *> aux;
    setPos(p.x(), p.y() - 20);
    for (Path *pt : pathList)
    {
        if (x() - pt->x() >= -20 && x() - pt->x() <= 20)
        {
            if (y() - pt->y() >= -20 && y() - pt->y() <= 20)
            {
                pt->remainingSteps = 0;
                if(!run)
                scene->removeItem(pt);
                //delete pt; //por algum motivo isso da erro
            }else{
                aux.push_back(pt);
            }
        }else{
            aux.push_back(pt);
        }
    }
    pathList = aux;
}
