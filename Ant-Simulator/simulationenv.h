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
#include "eraser.h"
#include <iostream>
using namespace std;
class SimulationEnv : public QGraphicsView
{
private:
    bool showPaths;
    int antsNumber;
    QTimer *timer;
    vector<Colony *> colonyList;
    vector<Ant *> antList;
    vector<Food *> foodList;
    vector<Path *> pathList;
    bool run;
    int stepTime;
    bool showCMD;
    int cmd; //0 - Colony; 1 - Eraser
    bool erasing;
    int pathLife;
    QGraphicsPixmapItem *helpImage;
    Eraser *eraserImage;
    QMediaPlayer *simMsc;
    QMediaPlayer *menuMsc;
    QMediaPlaylist *simPlaylist;
    vector<Path*> auxGrid[1240][720];

public:
    SimulationEnv(QWidget *parent = 0);
    ~SimulationEnv(){ //isso aqui da erro...
        delete simMsc;
        for(Ant* a : antList)
            delete a;

        for(Colony* c : colonyList)
            delete c;

        for(Food* f : foodList)
            delete f;

        // Por que isso não funciona?
        for(Path* p : pathList){
            //delete p;
        }

        delete timer;
        delete helpImage;
        delete scene;

    }
    QGraphicsScene *scene;
    void startSimulation(bool showPath, int antNumber, int pathL, QMediaPlayer *menu);

private:
    void mouseMoveEvent(QMouseEvent *event)
    {
        if (cmd == 1 && erasing)
        {
            if (eraserImage != NULL)
                eraserImage->erase(event->pos(), pathList, scene,run);
        }
    }
    void step();
    void mousePressEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void closeEvent(QCloseEvent *event)
    {
        menuMsc->play();
        simMsc->stop();
        for (Ant *a : antList)
            delete a;
        antList.clear();

        for (Colony *c : colonyList)
            delete c;
        colonyList.clear();

        for (Food *f : foodList)
            delete f;
        foodList.clear();

        for (Path *p : pathList)
            delete p;
        foodList.clear();
        timer->stop();
    }
};

#endif // SIMULATIONENV_H
