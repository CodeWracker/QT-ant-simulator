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
    Ant(QGraphicsPixmapItem *parent = 0);
    void move();
};

#endif // ANT_H
