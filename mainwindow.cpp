// mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace  std;

int flag, flag2, counter;
std::string usr, pswd, reply;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    flag = 0; // Initialize your flags here or in constructor
    flag2 = 2;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_clicked()  // signin
{
    flag = 1;
    usr = ui->usr_name->text().toStdString();
    pswd = ui->usr_paswd->text().toStdString();
    // Perform operations related to signin
}


void MainWindow::on_radioButton_2_clicked()  //signup
{
    flag = 2;
    usr = ui->usr_name->text().toStdString();
    pswd = ui->usr_paswd->text().toStdString();


}


void MainWindow::on_radioButton_3_clicked() // doctor
{
    if (flag2 == 2 && counter == 0){
        flag2 = 1;
        counter = 1;
    }
    else{
        flag2 = 2;
        counter = 0;
    }
}

//implied
//void MainWindow::on_radioButton_4_clicked() // patient
//{
//    flag2= 2;
//}


void MainWindow::on_pushButton_clicked() // click
{

    // ========================> Doctor Login start
    show(); // Show the main window
    if(flag == 1 && flag2 == 1){
    optionmenu2 *win = new optionmenu2; // Create an instance of option menu

        win->setDoctor(usr);
        string input_name, input_pass, store;
        fstream file;
        bool check = false;
        file.open("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\doctor.txt", ios::in);
        while(file >> input_name >> input_pass >> store >> store >> store >> store ){
            cout << input_name << " " << input_pass << endl;
            if(input_name == usr && pswd == input_pass){
                check = true;
                win->out("Doctor Found Login Success.....");
                break;
            }
        }
        if(check == false){
            error *win = new error;
            win->show(); // Show the win2 window
            win->out("Invalid Cradentials Try Again.....");
        }
        else{
              win->show(); // Show the win2 window
        }
    }
    //==================> Doctor Login end


    // ==========================> Patient Login start
    else if(flag == 1 && flag2 == 2 ){
        optionmenu *win = new optionmenu;
        win->setPatient(usr);
        string input_name, input_pass, store;
        fstream file, file2;
        bool check = false;
        file.open("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\patient.txt", ios::in);
        while(file >> input_name >> input_pass >> store >> store >> store >> store ){
            cout << input_name << " " << input_pass << endl;
            if(input_name == usr && pswd == input_pass){
                check = true;
//                cout << "Hello" << endl;
                win->out("Patient Found Login Success.....");
                win->show();
                break;
            }
        }
        if(check == false){
            error *win = new error;
            win->show(); // Show the win2 window
            win->out("Invalid Cradentials Try Again.....");
        }
        flag2 = 2;

        srand(time(0));
        store = "C:\\Users\\hello\\OneDrive\\Documents\\untitled\\" + usr + ".txt";
        fstream file_iot;
        file_iot.open(store,ios::app);
        file_iot << "Heart Rate: " << rand() % 41 + 60 << endl;
        file_iot << "Blood Pressure Systolic: " << rand() % 31 + 90  << endl;
        file_iot << "Blood Pressure diastolic: " << rand() % 21 + 60  << endl;
        file_iot << "Body Temprature: " << static_cast<float>(rand()) / static_cast<float>(RAND_MAX / 2) + 97.0f << endl;
        file_iot << "=================================================" << endl;


    }
    //=======================> Patient Login end




    // ============================> Patient Signup start
    else if(flag == 2 && flag2 == 2){
        cout << "!@#$%" << endl;
        fstream file1;
        file1.open("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\patient.txt", ios::app);
        file1 << usr << " " << pswd;
        file1.close();
        signup_patient *win = new signup_patient; // Create an instance of win2
        win->show(); // Show the win2 window
    }
     //=======================> Patient Signup end



    // ============================> Doctor Signup start
    else if(flag == 2 && flag2 == 1 ){
        fstream file;
        file.open("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\doctor.txt", ios::app);
        file<< usr << " " << pswd;
        file.close();
        signupFrom *win = new signupFrom; // Create an instance of win2
        win->show(); // Show the win2 window
    }
    //=======================> Doctor Signup end

    else{
        error *win = new error; // Create an instance of win2
        win->out("Invalid Cradentials or Input"); // Call the 'out' function in win2
        win->show(); // Show the win2 window
    }


}




void MainWindow::on_pushButton_2_clicked()
{
    firstAid *win = new firstAid;
    fstream file;
    file.open("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\FirstAid.txt", ios::in);
    string out_data, store = "";

    while(!file.eof()){
        getline(file,out_data,'\n');
        store += out_data + "\n";
    }
    win->out(store);
    win->show();

}

