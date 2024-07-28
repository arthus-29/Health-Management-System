#ifndef WIN2_H
#define WIN2_H
#include "prompt.h"

#include <QWidget>

namespace Ui {
class win2;
}

class win2 : public QWidget
{
    Q_OBJECT

public:
    explicit win2(QWidget *parent = nullptr);
    void display_d(const std::string &text);
    ~win2();
    void on_pushButton_clicked();
    void setPatient(const std::string& patientName) {
        patient = patientName;
    }

private:
    Ui::win2 *ui;
    std::string patient;
    std::string doctor;
    std::string appointment;
};

#endif // WIN2_H
