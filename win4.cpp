#include "win4.h"
#include "ui_win4.h"
#include <fstream>
#include <iostream>
using namespace std;
win4::win4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::win4)
{
    ui->setupUi(this);
}

win4::~win4()
{
    delete ui;
}

void win4::box(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    // Assuming there's a QTextEdit widget named 'box' in your win4 UI
    ui->box->setText(qstr);
}

void win4::on_pushButton_clicked()
{
    std::string name, filename;
    char day_time[100];
    name = ui->name->text().toStdString();
    filename = "C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\" + name+"_"+doctor+".txt";

    cout <<"testing: "<< filename << endl;

    fstream file, file2;
    file.open(filename, ios::in);
    file.getline(day_time, 100);
    file.close();
    day_time[0] = '0';
    file2.open(filename, ios::out);
    file2 << day_time << endl;

    cout << day_time << endl;

    prompt* win1 = new prompt;
    win1->box("Appointment Cancled");
    win1->show();

}
