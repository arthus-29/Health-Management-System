#include "thankyou.h"
#include "ui_thankyou.h"

Thankyou::Thankyou(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Thankyou)
{
    ui->setupUi(this);
}

Thankyou::~Thankyou()
{
    delete ui;
}
void Thankyou::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->textBrowser->setText(qstr);
}
