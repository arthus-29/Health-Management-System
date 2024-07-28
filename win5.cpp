#include "win5.h"
#include "ui_win5.h"
#include <fstream>
using namespace std;

win5::win5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::win5)
{
    ui->setupUi(this);
}

win5::~win5()
{
    delete ui;
}

void win5::out(const std::string &text) {
    QString qstr = QString::fromStdString(text);
    ui->firstout->setText(qstr);
}

void win5::on_pushButton_clicked()
{
    string store,dump;
    dump = "C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\";
    store = ui->firstIn->text().toStdString();
    dump += store + ".txt";
    fstream file;
    file.open(dump, ios::in);
    dump = "";
    while(!file.eof()){
        getline(file,store);
        dump += store + "\n";
    }
    win6 *win = new win6;
    win->out(dump);
    win->show();

}

