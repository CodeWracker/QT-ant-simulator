#ifndef FOOD_H
#define FOOD_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
class Food: public QObject,public QGraphicsPixmapItem
{
private:

    int remaining;
public:
    Food(QGraphicsPixmapItem * parent=0);
    Food(QGraphicsPixmapItem * parent=0,int nX=100, int nY=100);
    Food(){};
    bool isAvaible(){return remaining>0;};
    void eat(){
        remaining--;
        setPixmap(QPixmap(":/images/food-"+QString::number(remaining)+".png"));
    }
    ~Food(){};
};

#endif // FOOD_H
