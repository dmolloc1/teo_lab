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
    connect(ui->taskButton, &QPushButton::clicked, this, &MainWindow::openTaskDialog);

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showInMain(const QString &n) {
    ui->nameMain->setText(n);
}

void MainWindow::openTask()
{
    Task taskDialog(this);
    taskDialog.exec();
}

