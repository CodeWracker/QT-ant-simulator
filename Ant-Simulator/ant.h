#ifndef ANT_H
#define ANT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMediaPlayer>

class Ant: public QObject, public QGraphicsPixmapItem
{
public:
    Ant(QGraphicsPixmapItem *parent = 0);
    void move();
};

#endif // ANT_H
