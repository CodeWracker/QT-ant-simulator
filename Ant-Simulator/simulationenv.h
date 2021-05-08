#ifndef SIMULATIONENV_H
#define SIMULATIONENV_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QString>
#include <QTimer>
#include <QMediaPlayer>
#include <vector>
#include <QMouseEvent>
#include "ant.h"
#include "colony.h"
#include "food.h"
#include "path.h"
using namespace std;
class SimulationEnv: public QGraphicsView
{
private:
    bool showPaths;
    int antsNumber;
    QTimer *timer;
    vector<Colony*> colonyList;
    vector<Ant*> antList;
    vector<Food*> foodList;
    vector<Path*> pathList;
    bool run;
    int stepTime;
    bool showCMD;
    int cmd;
    int pathLife;
    QGraphicsPixmapItem* helpImage;
    QMediaPlayer *simMsc;
    QMediaPlayer *menuMsc;
    QMediaPlaylist *simPlaylist;
public:
    SimulationEnv(QWidget *parent = 0);
   /* ~SimulationEnv(){ //isso aqui da erro...
        delete simMsc;
        for(Ant* a : antList)
            delete a;

        for(Colony* c : colonyList)
            delete c;

        for(Food* f : foodList)
            delete f;

        for(Path* p : pathList)
            delete p;
        delete timer;
        delete helpImage;
        delete scene;
    }*/
    QGraphicsScene *scene;
    void startSimulation(bool showPath,int antNumber,int pathL,QMediaPlayer *menu);
private:
    void step();
    void mousePressEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void closeEvent(QCloseEvent *event){
        menuMsc->play();
        simMsc->stop();
        for(Ant* a : antList)
            delete a;
        antList.clear();

        for(Colony* c : colonyList)
            delete c;
        colonyList.clear();

        for(Food* f : foodList)
            delete f;
        foodList.clear();

        for(Path* p : pathList)
            delete p;
        foodList.clear();
        timer->stop();
    }
};

#endif // SIMULATIONENV_H
