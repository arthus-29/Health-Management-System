#ifndef EHR_H
#define EHR_H

#include <QWidget>

namespace Ui {
class Ehr;
}

class Ehr : public QWidget
{
    Q_OBJECT

public:
    explicit Ehr(QWidget *parent = nullptr);
    void setname(std::string name)
    {
        patient_name=name;
    }
    void out(const std::string &text);
    ~Ehr();

private:
    Ui::Ehr *ui;
    std::string patient_name;
};

#endif // EHR_H
