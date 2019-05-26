#include "myitem.h"
#include "QCursor"
#include "handler.h"

MyItem::MyItem()
{
    this->setPixmap(QPixmap(":/bg/pic/bg.png"));
    this->setCursor(QCursor(QPixmap(":/mouse/pic/chui-up.png")));
}

void MyItem::setMouse(bool isMouse){
    this->mouse = isMouse;
}

bool MyItem::isMouse(){
    return this->mouse;
}

void MyItem::mousePressEvent(QGraphicsSceneMouseEvent *event){
    Handler * handler = Handler::getInstance();
    if(handler->isStart()){
        this->setCursor(QCursor(QPixmap(":/mouse/pic/chui.png")));
        if(this->isMouse()){
             this->setPixmap(QPixmap(":/mouse/pic/beat.png"));
             handler->addScore();
        }
    }
}

void MyItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){
    this->setCursor(QCursor(QPixmap(":/mouse/pic/chui-up.png")));
}
