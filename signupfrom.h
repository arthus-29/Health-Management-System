#ifndef SIGNUPFROM_H
#define SIGNUPFROM_H
#include "prompt.h"
#include <QWidget>

namespace Ui {
class signupFrom;
}

class signupFrom : public QWidget
{
    Q_OBJECT

public:
    explicit signupFrom(QWidget *parent = nullptr);
    ~signupFrom();

    void on_pushButton_clicked();

private:
    Ui::signupFrom *ui;
};

#endif // SIGNUPFROM_H
