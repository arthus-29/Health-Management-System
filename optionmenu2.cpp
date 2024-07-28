#include "optionmenu2.h"
#include "ui_optionmenu2.h"
#include "write_ehr.h"
#include <fstream>
#include <filesystem>
#include <iostream>
using namespace std;
optionmenu2::optionmenu2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::optionmenu2)
{
    ui->setupUi(this);
}

optionmenu2::~optionmenu2()
{
    delete ui;
}
void optionmenu2::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->out->setText(qstr);
}

void optionmenu2::on_pushButton_clicked()
{
    string dump = "", input_name, input_pass, store, filename;
    win4 *win = new win4;
    win->setDoctor(doctor);
    fstream file2;
    ifstream file3;

    file2.open("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\patient.txt", ios::in);
    while(file2 >> input_name >> input_pass >> store >> store >> store >> store ){
        filename = "C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\";
        filename += input_name+ "_" + doctor + ".txt";
        cout << filename << endl;
        if(std::filesystem::exists(filename)) {
            file2.close();
            file2.open(filename, ios::in);
            file2 >> store >> input_pass;
            dump += input_name + "   ||   " + input_pass + "\n";
            cout<<"file exist";
        }
    }
    win->box(dump);
    win->show();
}


void optionmenu2::on_pushButton_2_clicked()
{
    Search_ehr *win=new Search_ehr;
    win->show();
}


void optionmenu2::on_pushButton_3_clicked()
{
    write_ehr *win=new write_ehr();
    win->show();
}

