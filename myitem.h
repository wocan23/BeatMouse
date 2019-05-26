#ifndef MYITEM_H
#define MYITEM_H
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsSceneMouseEvent>

class MyItem : public QGraphicsPixmapItem
{
public:
    MyItem();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void setMouse(bool isMouse);
    bool isMouse();
private:
    bool mouse;
};

#endif // MYITEM_H
