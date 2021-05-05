#include "simulationenv.h"
#include "ant.h"


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


   timer = new QTimer();
   connect(timer, &QTimer::timeout, this, std::bind(&SimulationEnv::step, this));
}
void SimulationEnv::step(){
    for(Ant* a : antList){
        a->move();
    }
}
void SimulationEnv::startSimulation(bool showPath,int antNumber){
    showPaths = showPath;
    antsNumber = antNumber;
    Ant* a1 = new Ant();
    scene->addItem(a1);
    antList.push_back(a1);
    a1->setPos(100,100);
    timer->start(50);
    show();
}
