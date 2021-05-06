#include "ant.h"
#include "food.h"
#include "colony.h"
#include "path.h"
#include <math.h>
#include <iostream>
using namespace std;
#define PI 3.14159265
Ant::Ant(QGraphicsPixmapItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/antLeft.png"));
    float ran = rand()%360;
    setRotation(ran);
    goal = 0;
    food = false;
    if(ran<180) lastAngle = ran+180;
    else lastAngle = ran-180;
}
void Ant::move(){
    float ran = rand()%90;
    float rot = rotation() +(ran-45);
    setRotation(rot);
    float dX = -20*cos(rot*PI/180);
    float dY = -10*sin(rot*PI/180);
    if(x()+dX<10 || x()+dX>1230) dX = 0;
    if(y()+ dY < 10 || y()+dY>710) dY = 0;
    if(ran<180) lastAngle = ran+180;
    else lastAngle = ran-180;
    setLast(x(),y());
    moveBy(dX,dY);
    QList<QGraphicsItem *> colliding_item = collidingItems();
    for(QGraphicsItem* i : colliding_item){

        if(goal == 0 ){
            if(typeid(*i) == typeid(Food) && !food){
                cout << "Eat"<<endl;
                goal = 1;
                food = true;
                Food* f = (Food*)i;
                f->eat();
                rot-=(ran-45);
                if(rot>180)rot-=180;
                else rot+=180;
                setRotation(rot);
            }
        }else{
            if(food){
                if(typeid(*i) == typeid(Colony)){
                    Colony *c = (Colony*)i;
                    if(c->stock < c->fillMax){
                        food = false;
                        goal = 0;
                        c->stock++;

                        rot-=(ran-45);
                        if(rot>180)rot-=180;
                        else rot+=180;
                        setRotation(rot);
                    }
                }
            }
        }
    }
}
