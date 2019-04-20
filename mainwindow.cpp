#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    videoWidget = new QVideoWidget;
    player->setVideoOutput(videoWidget);
    videoWidget->show();

    player->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}
