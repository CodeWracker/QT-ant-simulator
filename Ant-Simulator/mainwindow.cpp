#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDesktopServices>
#include <QUrl>
#include "simulationenv.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    simEnv = new SimulationEnv();

    /*Define os backgrounds*/
    ui->setupUi(this);
    ui->BackgMenu->setPixmap(QPixmap(":/images/MenuBg.png"));
    ui->BackgMenu->setFixedWidth(704);
    ui->BackgMenu->setFixedHeight(704);
    ui->BackgMenu->lower();

    ui->backgAbout->setPixmap(QPixmap(":/images/AboutBg.png"));
    ui->backgAbout->setFixedWidth(704);
    ui->backgAbout->setFixedHeight(704);
    ui->backgAbout->lower();

    ui->backgConfig->setPixmap(QPixmap(":/images/ConfigsBg.png"));
    ui->backgConfig->setFixedWidth(704);
    ui->backgConfig->setFixedHeight(704);
    ui->backgConfig->lower();

    /*Inicia as configurações*/
    showPaths = false;
    ui->showPathsBox->setChecked(false);
    ui->antsSlider->setValue(10);
    antsNumber = 10;
    ui->pathSlider->setValue(100);
    pathLife = 100;
    ui->pathLife->setText(QString::number(pathLife));
    /*Coloca na Tela de Menu*/
    ui->stackedWidget->setCurrentIndex(0);

    /*Coloca a musica pra tocar*/
    MenuMusic = new QMediaPlayer(this);
    MenuMusic->setMedia(QUrl("qrc:/sounds/ants_soundtrack_2019.mp3"));
    MenuMusic->play();

}

MainWindow::~MainWindow()
{
    delete simEnv;
    delete ui;
}

/*
 * 0 - Menu
 * 1 - About
 * 2 - Config
 */
void MainWindow::on_AboutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ConfigsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_SimulateButton_clicked()
{
    delete simEnv;
    simEnv = new SimulationEnv();
    simEnv->startSimulation(showPaths,antsNumber,pathLife,MenuMusic);
}

void MainWindow::on_MenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_MenuButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_gitCodeBtn_clicked() //link para o repositorio
{
    QString link = "https://github.com/CodeWracker/QT-ant-simulator";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_soBtn_clicked() //link para o perfil no stack overflow
{
    QString link = "https://stackoverflow.com/users/15266137/rodrigo-ferraz-souza";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_lkdinBtn_clicked() //link para o perfil no linkedin
{
    QString link = "https://www.linkedin.com/in/rodrigo-ferraz-souza-89ba39143/";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_gitProfileBtn_clicked() //link para o perfil no github
{
    QString link = "https://github.com/CodeWracker";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_antsSlider_valueChanged(int position)
{
    antsNumber = position;
    ui->antsNumber->setText(QString::number(antsNumber));
}

void MainWindow::on_showPathsBox_stateChanged(int arg1)
{
    showPaths = arg1 == 2;
}



void MainWindow::on_QuitButton_clicked()
{
    MainWindow::close();
}

void MainWindow::on_pathSlider_valueChanged(int value)
{
    pathLife = value;
    ui->pathLife->setText(QString::number(pathLife));
}
