#ifndef PATH_H
#define PATH_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
class Path: public QObject, public QGraphicsPixmapItem
{
public:
    int goal; //0: food - 1: colony
    int remainingSteps;
    Path(QGraphicsPixmapItem * parent=0);
    Path(QGraphicsPixmapItem * parent=0,int g =0,int nX = 0, int nY = 0);
    ~Path(){};
};

#endif // PATH_H
