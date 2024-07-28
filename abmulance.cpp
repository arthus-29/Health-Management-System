#include "abmulance.h"
#include "ui_abmulance.h"

abmulance::abmulance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::abmulance)
{
    ui->setupUi(this);
}

abmulance::~abmulance()
{
    delete ui;
}

void abmulance::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->textBrowser->setText(qstr);
}
