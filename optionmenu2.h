#ifndef OPTIONMENU2_H
#define OPTIONMENU2_H
#include "win4.h"
#include "search_ehr.h"
#include <QWidget>

namespace Ui {
class optionmenu2;
}

class optionmenu2 : public QWidget
{
    Q_OBJECT

public:
    explicit optionmenu2(QWidget *parent = nullptr);
    ~optionmenu2();
    void out(const std::string &text);
    void setDoctor(const std::string& doctorName) {
        doctor = doctorName;
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::optionmenu2 *ui;
    std::string doctor;
};

#endif // OPTIONMENU2_H
