#ifndef WRITE_EHR_H
#define WRITE_EHR_H

#include "prompt.h"
#include <QWidget>
#include <iostream>
#include <fstream>
using namespace std;

namespace Ui {
class write_ehr;
}

class write_ehr : public QWidget
{
    Q_OBJECT

public:
    explicit write_ehr(QWidget *parent = nullptr);

    ~write_ehr();

private slots:
    void on_pushButton_clicked();

private:
    Ui::write_ehr *ui;


};

#endif // WRITE_EHR_H
