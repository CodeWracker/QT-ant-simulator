#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->BackgMenu->setPixmap(QPixmap(":/resources/MenuBg.png"));
    ui->BackgMenu->setFixedWidth(704);
    ui->BackgMenu->setFixedHeight(704);
    ui->BackgMenu->lower();

    ui->backgAbout->setPixmap(QPixmap(":/resources/AboutBg.png"));
    ui->backgAbout->setFixedWidth(704);
    ui->backgAbout->setFixedHeight(704);
    ui->backgAbout->lower();


    ui->backgConfig->setPixmap(QPixmap(":/resources/ConfigsBg.png"));
    ui->backgConfig->setFixedWidth(704);
    ui->backgConfig->setFixedHeight(704);
    ui->backgConfig->lower();

}

MainWindow::~MainWindow()
{
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

}

void MainWindow::on_soBtn_clicked() //link para o perfil no stack overflow
{

}

void MainWindow::on_lkdinBtn_clicked() //link para o perfil no linkedin
{

}

void MainWindow::on_gitProfileBtn_clicked() //link para o perfil no github
{

}
