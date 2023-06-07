/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Salir;
    QAction *action_Instrucciones;
    QAction *actionSalir;
    QAction *action_Nuevo_Juego;
    QAction *action_Cargar_Juego;
    QAction *action_Nuevo_Juego_2;
    QAction *action_Cargar_Juego_2;
    QAction *action_Guardar;
    QAction *actionCargar;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *Start;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menu_Menu;
    QMenu *menu_Jugar;
    QMenu *menu_Un_Jugador;
    QMenu *menu_Dos_jugadores;
    QMenu *menu_Archivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(809, 576);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(164, 240, 102, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(232, 255, 213, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(198, 247, 157, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(82, 120, 51, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(109, 160, 68, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(209, 247, 178, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        MainWindow->setPalette(palette);
        action_Salir = new QAction(MainWindow);
        action_Salir->setObjectName(QString::fromUtf8("action_Salir"));
        action_Salir->setCheckable(true);
        action_Instrucciones = new QAction(MainWindow);
        action_Instrucciones->setObjectName(QString::fromUtf8("action_Instrucciones"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        action_Nuevo_Juego = new QAction(MainWindow);
        action_Nuevo_Juego->setObjectName(QString::fromUtf8("action_Nuevo_Juego"));
        action_Nuevo_Juego->setCheckable(true);
        action_Nuevo_Juego->setChecked(true);
        action_Cargar_Juego = new QAction(MainWindow);
        action_Cargar_Juego->setObjectName(QString::fromUtf8("action_Cargar_Juego"));
        action_Nuevo_Juego_2 = new QAction(MainWindow);
        action_Nuevo_Juego_2->setObjectName(QString::fromUtf8("action_Nuevo_Juego_2"));
        action_Cargar_Juego_2 = new QAction(MainWindow);
        action_Cargar_Juego_2->setObjectName(QString::fromUtf8("action_Cargar_Juego_2"));
        action_Guardar = new QAction(MainWindow);
        action_Guardar->setObjectName(QString::fromUtf8("action_Guardar"));
        action_Guardar->setCheckable(true);
        actionCargar = new QAction(MainWindow);
        actionCargar->setObjectName(QString::fromUtf8("actionCargar"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(40, 30, 600, 451));
        graphicsView->setAutoFillBackground(false);
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setLineWidth(10);
        graphicsView->setMidLineWidth(0);
        QBrush brush10(QColor(0, 0, 0, 255));
        brush10.setStyle(Qt::Dense7Pattern);
        graphicsView->setForegroundBrush(brush10);
        graphicsView->setDragMode(QGraphicsView::NoDrag);
        graphicsView->setTransformationAnchor(QGraphicsView::AnchorViewCenter);
        Start = new QPushButton(centralWidget);
        Start->setObjectName(QString::fromUtf8("Start"));
        Start->setGeometry(QRect(290, 490, 99, 27));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(680, 230, 99, 27));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(660, 290, 131, 22));
        horizontalSlider->setMinimum(-194);
        horizontalSlider->setMaximum(194);
        horizontalSlider->setSingleStep(50);
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 0, 51, 20));
        QFont font;
        font.setPointSize(10);
        lineEdit->setFont(font);
        lineEdit->setCursorPosition(0);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 0, 16, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 41, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 470, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 0, 41, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 809, 20));
        menu_Menu = new QMenu(menuBar);
        menu_Menu->setObjectName(QString::fromUtf8("menu_Menu"));
        menu_Jugar = new QMenu(menu_Menu);
        menu_Jugar->setObjectName(QString::fromUtf8("menu_Jugar"));
        menu_Un_Jugador = new QMenu(menu_Jugar);
        menu_Un_Jugador->setObjectName(QString::fromUtf8("menu_Un_Jugador"));
        menu_Dos_jugadores = new QMenu(menu_Jugar);
        menu_Dos_jugadores->setObjectName(QString::fromUtf8("menu_Dos_jugadores"));
        menu_Archivo = new QMenu(menuBar);
        menu_Archivo->setObjectName(QString::fromUtf8("menu_Archivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Menu->menuAction());
        menuBar->addAction(menu_Archivo->menuAction());
        menu_Menu->addAction(action_Instrucciones);
        menu_Menu->addAction(menu_Jugar->menuAction());
        menu_Menu->addAction(actionSalir);
        menu_Jugar->addAction(menu_Un_Jugador->menuAction());
        menu_Jugar->addAction(menu_Dos_jugadores->menuAction());
        menu_Un_Jugador->addAction(action_Nuevo_Juego);
        menu_Un_Jugador->addAction(action_Cargar_Juego);
        menu_Dos_jugadores->addAction(action_Nuevo_Juego_2);
        menu_Dos_jugadores->addAction(action_Cargar_Juego_2);
        menu_Archivo->addAction(action_Guardar);
        menu_Archivo->addAction(actionCargar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Salir->setText(QApplication::translate("MainWindow", "&Salir", nullptr));
        action_Instrucciones->setText(QApplication::translate("MainWindow", "&Instrucciones", nullptr));
        actionSalir->setText(QApplication::translate("MainWindow", "&Salir", nullptr));
        action_Nuevo_Juego->setText(QApplication::translate("MainWindow", "&Nuevo Juego", nullptr));
        action_Cargar_Juego->setText(QApplication::translate("MainWindow", "&Cargar Juego", nullptr));
        action_Nuevo_Juego_2->setText(QApplication::translate("MainWindow", "&Nuevo Juego", nullptr));
        action_Cargar_Juego_2->setText(QApplication::translate("MainWindow", "&Cargar Juego", nullptr));
        action_Guardar->setText(QApplication::translate("MainWindow", "&Guardar", nullptr));
        actionCargar->setText(QApplication::translate("MainWindow", "Cargar", nullptr));
        Start->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Finish", nullptr));
        lineEdit->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Puntos", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Nivel", nullptr));
        menu_Menu->setTitle(QApplication::translate("MainWindow", "&Menu", nullptr));
        menu_Jugar->setTitle(QApplication::translate("MainWindow", "&Jugar", nullptr));
        menu_Un_Jugador->setTitle(QApplication::translate("MainWindow", "&Un Jugador", nullptr));
        menu_Dos_jugadores->setTitle(QApplication::translate("MainWindow", "&Dos jugadores", nullptr));
        menu_Archivo->setTitle(QApplication::translate("MainWindow", "&Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
