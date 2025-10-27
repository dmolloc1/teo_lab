#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

struct Pais {
    QString nom;
    QString idi;
    QString cap;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QList<Pais> p; // Se creo una lista de objetos pais

public slots:
    void showPais(QListWidgetItem *q); // selecciona el elemento de la lista
};

#endif // MAINWINDOW_H
