#include "handler.h"

Handler::Handler(QObject *parent) : QObject(parent)
{

}

Handler* Handler::hand = new Handler;

Handler* Handler::getInstance(){
    return hand;
}

bool Handler::isStart(){
    return this->start;
}

void Handler::setStart(bool isStart){
    this->start=isStart;
}

void Handler::addScore(){
    emit beatMouse();
}

void Handler::clearSocreNum(){
    emit clearSocre();
}
