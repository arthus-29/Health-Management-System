#ifndef SIGNUP_PATIENT_H
#define SIGNUP_PATIENT_H
#include "prompt.h"

#include <QString>
#include <QWidget>

namespace Ui {
class signup_patient;
}

class signup_patient : public QWidget
{
    Q_OBJECT

public:
    explicit signup_patient(QWidget *parent = nullptr);
    ~signup_patient();

    QString getGenderText() const;
    QString getPhText() const;
    QString getAgeText() const;
    QString getEmailText() const;
    void on_pushButton_clicked();

private:
    Ui::signup_patient *ui;
};

#endif // SIGNUP_PATIENT_H
