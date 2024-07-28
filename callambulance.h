#ifndef CALLAMBULANCE_H
#define CALLAMBULANCE_H

#include <QWidget>

namespace Ui {
class callAmbulance;
}

class callAmbulance : public QWidget
{
    Q_OBJECT

public:
    explicit callAmbulance(QWidget *parent = nullptr);
    ~callAmbulance();

private:
    Ui::callAmbulance *ui;
};

#endif // CALLAMBULANCE_H
