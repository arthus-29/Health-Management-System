#include "error.h"
#include "ui_error.h"

error::error(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::error)
{
    ui->setupUi(this);
}

error::~error()
{
    delete ui;
}

void error::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->out->setText(qstr);
}

void error::on_pushButton_clicked()
{

    MainWindow *win = new MainWindow;
    win->close_win();
    win->show();

}

