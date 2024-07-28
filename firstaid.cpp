#include "firstaid.h"
#include "ui_firstaid.h"
using namespace std;

firstAid::firstAid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::firstAid)
{
    ui->setupUi(this);

}

firstAid::~firstAid()
{
    delete ui;
}

void firstAid::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->textBrowser->setText(qstr);
}
