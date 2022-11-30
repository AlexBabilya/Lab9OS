#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <thread>
#include <windows.h>
#include <string>
#include <windows.h>
#include <thread>
#include <chrono>
#include <fstream>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createProcessButton_clicked();

    void on_createIdeasPushButton_clicked();

    void on_startVoatingButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
