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
    QGraphicsPixmapItem* helpImage;
public:
    SimulationEnv(QWidget *parent = 0);
    QGraphicsScene *scene;
    void startSimulation(bool showPath,int antNumber);
private:
    void step();
    void mousePressEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void closeEvent(QCloseEvent *event){
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
