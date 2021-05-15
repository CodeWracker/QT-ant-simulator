#ifndef COLONY_H
#define COLONY_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
class Colony : public QObject, public QGraphicsPixmapItem
{
public:
    bool createdAnts;
    int stock;
    int fillMax;
    Colony(QGraphicsPixmapItem *parent = 0);
    Colony(QGraphicsPixmapItem *parent = 0, int nX = 100, int nY = 100);
    ~Colony(){};
};

#endif // COLONY_H
