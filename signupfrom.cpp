#include "signupfrom.h"
#include "ui_signupfrom.h"

#include <fstream>
#include <iostream>
using namespace std;

signupFrom::signupFrom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signupFrom)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &signupFrom::on_pushButton_clicked);
}

signupFrom::~signupFrom()
{
    delete ui;
}



void signupFrom::on_pushButton_clicked()
{
    std::string gender = ui->up_d_gen->text().toStdString();
    std::string ph = ui->up_d_ph->text().toStdString();
    std::string spec = ui->up_d_spec->text().toStdString();
    std::string email = ui->up_d_email->text().toStdString();
//    fstream file;
    std::ofstream file("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\doctor.txt", std::ios::app); // Use ofstream for file writing
    if(file.is_open()) {
        file << ' ' << ph << ' ' << gender << ' ' << email << ' ' << spec << std::endl;
        file.close();
        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cerr << "Unable to open file." << std::endl;
    }
    std::cout << gender << ph << spec << email << std::endl;

    prompt *win = new prompt;
    win->box("SignUp Success");
    win->show();
}

