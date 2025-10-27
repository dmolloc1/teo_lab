#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    p = {
        {"México", "Español", "Ciudad de México"},
        {"Colombia", "Español", "Bogotá"},
        {"Perú", "Español", "Lima"},
        {"Chile", "Español", "Santiago"},
        {"Bolivia", "Español, Quechua, Aymara", "Sucre"}
    };

    for (const auto &pais : p) {
        ui->list_paises->addItem(pais.nom);
    }

    // Se realiza la conexión con el disparador boton
    connect(ui->list_paises, &QListWidget::itemClicked, this, &MainWindow::showPais);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showPais(QListWidgetItem *q)
{
    int id = ui->list_paises->row(q);
    ui->idioma_pais->setText(p[id].idi);
    ui->capital_pais->setText(p[id].cap);
}
