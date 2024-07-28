#ifndef ERROR_H
#define ERROR_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class error;
}

class error : public QWidget
{
    Q_OBJECT

public:
    explicit error(QWidget *parent = nullptr);
    ~error();
    void out(const std::string &text);

private slots:
    void on_pushButton_clicked();

private:
    Ui::error *ui;
};

#endif // ERROR_H
