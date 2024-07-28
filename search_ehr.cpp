#include "search_ehr.h"
#include "ui_search_ehr.h"

#include <iostream>
#include <fstream>
using namespace std;
string patient_name;
Search_ehr::Search_ehr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Search_ehr)
{
    ui->setupUi(this);
}

Search_ehr::~Search_ehr()
{
    delete ui;
}

void Search_ehr::on_pushButton_clicked()
{
    Ehr *win=new Ehr;
    patient_name= ui->lineEdit->text().toStdString();

    string filename="C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\"+patient_name+"_ehr.txt";
    fstream readfile;
    readfile.open(filename,ios::in);
    string ehr,dump;
    while(!readfile.eof())
    {
        getline(readfile,ehr,'\n');
        dump=dump+ehr+"\n";
    }
    win->out(dump);
    readfile.close();
    win->show();

   // win->setname(patient_name);
}

