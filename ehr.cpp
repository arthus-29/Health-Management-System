#include "ehr.h"
#include "ui_ehr.h"

Ehr::Ehr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ehr)
{
    ui->setupUi(this);
}


Ehr::~Ehr()
{
    delete ui;
}

void Ehr::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->textBrowser->setText(qstr);
}

