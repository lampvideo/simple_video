#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMediaPlayer>
#include <QVideoWidget>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVideoWidget *videoWidget;
    QMediaPlayer *player;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
