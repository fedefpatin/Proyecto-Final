#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QDebug>
#include <string>
#include <Esfera.h>
#include <Obstaculo.h>
#include <Extra.h>
#include <Plataforma.h>
#include <list>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     int Punt=0,j=1;
     int ind=2;
private slots:
    void on_Start_clicked();
    void on_pushButton_clicked();
    void mover();
    //void moverk();
    void moverobjeto(int x);
    void on_horizontalSlider_valueChanged(int value);
    void choque_Esfera_Obstaculo(Esfera *S,Obstaculo *O);
    void choque_Extra_Esfera(Esfera *S, Extra *L[]);
    int puntaje();
    void mostrarLevel(int Lev);
    //void on_action_Salir_triggered();
    //void on_action_Salir_destroyed();

signals:
void moverbarra(int);

private:
    int cont =0;
    Ui::MainWindow *ui;
    QGraphicsScene *scena;
    QTimer *timer;
    Esfera *Bola;
    //list< Esfera *> Bola;
    Obstaculo* Bomba;
    Extra* Bloques[28];
    Plataforma *Barra;

};

#endif // MAINWINDOW_H
