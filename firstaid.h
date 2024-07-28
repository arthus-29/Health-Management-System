#ifndef FIRSTAID_H
#define FIRSTAID_H

#include <QWidget>

namespace Ui {
class firstAid;
}

class firstAid : public QWidget
{
    Q_OBJECT

public:
    explicit firstAid(QWidget *parent = nullptr);
    ~firstAid();
    void out(const std::string &text);
private:
    Ui::firstAid *ui;
};

#endif // FIRSTAID_H
