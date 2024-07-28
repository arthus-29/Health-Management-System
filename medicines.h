#ifndef MEDICINES_H
#define MEDICINES_H
#include"address.h"
#include <QWidget>

namespace Ui {
class Medicines;
}

class Medicines : public QWidget
{
    Q_OBJECT

public:
    explicit Medicines(QWidget *parent = nullptr);
    void out(const std::string &text);
    ~Medicines();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Medicines *ui;
};

#endif // MEDICINES_H
