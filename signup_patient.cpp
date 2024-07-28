#include "signup_patient.h"
#include "ui_signup_patient.h"
#include <iostream>
#include <fstream>

signup_patient::signup_patient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signup_patient)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &signup_patient::on_pushButton_clicked);
}

signup_patient::~signup_patient()
{
    delete ui;
}
QString signup_patient::getGenderText() const {
    return ui->up_p_gen->text(); // Assuming up_p_gen is a QComboBox
}

QString signup_patient::getPhText() const {
    return ui->up_p_ph->text(); // Assuming up_p_ph is a QLineEdit
}

QString signup_patient::getAgeText() const {
    return ui->up_p_age->text(); // Assuming up_p_age is a QLineEdit
}

QString signup_patient::getEmailText() const {
    return ui->up_p_email->text(); // Assuming up_p_email is a QLineEdit
}

void signup_patient::on_pushButton_clicked()
{
    std::string gender = ui->up_p_gen->text().toStdString();
    std::string ph = ui->up_p_ph->text().toStdString();
    std::string age = ui->up_p_age->text().toStdString();
    std::string email = ui->up_p_email->text().toStdString();
    //    fstream file;
    std::ofstream file("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\patient.txt", std::ios::app); // Use ofstream for file writing
    if(file.is_open()) {
        file << ' ' << ph << ' ' << gender << ' ' << email << ' ' << age << std::endl;
        file.close();
        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
    std::cout << gender << ph << age << email << std::endl;

    prompt *win = new prompt;
    win->box("SignUp Success");
    win->show();
}

