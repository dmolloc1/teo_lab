#ifndef TASK_H
#define TASK_H

#include <QDialog>

namespace Ui {
class Task;
}

class Task : public QDialog
{
    Q_OBJECT

public:
    explicit Task(QWidget *parent = nullptr);
    ~Task();
    void addName();

private:
    Ui::Task *ui;

signals:
    void showName(const QString &n);

};


#endif // TASK_H
