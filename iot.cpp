#include "iot.h"
#include "ui_iot.h"

iot::iot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::iot)
{
    ui->setupUi(this);
}

iot::~iot()
{
    delete ui;
}

void iot::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->iot_2->setText(qstr);
}
