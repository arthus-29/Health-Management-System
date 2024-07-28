#ifndef SEARCH_EHR_H
#define SEARCH_EHR_H
#include "ehr.h"

#include <QWidget>

namespace Ui {
class Search_ehr;
}

class Search_ehr : public QWidget
{
    Q_OBJECT

public:
    explicit Search_ehr(QWidget *parent = nullptr);
    ~Search_ehr();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Search_ehr *ui;
};

#endif // SEARCH_EHR_H
