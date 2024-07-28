#include "ambulance.h"
#include "ui_ambulance.h"

ambulance::ambulance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ambulance)
{
    ui->setupUi(this);
}

ambulance::~ambulance()
{
    delete ui;
}

void ambulance::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->textBrowser->setText(qstr);
}
