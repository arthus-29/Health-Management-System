#ifndef OPTIONMENU_H
#define OPTIONMENU_H

#include "win2.h"
#include "win3.h"
#include "iot.h"
#include "medicines.h"
#include "callAmbulance.h"
#include "win5.h"

#include <QWidget>

namespace Ui {
class optionmenu;
}

class optionmenu : public QWidget
{
    Q_OBJECT

public:
    explicit optionmenu(QWidget *parent = nullptr);
    ~optionmenu();
    void out(const std::string &text);
    void setPatient(const std::string& patientName) {
        patient = patientName;
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::optionmenu *ui;
    std::string patient;
};

#endif // OPTIONMENU_H
