#ifndef TELAINICIALFORM_H
#define TELAINICIALFORM_H

#include <QWidget>

namespace Ui {
class TelaInicialForm;
}

class TelaInicialForm : public QWidget
{
    Q_OBJECT

public:
    explicit TelaInicialForm(QWidget *parent = nullptr);
    ~TelaInicialForm();

private slots:
    void on_abas_currentChanged(int index);

private:
    Ui::TelaInicialForm *ui;
};

#endif // TELAINICIALFORM_H
