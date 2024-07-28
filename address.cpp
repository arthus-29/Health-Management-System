#include "address.h"
#include "ui_address.h"
#include "thankyou.h"
#include "time.h"
std::string house,street,city,area,code;
int price;
address::address(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::address)
{
    ui->setupUi(this);
}

address::~address()
{
    delete ui;
}

void address::on_pushButton_clicked()
{
    srand(time(0));
    house= ui->lineEdit->text().toStdString();
    street= ui->lineEdit_2->text().toStdString();
    area= ui->lineEdit_3->text().toStdString();
    code= ui->lineEdit_4->text().toStdString();
    city= ui->lineEdit_5->text().toStdString();
    price=rand()%250;
    Thankyou *win=new Thankyou;
    std::string dump;
    dump="House: "+house+"\n\nStreet: "+street+"\n\nArea: "+area+"\n\nPostal Code: "+code+"\n\nCity: "+city+"\n\nTotal Bill: $"+ to_string(price)+"\n\nStandard Delivery Time: 1-2 Days";
    win->out(dump);
    win->show();
}

