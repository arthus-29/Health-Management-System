#ifndef WIN3_H
#define WIN3_H

#include <QWidget>

namespace Ui {
class win3;
}

class win3 : public QWidget
{
    Q_OBJECT

public:
    explicit win3(QWidget *parent = nullptr);
    ~win3();
    void display_p(const std::string &text);

private:
    Ui::win3 *ui;
};

#endif // WIN3_H
