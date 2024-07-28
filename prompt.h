#ifndef PROMPT_H
#define PROMPT_H

#include <QWidget>

namespace Ui {
class prompt;
}

class prompt : public QWidget
{
    Q_OBJECT

public:
    explicit prompt(QWidget *parent = nullptr);
    ~prompt();
    void box(const std::string &text);

private:
    Ui::prompt *ui;
};

#endif // PROMPT_H
