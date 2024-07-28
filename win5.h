#ifndef WIN5_H
#define WIN5_H
#include "win6.h"
#include <QWidget>

namespace Ui {
class win5;
}

class win5 : public QWidget
{
    Q_OBJECT

public:
    explicit win5(QWidget *parent = nullptr);
    ~win5();
    void out(const std::string &text);

private slots:
    void on_pushButton_clicked();

private:
    Ui::win5 *ui;
};

#endif // WIN5_H
