#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "task.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->addTaskButton, &QPushButton::clicked, QApplication::instance(), &QApplication::quit);
    connect(ui->addTaskButton, &QPushButton::clicked, this, &MainWindow::openTaskDialog);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openTaskDialog() {
    Task taskDialog(this);
    taskDialog.exec();
}
