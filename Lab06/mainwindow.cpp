#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->addTaskButton, &QPushButton::clicked, QApplication::instance(), &QApplication::quit);
    connect(ui->listColors, &QListWidget::itemClicked, this, &MainWindow::clickColor);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickColor(QListWidgetItem *c) {
    ui->color->setText(c->text());
}

