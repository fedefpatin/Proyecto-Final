#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>



MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow)
{
    QMessageBox::information(this,"BIENVENIDO A CARTAMA COCOON","Para empezar debes presionar","OK");

    ui->setupUi(this);
    scena= new QGraphicsScene;
    timer =new QTimer;
    ui->graphicsView->setScene(scena);
    scena->setSceneRect(-250,-225,500,424);
    scena->addRect(scena->sceneRect());
    //scena->setSceneRect(0,0,500,424);
    //scena->addRect(scena->sceneRect());

    QPixmap background(":/fondoCC.jpg");
    QGraphicsPixmapItem* backgroundItem = new QGraphicsPixmapItem(background);
    backgroundItem->setPos(scena->sceneRect().topLeft()); // Establece la posición del fondo en la esquina superior izquierda de la escena

    scena->addItem(backgroundItem);

    /*QPixmap pix( ":/fondoCC.jpg" );
    pix = pix.scaled(scena->sceneRect().size().toSize(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation); // Escalar el pixmap al tamaño de la escena
    scena->clear(); // Limpiar cualquier elemento previo en la escena
    scena->addPixmap(pix);*/

    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));
    Barra=(new Plataforma(2));
    scena->addItem (Barra);
    connect(this,SIGNAL(moverbarra(int)),this,SLOT(moverobjeto(int)));
    mostrarLevel(1);
    Bola=(new Esfera());
    scena->addItem(Bola);
    Bomba=(new Obstaculo());
    scena->addItem(Bomba);

    // Crear instancias de los elementos en diferentes posiciones
    Obstaculo* bomba1 = new Obstaculo();
    bomba1->setPos(100, 30); // Establecer la posición de la primera bomba

    Obstaculo* bomba2 = new Obstaculo();
    bomba2->setPos(-119, -100); // Establecer la posición de la segunda bomba

    // Agregar los elementos a la escena
    scena->addItem(bomba1);
    scena->addItem(bomba2);


    int stepx=0;
    int stepy=0;
    for (int i=0;i<1;i++){
        if(i%1== 0)
        {
            stepy+=20;
            stepx =0;
        }
        Bloques[i]=(new Extra(-210+stepx,120+stepy));
        scena->addItem(Bloques[i]);
        stepx+=70;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Start_clicked()
{
   Bola = new Esfera();  // Crear una nueva instancia de la bola
   scena->addItem(Bola); // Agregar la bola a la escena
   timer->start(7);

   int stepx=0;
   int stepy=0;
   for (int i=0;i<1;i++){
       if(i%1== 0)
       {
           stepy+=20;
           stepx =0;
       }
       Bloques[i]=(new Extra(-210,190));
       scena->addItem(Bloques[i]);
       stepx+=70;
   }
}



/*void MainWindow::on_Start_clicked()
{
   Bola.push_back(new Esfera());  // se adiciona un nuevo objeto a la lista y se pone al final de la lista
   scena->addItem(Bola.back());   // se adiciona el ultimo objeto de la lista a la escena
   timer->start(10);     //se inicializa el timer con una base de tiempo de 10 ms.
}
void MainWindow::moverk()
{
    // con este for se recorre toda la lista y a cada objeto de la lista se le actualiza la posición
    for (list<Esfera*>::iterator it=Bola.begin(); it != Bola.end(); ++it)
         (*it)->ActualizaPos();
}
*/
int MainWindow::puntaje(){
    Punt+=5;
    ui->lineEdit->setText(QString::number(Punt));
    return Punt;
}

void MainWindow::mostrarLevel(int Lev){
    ui->lineEdit_2->setText(QString::number(Lev));
}


void MainWindow::choque_Esfera_Obstaculo(Esfera *S, Obstaculo *O){
    if(S->collidesWithItem(O)){
        QMessageBox::information(this,"PERDISTE","Te hicieron papilla","OK");
        this->close();

    }
}

void MainWindow::choque_Extra_Esfera(Esfera *S, Extra *L[]){
    for(int i = 0;i<1;i++)
    {
         if(S->collidesWithItem(L[i])){
             S->vy=-(S->vy);
             scena->removeItem(L[i]);             
             L[i]->posx=1000;
             scena->removeItem(Bola);//elimina bola en el choque

             Bola->posx=Barra->posx;
             Bola->posy=Barra->posy;             


             if(puntaje()%40==0 && j<=5){
                 mostrarLevel(ind);
                 scena->removeItem(Barra);
                 Barra->posx=1000;
                 Barra=(new Plataforma(j));
                 scena->addItem (Barra);
                 connect(this,SIGNAL(moverbarra(int)),this,SLOT(moverobjeto(int)));
                 int stepx=0;
                 int stepy=0;
                 for (int i=0;i<1;i++){
                     if(i%1== 0)
                     {
                         stepy+=20;
                         stepx =0;
                     }
                     Bloques[i]=(new Extra(-210+stepx,120+stepy));
                     scena->addItem(Bloques[i]);
                     stepx+=70;
                 }
                 j++;
                 ind++;
             }
         }

    }
}

void MainWindow::mover()
{
    Bola->ActualizaPos();
    for (int i=0;i<1;i++){
        Bloques[i]->ActualizaPos();

    }
    Bomba->ActualizaPos();

    cont++;
    if (cont%1000==0)
    {
        Bomba->posx = -240;
        Bomba->posy = -215;
        Bomba->vel_ini=73.35;
        Bomba->angulo =(59*pi)/180;
        Bomba->vy=0;
        Bomba->vx=0;
    }
    choque_Esfera_Obstaculo(Bola,Bomba);
    choque_Extra_Esfera(Bola,Bloques);
    if(Bola->posy-5<=-250)this->close();
}

void MainWindow::moverobjeto(int x)
{
    Barra->mover(x);
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    emit moverbarra(value);
}


