#include "myscene.h"
#include "QDebug"
#include <stdlib.h>

MyScene::MyScene(QObject *parent) : QGraphicsScene(parent)
{
    int i = 0;
    for(i = 0; i < 16; i++)
    {
        MyItem *myItem = new MyItem;
        this->myItem[i] = myItem;
        QRectF rent = this->myItem[i]->boundingRect();
        this->myItem[i]->setPos(i/4*rent.width(),i%4*rent.height());
        this->addItem(myItem);
    }
    this->ptimer = new QTimer;
    connect(this->ptimer,SIGNAL(timeout()),this,SLOT(showMouse()));
    this->ptimer->start(1000);

}

void MyScene::showMouse(){
    int count = rand()%3 + 1;
    for( int j = 0; j < 16; j++){
        this->myItem[j]->setPixmap(QPixmap(":/bg/pic/bg.png"));
    }
    for(int i = 0; i < count; i++){
        int index = rand()%16;
        this->myItem[index]->setPixmap(QPixmap(":/bg/pic/bg1.png"));
    }
}
