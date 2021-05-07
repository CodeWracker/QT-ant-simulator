/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Menu;
    QLabel *BackgMenu;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *SimulateButton;
    QPushButton *AboutButton;
    QPushButton *ConfigsButton;
    QPushButton *QuitButton;
    QWidget *About;
    QPushButton *MenuButton;
    QLabel *backgAbout;
    QPushButton *gitCodeBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *gitProfileBtn;
    QPushButton *lkdinBtn;
    QPushButton *soBtn;
    QWidget *Configuration;
    QPushButton *MenuButton_2;
    QLabel *backgConfig;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *config_1;
    QCheckBox *showPathsBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *config_2;
    QLabel *antsNumber;
    QSlider *antsSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(732, 732);
        MainWindow->setMinimumSize(QSize(704, 732));
        MainWindow->setMaximumSize(QSize(732, 732));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(704, 704));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 704, 704));
        stackedWidget->setLineWidth(-8);
        Menu = new QWidget();
        Menu->setObjectName(QString::fromUtf8("Menu"));
        BackgMenu = new QLabel(Menu);
        BackgMenu->setObjectName(QString::fromUtf8("BackgMenu"));
        BackgMenu->setGeometry(QRect(0, 0, 1, 1));
        BackgMenu->setMinimumSize(QSize(1, 1));
        BackgMenu->setMaximumSize(QSize(704, 704));
        BackgMenu->setAutoFillBackground(false);
        layoutWidget = new QWidget(Menu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 230, 181, 361));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SimulateButton = new QPushButton(layoutWidget);
        SimulateButton->setObjectName(QString::fromUtf8("SimulateButton"));
        SimulateButton->setMinimumSize(QSize(179, 54));
        SimulateButton->setStyleSheet(QString::fromUtf8("QPushButton#SimulateButton {\n"
"background-color: transparent;\n"
"background-image: url(:/images/SimulateBtn.png);\n"
"border-image: none;\n"
"}\n"
"\n"
"QPushButton#SimulateButton:pressed {\n"
"    background-image: url(:/images/SimulateClickedBtn.png);\n"
"}"));

        verticalLayout->addWidget(SimulateButton);

        AboutButton = new QPushButton(layoutWidget);
        AboutButton->setObjectName(QString::fromUtf8("AboutButton"));
        AboutButton->setMinimumSize(QSize(179, 54));
        AboutButton->setStyleSheet(QString::fromUtf8("QPushButton#AboutButton {\n"
"background-color: transparent;\n"
"background-image: url(:/images/AboutBtn.png);\n"
"border-image: none;\n"
"}\n"
"\n"
"QPushButton#AboutButton:pressed {\n"
"    background-image: url(:/images/AboutClickedBtn.png);\n"
"}"));

        verticalLayout->addWidget(AboutButton);

        ConfigsButton = new QPushButton(layoutWidget);
        ConfigsButton->setObjectName(QString::fromUtf8("ConfigsButton"));
        ConfigsButton->setMinimumSize(QSize(179, 54));
        ConfigsButton->setStyleSheet(QString::fromUtf8("QPushButton#ConfigsButton {\n"
"background-color: transparent;\n"
"background-image: url(:/images/ConfigsBtn.png);\n"
"border-image: none;\n"
"}\n"
"\n"
"QPushButton#ConfigsButton:pressed {\n"
"    background-image: url(:/images/ConfigsClickedBtn.png);\n"
"}"));

        verticalLayout->addWidget(ConfigsButton);

        QuitButton = new QPushButton(layoutWidget);
        QuitButton->setObjectName(QString::fromUtf8("QuitButton"));
        QuitButton->setMinimumSize(QSize(0, 54));
        QuitButton->setStyleSheet(QString::fromUtf8("QPushButton#QuitButton {\n"
"background-color: transparent;\n"
"background-image: url(:/images/QuitBtn.png);\n"
"border-image: none;\n"
"}\n"
"\n"
"QPushButton#QuitButton:pressed {\n"
"    background-image: url(:/images/QuitClickedBtn.png);\n"
"}"));

        verticalLayout->addWidget(QuitButton);

        stackedWidget->addWidget(Menu);
        About = new QWidget();
        About->setObjectName(QString::fromUtf8("About"));
        MenuButton = new QPushButton(About);
        MenuButton->setObjectName(QString::fromUtf8("MenuButton"));
        MenuButton->setGeometry(QRect(50, 50, 31, 31));
        MenuButton->setStyleSheet(QString::fromUtf8("QPushButton#MenuButton {\n"
"background-color: transparent;\n"
"background-image: url(:/images/Arrow.png);\n"
"border-image: none;\n"
"}\n"
""));
        backgAbout = new QLabel(About);
        backgAbout->setObjectName(QString::fromUtf8("backgAbout"));
        backgAbout->setGeometry(QRect(0, 0, 1, 1));
        backgAbout->setMinimumSize(QSize(1, 1));
        backgAbout->setMaximumSize(QSize(704, 704));
        gitCodeBtn = new QPushButton(About);
        gitCodeBtn->setObjectName(QString::fromUtf8("gitCodeBtn"));
        gitCodeBtn->setGeometry(QRect(320, 625, 30, 30));
        gitCodeBtn->setMinimumSize(QSize(30, 30));
        gitCodeBtn->setMaximumSize(QSize(30, 30));
        gitCodeBtn->setStyleSheet(QString::fromUtf8("QPushButton#gitCodeBtn {\n"
"background-color: transparent;\n"
"background-image: url(:/images/git.png);\n"
"border-image: none;\n"
"}\n"
"QPushButton#gitCodeBtn:pressed {\n"
"    background-image: url(:/images/gitClicked.png);\n"
"}"));
        layoutWidget1 = new QWidget(About);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 340, 269, 38));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gitProfileBtn = new QPushButton(layoutWidget1);
        gitProfileBtn->setObjectName(QString::fromUtf8("gitProfileBtn"));
        gitProfileBtn->setMinimumSize(QSize(30, 30));
        gitProfileBtn->setMaximumSize(QSize(30, 30));
        gitProfileBtn->setStyleSheet(QString::fromUtf8("QPushButton#gitProfileBtn {\n"
"background-color: transparent;\n"
"background-image: url(:/images/git.png);\n"
"border-image: none;\n"
"}\n"
"QPushButton#gitProfileBtn:pressed {\n"
"    background-image: url(:/images/gitClicked.png);\n"
"}"));

        horizontalLayout->addWidget(gitProfileBtn);

        lkdinBtn = new QPushButton(layoutWidget1);
        lkdinBtn->setObjectName(QString::fromUtf8("lkdinBtn"));
        lkdinBtn->setMinimumSize(QSize(32, 32));
        lkdinBtn->setMaximumSize(QSize(32, 32));
        lkdinBtn->setStyleSheet(QString::fromUtf8("QPushButton#lkdinBtn {\n"
"background-color: transparent;\n"
"background-image: url(:/images/linkedin.png);\n"
"border-image: none;\n"
"}\n"
"QPushButton#lkdinBtn:pressed {\n"
"    background-image: url(:/images/linkedinClicked.png);\n"
"}"));

        horizontalLayout->addWidget(lkdinBtn);

        soBtn = new QPushButton(layoutWidget1);
        soBtn->setObjectName(QString::fromUtf8("soBtn"));
        soBtn->setMinimumSize(QSize(31, 36));
        soBtn->setMaximumSize(QSize(31, 36));
        soBtn->setStyleSheet(QString::fromUtf8("QPushButton#soBtn {\n"
"background-color: transparent;\n"
"background-image: url(:/images/stack.png);\n"
"border-image: none;\n"
"}\n"
"QPushButton#soBtn:pressed {\n"
"    background-image: url(:/images/stackClicked.png);\n"
"}"));

        horizontalLayout->addWidget(soBtn);

        stackedWidget->addWidget(About);
        Configuration = new QWidget();
        Configuration->setObjectName(QString::fromUtf8("Configuration"));
        MenuButton_2 = new QPushButton(Configuration);
        MenuButton_2->setObjectName(QString::fromUtf8("MenuButton_2"));
        MenuButton_2->setGeometry(QRect(50, 50, 31, 31));
        MenuButton_2->setStyleSheet(QString::fromUtf8("QPushButton#MenuButton_2 {\n"
"background-color: transparent;\n"
"background-image: url(:/images/Arrow.png);\n"
"border-image: none;\n"
"}\n"
""));
        backgConfig = new QLabel(Configuration);
        backgConfig->setObjectName(QString::fromUtf8("backgConfig"));
        backgConfig->setGeometry(QRect(0, 0, 14, 1));
        backgConfig->setMinimumSize(QSize(1, 1));
        backgConfig->setMaximumSize(QSize(704, 704));
        layoutWidget2 = new QWidget(Configuration);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(140, 220, 471, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        config_1 = new QLabel(layoutWidget2);
        config_1->setObjectName(QString::fromUtf8("config_1"));
        QFont font;
        font.setFamily(QString::fromUtf8("Audiowide"));
        font.setPointSize(12);
        config_1->setFont(font);
        config_1->setStyleSheet(QString::fromUtf8("QLabel#config_1{\n"
" color: white;\n"
"}"));

        horizontalLayout_2->addWidget(config_1);

        showPathsBox = new QCheckBox(layoutWidget2);
        showPathsBox->setObjectName(QString::fromUtf8("showPathsBox"));
        showPathsBox->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(showPathsBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        config_2 = new QLabel(layoutWidget2);
        config_2->setObjectName(QString::fromUtf8("config_2"));
        config_2->setMinimumSize(QSize(230, 0));
        config_2->setFont(font);
        config_2->setStyleSheet(QString::fromUtf8("QLabel#config_2{\n"
" color: white;\n"
"}"));

        horizontalLayout_3->addWidget(config_2);

        antsNumber = new QLabel(layoutWidget2);
        antsNumber->setObjectName(QString::fromUtf8("antsNumber"));
        antsNumber->setMinimumSize(QSize(20, 0));
        antsNumber->setMaximumSize(QSize(20, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Audiowide"));
        antsNumber->setFont(font1);
        antsNumber->setStyleSheet(QString::fromUtf8("color: white;"));

        horizontalLayout_3->addWidget(antsNumber);

        antsSlider = new QSlider(layoutWidget2);
        antsSlider->setObjectName(QString::fromUtf8("antsSlider"));
        antsSlider->setMinimum(1);
        antsSlider->setMaximum(100);
        antsSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(antsSlider);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(Configuration);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 732, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Menu", nullptr));
        BackgMenu->setText(QString());
        SimulateButton->setText(QString());
        AboutButton->setText(QString());
        ConfigsButton->setText(QString());
        QuitButton->setText(QString());
        MenuButton->setText(QString());
        backgAbout->setText(QString());
        gitCodeBtn->setText(QString());
        gitProfileBtn->setText(QString());
        lkdinBtn->setText(QString());
        soBtn->setText(QString());
        MenuButton_2->setText(QString());
        backgConfig->setText(QString());
        config_1->setText(QApplication::translate("MainWindow", "Show paths:", nullptr));
        showPathsBox->setText(QString());
        config_2->setText(QApplication::translate("MainWindow", "Ants/Colony Unit:", nullptr));
        antsNumber->setText(QApplication::translate("MainWindow", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
