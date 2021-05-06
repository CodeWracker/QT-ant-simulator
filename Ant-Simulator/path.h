#ifndef PATH_H
#define PATH_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <vector>
using namespace std;
class Path: public QObject, public QGraphicsPixmapItem
{
public:
    int lX;
    int lY;
    void setLast(int X, int Y){lX = X; lY = Y;};
    float lastAngle;

    int goal; //0: food - 1: colony
    int remainingSteps;
    bool isVisible(){return remainingSteps>=0;};
    Path(QGraphicsPixmapItem * parent=0);
    Path(QGraphicsPixmapItem * parent=0,int g =0,int nX = 0, int nY = 0,float lA =0,int lx = 0, int ly = 0);
    ~Path(){};
};

#endif // PATH_H
