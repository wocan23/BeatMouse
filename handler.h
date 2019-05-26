#ifndef HANDLER_H
#define HANDLER_H

#include <QObject>

class Handler : public QObject
{
    Q_OBJECT

private:
    explicit Handler(QObject *parent = nullptr);

signals:
    void beatMouse();
    void clearSocre();
public:
    static Handler* getInstance();
    void addScore();
    bool isStart();
    void setStart(bool start);
    void clearSocreNum();

public slots:
private:
    static Handler *hand;
    bool start;
};

#endif // HANDLER_H
