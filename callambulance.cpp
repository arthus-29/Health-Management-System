#include "callambulance.h"
#include "ui_callambulance.h"

callAmbulance::callAmbulance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::callAmbulance)
{
    ui->setupUi(this);
}

callAmbulance::~callAmbulance()
{
    delete ui;
}
