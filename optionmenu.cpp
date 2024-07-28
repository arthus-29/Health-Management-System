#include "optionmenu.h"
#include "ui_optionmenu.h"
#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

optionmenu::optionmenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::optionmenu)
{
    ui->setupUi(this);
}

optionmenu::~optionmenu()
{
    delete ui;
}
void optionmenu::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->out->setText(qstr);
}

//=========================> set appointments
void optionmenu::on_pushButton_clicked()
{
    win2 *win = new win2;
    win->show();
    string dump = "", input_name, input_pass, store, spec;
    fstream file2;
    file2.open("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\doctor.txt", ios::in);
    while(file2 >> input_name >> input_pass >> store >> store >> store >> spec ){
        dump += input_name + "  ||  " + spec + "\n";
        cout << "store: " << input_name << endl;
    }

    win->setPatient(patient);
    win->display_d(dump);
}
//=============================>

//=========================> view appointments
void optionmenu::on_pushButton_2_clicked()
{
    string dump = "", input_name, input_pass, store, filename;
    win3 *win = new win3;
    fstream file2;
    ifstream file3;


    file2.open("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\doctor.txt", ios::in);
    while(file2 >> input_name >> input_pass >> store >> store >> store >> store ){
        filename = "C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\";
        filename += patient+ "_" + input_name + ".txt";
        cout << filename << endl;
        string permission, day_time, status;
        if(std::filesystem::exists(filename)) {
            fstream file2;
            file2.open(filename, ios::in);
            file2 >> permission >> day_time;
            if(permission == "1"){
                status = "Set";
            }
            else{
                status = "Denied";
            }
            dump += input_name +" " + status + " " + day_time + "\n";
            cout<<"file exist";
        }


    }

    win->display_p(dump);
    win->show();
}
//=============================>

void optionmenu::on_pushButton_3_clicked()
{
    iot *win = new iot;
    string store = "C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\", data = "";
    store += patient + ".txt";
    fstream file_iot;
    file_iot.open(store,ios::in);
    while(!file_iot.eof()){
        getline(file_iot,store);
        data += store + "\n";
    }
    win->out(data);
    win->show();

}



void optionmenu::on_pushButton_4_clicked()
{
    Medicines *win= new Medicines;
    string filename="C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\Medicines.txt";
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




    win->show();

}


void optionmenu::on_pushButton_5_clicked()
{
    callAmbulance *win=new callAmbulance;
    win->show();
}


//void optionmenu::on_pushButton_6_clicked()
//{
//    string dump = "Heart Attack\nSnake Bite\nElectric Shock\nBroken Bones\nRoad Accident\nExcessive Bleeding";
//    win5 *win = new win5;
//    win->out(dump);
//    win->show();
//}


void optionmenu::on_pushButton_6_clicked()
{
    string dump = "Heart Attack\nSnake Bite\nElectric Shock\nBroken Bones\nRoad Accident\nExcessive Bleeding";
        win5 *win = new win5;
        win->out(dump);
        win->show();
}

