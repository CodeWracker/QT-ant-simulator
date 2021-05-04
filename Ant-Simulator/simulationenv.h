#ifndef SIMULATIONENV_H
#define SIMULATIONENV_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QString>
#include <QTimer>
#include <QMediaPlayer>

class SimulationEnv: public QGraphicsView
{
private:

    QTimer *timer;
public:
    SimulationEnv(QWidget *parent = 0);
    QGraphicsScene *scene;
    void startSimulation(bool showPath,int antsNumber);
};

#endif // SIMULATIONENV_H
