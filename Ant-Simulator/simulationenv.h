#ifndef SIMULATIONENV_H
#define SIMULATIONENV_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QString>
#include <QTimer>
#include <QMediaPlayer>
#include <vector>

#include "ant.h"

using namespace std;
class SimulationEnv: public QGraphicsView
{
private:
    bool showPaths;
    int antsNumber;
    QTimer *timer;
    vector<Ant*> antList;
public:
    SimulationEnv(QWidget *parent = 0);
    QGraphicsScene *scene;
    void startSimulation(bool showPath,int antNumber);
private:
    void step();
    void mousePressEvent(QMouseEvent *event){
        for(int i = 0;i<50;i++){
            Ant* a = new Ant();
            scene->addItem(a);
            antList.push_back(a);
            a->setPos(100,100);
        }
    }
    void closeEvent(QCloseEvent *event){
        for(Ant* a : antList)
            delete a;
        antList.clear();
        timer->stop();
    }
};

#endif // SIMULATIONENV_H
