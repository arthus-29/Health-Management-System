#ifndef WIN4_H
#define WIN4_H
#include "prompt.h"
#include <QWidget>

namespace Ui {
class win4;
}

class win4 : public QWidget
{
    Q_OBJECT

public:
    explicit win4(QWidget *parent = nullptr);
    ~win4();
    void box(const std::string &text);
    void setDoctor(const std::string& doctorName) {
        doctor = doctorName;
    }

private slots:
    void on_pushButton_clicked();

private:
    Ui::win4 *ui;
    std::string doctor;
};

#endif // WIN4_H
