#include "win3.h"
#include "ui_win3.h"

win3::win3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::win3)
{
    ui->setupUi(this);
}

win3::~win3()
{
    delete ui;
}
void win3::display_p(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->display_p->setText(qstr);
}
