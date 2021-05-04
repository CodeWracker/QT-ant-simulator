#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "simulationenv.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    bool showPaths;
    int antsNumber;
    SimulationEnv* simEnv;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AboutButton_clicked();

    void on_ConfigsButton_clicked();

    void on_SimulateButton_clicked();

    void on_MenuButton_clicked();

    void on_MenuButton_2_clicked();

    void on_gitCodeBtn_clicked();

    void on_soBtn_clicked();

    void on_lkdinBtn_clicked();

    void on_gitProfileBtn_clicked();


    void on_antsSlider_sliderMoved(int position);

    void on_showPathsBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
