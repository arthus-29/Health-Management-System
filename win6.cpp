#include "win6.h"
#include "ui_win6.h"

win6::win6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::win6)
{
    ui->setupUi(this);
}

win6::~win6()
{
    delete ui;
}

void win6::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->dataOut->setText(qstr);
}
