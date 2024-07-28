#include "medicines.h"
#include "ui_medicines.h"

Medicines::Medicines(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Medicines)
{
    ui->setupUi(this);
}

Medicines::~Medicines()
{
    delete ui;
}

void Medicines::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->textBrowser->setText(qstr);
}

void Medicines::on_pushButton_clicked()
{
    address *win=new address;
    win->show();
}

