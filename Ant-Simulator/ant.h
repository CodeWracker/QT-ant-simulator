#ifndef ANT_H
#define ANT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMediaPlayer>
#include <vector>
using namespace std;
class Ant : public QObject, public QGraphicsPixmapItem
{
public:
    int goal; //0: Food - 1: Home
    bool food;
    int steps;
    float lastAngle;
    Ant(QGraphicsPixmapItem *parent = 0);
    void move();
    void move(float angle);
    ~Ant(){};

private:
    void move(int dX, int dY);
};

#endif // ANT_H
