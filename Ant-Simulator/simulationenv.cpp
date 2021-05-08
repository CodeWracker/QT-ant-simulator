#include "simulationenv.h"
#include "ant.h"
#include "colony.h"
#include "food.h"
#include "path.h"
#include <QKeyEvent>
#include <iostream>
#include <math.h>
using namespace std;
SimulationEnv::SimulationEnv(QWidget *parent )
{

    cmd = 0;
    showCMD = false;

    pathLife = 150;

    /*Coloca a musica pra tocar*/
    simMsc = new QMediaPlayer(this);
    simMsc->setMedia(QUrl("qrc:/sounds/instupendo_long_live_extended.mp3"));


    // criar scene
    scene = new QGraphicsScene();
    // fixar o tamanho em 800x600, que é infinito por definição
    scene->setSceneRect(0, 0, 1240, 720);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // fixar o tamanho
    setFixedSize(1240, 720);
    scene->setBackgroundBrush(QBrush(QImage(":/images/SimBg.png")));



    run = false;
    timer = new QTimer();
    stepTime = 50;
    connect(timer, &QTimer::timeout, this, std::bind(&SimulationEnv::step, this));
}
void SimulationEnv::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Shift){
        scene->removeItem(helpImage);
        scene->addItem(helpImage);
        if(showCMD){
            helpImage->setPixmap(QPixmap(":/images/HelpImg.png"));
            showCMD = false;
        }else{
            helpImage->setPixmap(QPixmap(":/images/cmds"+QString::number(cmd)+".png"));
            showCMD = true;
        }
    }
    if(event->key() == Qt::Key_Control){
        cmd == 0? cmd = 1:cmd = 0;
        if(showCMD){
            scene->removeItem(helpImage);
            scene->addItem(helpImage);
            helpImage->setPixmap(QPixmap(":/images/cmds"+QString::number(cmd)+".png"));
        }
    }
    if(event->key() == Qt::Key_Down){
        timer->stop();
        stepTime+=10;
        timer->start(stepTime);
    }
    if(event->key() == Qt::Key_Up){
        timer->stop();
        if(stepTime-10>0)
            stepTime-=10;
        timer->start(stepTime);
    }
    if(event->key() == Qt::Key_Enter){
        for(Colony *c : colonyList){
            if(!c->createdAnts){
                for(int i = 0;i<antsNumber;i++){
                    Ant* a = new Ant();
                    scene->addItem(a);
                    antList.push_back(a);
                    a->setPos(c->x()+25,c->y()+25);
                    c->createdAnts = true;
                }
            }
        }
    }
    if(event->key() == Qt::Key_Space){

        if(run){
            timer->stop();
            run = false;
            if(showPaths){
                for(Path* p: pathList){
                    scene->addItem(p);
                }
            }
        }else{
            timer->start(stepTime);
            run = true;
            if(showPaths){
                for(Path* p: pathList){
                    scene->removeItem(p);
                }
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
            Path *p = new Path(nullptr,1-a->goal,a->x(),a->y(), a->steps,pathLife);

            pathList.push_back(p);
            bool achou = false;
            float d = 2000;
            for(Path* i : pathList){

                float dX = a->x() -50*cos(a->rotation()*3.14/180);
                float dY = a->y()-50*sin(a->rotation()*3.14/180);

                float dx =  sqrt(pow(i->x()-a->x(),2));
                float dx_f =  sqrt(pow(i->x()-dX,2));


                float dy =  sqrt(pow(i->y()-a->y(),2));
                float dy_f =  sqrt(pow(i->y()-dY,2));

                //cout <<a->x()<<" "<<dx<<" "<<dx_f<<" / "<<a->y()<<" "<<dy<<" "<<dy_f<<endl;
                if(i->goal == a->goal && i->isVisible() && (dx+dx_f)<50 && (dy+dy_f)<50&& i->x()!=a->x() && i->y()!=a->y()){
                    //cout << i->dist<<" "<<d<<"|";
                    if(d>i->dist){
                        d = i->dist;
                        achou = true;
                        p = i;
                    }
                }


            }
            //cout <<endl<<a->rotation()<<endl;
            int ran = rand()%1000;
            if(!achou || ran<10)
                a->move();
            else{

                float dy = (p->y() - a->y());
                float dx = p->x() -a->x();
                float tan = atan(dy/dx)*180/3.14;
                if(dx<0 && dy>0) tan = 180 + tan;
                if(dy<0 && dx>0) tan = 360 + tan;
                if(dy<0 && dx<0) tan = 180 + tan;

                //cout << endl<<d <<" "<<a->rotation()<<" "<<tan<<" /// "<<dx<<"|"<<dy<<endl;
                a->move(tan);/*

                a->setLast(a->x(),a->y());
                a->lastAngle = a->rotation();
                a->setPos(p->x(),p->y());
                a->setRotation(p->lastAngle);
                               */
            }
        }
    }
    //cout << "dd"<<endl;
    vector<Path*> aux;
    for(Path* p : pathList){
        if(p){

            p->remainingSteps-=1;
            if(p->isVisible()) aux.push_back(p);
        }
    }
    pathList = aux;

}
void SimulationEnv::startSimulation(bool showPath,int antNumber,int pathL,QMediaPlayer *menu){
    scene->clear();
    simMsc->play();
    pathLife = pathL;
    menuMsc = menu;
    menuMsc->pause();
    //Adiciona a opção de help na tela
    showCMD = false;
    helpImage = new QGraphicsPixmapItem();
    helpImage->setPixmap(QPixmap(":/images/HelpImg.png"));
    helpImage->setPos(50,50);
    scene->addItem(helpImage);

    //inicia as configurações desta rodada
    showPaths = showPath;
    antsNumber = antNumber;
    run = true;
    timer->start(stepTime);
    show();
}
