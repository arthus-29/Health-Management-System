#ifndef IOT_H
#define IOT_H

#include <QWidget>

namespace Ui {
class iot;
}

class iot : public QWidget
{
    Q_OBJECT

public:
    explicit iot(QWidget *parent = nullptr);
    ~iot();
    void out(const std::string &text);

private:
    Ui::iot *ui;
};

#endif // IOT_H
