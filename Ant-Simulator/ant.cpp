#include "ant.h"
#include "food.h"
#include "colony.h"
#include "path.h"
#include <math.h>
#include <iostream>
using namespace std;
#define PI 3.14159265
Ant::Ant(QGraphicsPixmapItem *parent) : QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/antLeft.png"));
    float ran = rand() % 360;
    setRotation(ran);
    goal = 0;
    food = false;
    steps = 0;
}
void Ant::move(float angle)
{
    float rot = angle + 180;
    if (rot < 0)
        rot = 360 + rot;
    if (rot > 360)
        rot = rot - 360;
    setRotation(rot);
    float dX = -20 * cos(rot * PI / 180);
    float dY = -10 * sin(rot * PI / 180);
    if (x() + dX < 10 || x() + dX > 1230)
        dX = 0;
    if (y() + dY < 10 || y() + dY > 710)
        dY = 0;
    move(dX, dY);
}
void Ant::move(int dX, int dY)
{
    moveBy(dX, dY);
    steps++;
    QList<QGraphicsItem *> colliding_item = collidingItems();
    for (QGraphicsItem *i : colliding_item)
    {

        if (goal == 0)
        {
            if (typeid(*i) == typeid(Food) && !food)
            {
                goal = 1;
                food = true;
                Food *f = (Food *)i;
                f->eat();
                if (rotation() > 180)
                    setRotation(rotation() - 180);
                else
                    setRotation(rotation() + 180);
                steps = 0;
            }
        }
        else
        {
            if (food)
            {
                if (typeid(*i) == typeid(Colony))
                {
                    Colony *c = (Colony *)i;

                    food = false;
                    goal = 0;
                    if (rotation() > 180)
                        setRotation(rotation() - 180);
                    else
                        setRotation(rotation() + 180);
                    steps = 0;
                }
            }
        }
    }
}
void Ant::move()
{
    float ran = rand() % 140;
    float rot = rotation() + (ran - 70);
    setRotation(rot);
    float dX = -20 * cos(rot * PI / 180);
    float dY = -10 * sin(rot * PI / 180);
    if (x() + dX < 10 || x() + dX > 1230)
        dX = 0;
    if (y() + dY < 10 || y() + dY > 710)
        dY = 0;
    move(dX, dY);
}
