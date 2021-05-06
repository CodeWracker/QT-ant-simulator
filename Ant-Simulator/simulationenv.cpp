#include "simulationenv.h"
#include "ant.h"
#include "colony.h"
#include "food.h"
#include "path.h"
#include <QKeyEvent>
#include <iostream>
using namespace std;
SimulationEnv::SimulationEnv(QWidget *parent )
{
    // criar scene
   //if(scene)
   scene = new QGraphicsScene();
   // fixar o tamanho em 800x600, que é infinito por definição
   scene->setSceneRect(0, 0, 1240, 720);
   setScene(scene);
   setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   // fixar o tamanho
   setFixedSize(1240, 720);

   run = false;
   timer = new QTimer();
   stepTime = 100;
   connect(timer, &QTimer::timeout, this, std::bind(&SimulationEnv::step, this));
}
void SimulationEnv::keyPressEvent(QKeyEvent *event){

    if(event->key() == Qt::Key_Enter){
        for(Colony *c : colonyList){
            if(!c->createdAnts){
                for(int i = 0;i<antsNumber;i++){
                    Ant* a = new Ant();
                    scene->addItem(a);
                    antList.push_back(a);
                    a->setPos(c->x()+25,c->y()+25);
                    a->setLast(c->x()+25,c->y()+25);
                    c->createdAnts = true;
                }
            }
        }
    }
    if(event->key() == Qt::Key_Space){

        if(run){
            timer->stop();
            run = false;
            for(Path* p: pathList){
                scene->addItem(p);
            }
        }else{
            timer->start(stepTime);
            run = true;
            for(Path* p: pathList){
                scene->removeItem(p);
            }
        }
    }
}
void SimulationEnv::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        Colony *c = new Colony(nullptr,event->x(),event->y());
        scene->addItem(c);
        colonyList.push_back(c);
    }
    if(event->button() == Qt::RightButton){
        Food *f = new Food(nullptr,event->x(),event->y());
        scene->addItem(f);
        foodList.push_back(f);
    }
}
void SimulationEnv::step(){
    for(Ant* a : antList){
        if(a){
            Path *p = new Path(nullptr,1-a->goal,a->x(),a->y(), a->lastAngle, a->lX,a->lY);
            pathList.push_back(p);
            bool achou = false;
            for(Path* i : pathList){


                if(i->goal == a->goal && i->isVisible() && i->x()-a->x()<30 && i->y()-a->y()<30){
                    cout << "Penis"<<endl;
                    a->setLast(a->x(),a->y());
                    a->lastAngle = a->rotation();
                    a->setPos(i->lX,i->lY);
                    a->setRotation(i->lastAngle);
                    achou = true;
                    break;
                }


            }
            if(!achou)
            a->move();
        }
    }
    vector<Path*> aux;
    for(Path* p : pathList){
        if(p){

            p->remainingSteps-=1;
            if(p->isVisible()) aux.push_back(p);
        }
    }
    pathList = aux;

}
void SimulationEnv::startSimulation(bool showPath,int antNumber){
    scene->clear();
    showPaths = showPath;
    antsNumber = antNumber;
    run = true;
    timer->start(stepTime);
    show();
}
