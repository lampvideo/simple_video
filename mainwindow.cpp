#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    videoWidget = new QVideoWidget;
    player = new QMediaPlayer();
    player->setVideoOutput(videoWidget);
    
    videoWidget->show();
    QString str="/home/box/dmb1.mp4";
    player->setMedia(QMediaContent(QUrl::fromLocalFile(str)));
    player->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}
