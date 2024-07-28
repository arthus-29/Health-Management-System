#ifndef CALL_AMBULANCE_H
#define CALL_AMBULANCE_H
#include "ambulance.h"
#include "address.h"

#include <iostream>
#include <fstream>
using namespace std;
#include <QWidget>

namespace Ui {
class call_ambulance;
}

class call_ambulance : public QWidget
{
    Q_OBJECT

public:
    explicit call_ambulance(QWidget *parent = nullptr);
    ~call_ambulance();

//private slots:
    void on_pushButton_clicked();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::call_ambulance *ui;
};

#endif // CALL_AMBULANCE_H
