#ifndef ANT_H
#define ANT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMediaPlayer>
#include <vector>
using namespace std;
class Ant: public QObject, public QGraphicsPixmapItem
{
public:
    int goal; //0: Food - 1: Home
    bool food;
    int comingFromIndex;
    int lX;
    int lY;
    void setLast(int X, int Y){lX = X; lY = Y;};
    float lastAngle;
    Ant(QGraphicsPixmapItem *parent = 0);
    void move();
    ~Ant(){};
};

#endif // ANT_H
