#ifndef WIN6_H
#define WIN6_H

#include <QWidget>

namespace Ui {
class win6;
}

class win6 : public QWidget
{
    Q_OBJECT

public:
    explicit win6(QWidget *parent = nullptr);
    ~win6();
    void out(const std::string &text);

private:
    Ui::win6 *ui;
};

#endif // WIN6_H
