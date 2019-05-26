#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "handler.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->sc = new MyScene;
    this->ui->graph->setScene(sc);
    this->score = 0;

    connect(this->ui->btn_start,SIGNAL(clicked(bool)),this->sc,SLOT(startGame()));
    connect(this->ui->btn_suspend,SIGNAL(clicked(bool)),this->sc,SLOT(suspendGame()));
    connect(this->ui->btn_stop,SIGNAL(clicked(bool)),this->sc,SLOT(stopGame()));

    Handler * handler = Handler::getInstance();
    connect(handler,SIGNAL(beatMouse()),this,SLOT(updateScore()));
    connect(handler,SIGNAL(clearSocre()),this,SLOT(clearScore()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateScore(){
    this->score += 10;
    this->ui->score->display(score);
}

void MainWindow::clearScore(){
    this->score = 0;
    this->ui->score->display(score);
}

