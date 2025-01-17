#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "win2.h"
#include "signup_patient.h"
#include "signupfrom.h"
#include "optionmenu.h"
#include "error.h"
#include "optionmenu2.h"
#include "firstaid.h"
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void close_win(){
        close();
    }

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

//    void on_radioButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
