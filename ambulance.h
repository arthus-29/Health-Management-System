#ifndef AMBULANCE_H
#define AMBULANCE_H
#include "callambulance.h"
#include <QWidget>

namespace Ui {
class ambulance;
}

class ambulance : public QWidget
{
    Q_OBJECT

public:
    explicit ambulance(QWidget *parent = nullptr);
    void out(const std::string &text);
    ~ambulance();

private:
    Ui::ambulance *ui;
};

#endif // AMBULANCE_H
