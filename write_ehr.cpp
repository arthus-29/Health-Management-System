#include "write_ehr.h"
#include "ui_write_ehr.h"

std::string patient,ehr;
write_ehr::write_ehr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::write_ehr)
{
    ui->setupUi(this);
}

write_ehr::~write_ehr()
{
    delete ui;
}

void write_ehr::on_pushButton_clicked()
{
    patient= ui->lineEdit->text().toStdString();
    ehr = ui->textEdit->toPlainText().toStdString();
    fstream writefile;
    string filename="C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\"+patient+"_ehr.txt";
    cout<<filename<<endl;
    writefile.open(filename,ios::out);
    writefile <<ehr;
    writefile.close();

    prompt *win = new prompt;
    win->box("EHR Writing Success...");
    win->show();
}

