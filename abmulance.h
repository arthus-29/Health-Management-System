#ifndef ABMULANCE_H
#define ABMULANCE_H
#include <iostream>
#include <fstream>
using namespace std;
#include <QWidget>

namespace Ui {
class abmulance;
}

class abmulance : public QWidget
{
    Q_OBJECT

public:
    explicit abmulance(QWidget *parent = nullptr);
    void out(const std::string &text);
    ~abmulance();

private:
    Ui::abmulance *ui;
};

#endif // ABMULANCE_H
