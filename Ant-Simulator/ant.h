#ifndef ANT_H
#define ANT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMediaPlayer>

class Ant: public QObject, public QGraphicsPixmapItem
{
public:
    int goal; //0: Food - 1: Home
    bool food;
    Ant(QGraphicsPixmapItem *parent = 0);
    void move();
    ~Ant(){};
};

#endif // ANT_H
