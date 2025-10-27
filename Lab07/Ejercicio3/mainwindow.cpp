#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    países = {
        {"México", "Español", "Ciudad de México"},
        {"Colombia", "Español", "Bogotá"},
        {"Perú", "Español", "Lima"},
        {"Chile", "Español", "Santiago"},
        {"Bolivia", "Español, Quechua, Aymara", "Sucre"}
    };

    for (const auto &n : paises) {
        ui->list_paises->addItem(n.nombre);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showPais() {
    ui->idioma_pais->showText();
}
