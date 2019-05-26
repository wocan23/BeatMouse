#ifndef MYSCENE_H
#define MYSCENE_H

#include <QObject>
#include <QGraphicsScene>
#include "myitem.h"
#include <QTimer>

class MyScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit MyScene(QObject *parent = nullptr);
    QTimer* getTiemer();

signals:

public slots:
    void showMouse();
    void startGame();
    void suspendGame();
    void stopGame();

private:
    MyItem *myItem[16];
    QTimer *ptimer;

    void clearItem();
};

#endif // MYSCENE_H
