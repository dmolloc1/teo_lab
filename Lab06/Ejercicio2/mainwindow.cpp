#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDialog"
#include "task.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&taskDialog, &Task::showName, this, &MainWindow::showInMain);

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showInMain(QString &n) {
    ui->nameMain->setText(n);
}
