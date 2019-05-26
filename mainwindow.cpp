#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->sc = new MyScene;
    this->ui->graph->setScene(sc);
}

MainWindow::~MainWindow()
{
    delete ui;
}
