// prompt.cpp
#include "prompt.h"
#include "ui_prompt.h"

#include <iostream>
#include <fstream>
using namespace std;

prompt::prompt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::prompt)
{
    ui->setupUi(this);
}

prompt::~prompt()
{
    delete ui;
}

// Define the box function within the class scope
void prompt::box(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->box->setText(qstr);
}
