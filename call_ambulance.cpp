#include "call_ambulance.h"

#include "ui_call_ambulance.h"



call_ambulance::call_ambulance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::call_ambulance)
{
    ui->setupUi(this);
}

call_ambulance::~call_ambulance()
{
    delete ui;
}


void call_ambulance::on_pushButton_2_clicked()
{
    cout << "CODE CHECKED" << endl;
    std::string house2,street2,city2,area2,ph, dump;
        house2= ui->lineEdit->text().toStdString();
        street2= ui->lineEdit_2->text().toStdString();
        area2= ui->lineEdit_3->text().toStdString();
        ph= ui->lineEdit_4->text().toStdString();
        city2= ui->lineEdit_5->text().toStdString();
    cout << "HELLO BHAI" << endl;
        dump="House: "+house2+"\n\nStreet: "+street2+"\n\nArea: "+area2+"\n\nPhone No: "+ph+"\n\nCity: "+city2+"\n\n===================> Ambulance Arriving in 5-10 mins.";
        ambulance *wina = new ambulance;
        wina->out(dump);
        wina->show();
}

