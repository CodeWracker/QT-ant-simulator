#ifndef ERASER_H
#define ERASER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QMediaPlayer>
#include <vector>
#include "path.h"
using namespace std;
class Eraser: public QObject, public QGraphicsPixmapItem
{
public:
    Eraser(QGraphicsPixmapItem *parent = 0);
    Eraser(QPoint p = QPoint());
    void erase(QPoint p, vector<Path*> &pathList,QGraphicsScene* scene);
};

#endif // ERASER_H
