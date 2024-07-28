#ifndef THANKYOU_H
#define THANKYOU_H
#include <iostream>
#include <fstream>
    using namespace std;
#include <QWidget>

namespace Ui {
class Thankyou;
}

class Thankyou : public QWidget
{
    Q_OBJECT

public:
    explicit Thankyou(QWidget *parent = nullptr);
    void out(const std::string &text);

    ~Thankyou();

private:
    Ui::Thankyou *ui;
};

#endif // THANKYOU_H
