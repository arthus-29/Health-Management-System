#include "win2.h"
#include "ui_win2.h"
#include <iostream>
#include <fstream>
using namespace std;

win2::win2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::win2)
{
    ui->setupUi(this);
    connect(ui->get_appoint, &QPushButton::clicked, this, &win2::on_pushButton_clicked);
}

win2::~win2()
{
    delete ui;
}


void win2::display_d(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->display_d->setText(qstr);
}

void win2::on_pushButton_clicked()
{
    /*string doctor, appointment,*/
    string filename;
    fstream file;
    doctor =  ui->doc_name->text().toStdString();
    appointment = ui->date_time->text().toStdString();
//    /*cout*/ << "TESTING: " << doctor << "  " << appointment << endl;
    filename = "C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\";
    filename += patient+"_"+doctor+".txt";
    file.open(filename,ios::out);
    file << 1 <<" "<< appointment << endl;  // 1 means by default it's approved

    prompt *win = new prompt;
    win->box("Appointment Set");
    win->show();


}

