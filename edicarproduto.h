#ifndef EDICARPRODUTO_H
#define EDICARPRODUTO_H

#include <QDialog>

namespace Ui {
class EdicarProduto;
}

class EdicarProduto : public QDialog
{
    Q_OBJECT

public:
    explicit EdicarProduto(QWidget *parent = nullptr);
    ~EdicarProduto();

private slots:
    void on_salvarProduto_clicked();

    void on_voltarProduto_clicked();

private:
    void criaComboBox();

    Ui::EdicarProduto *ui;
};

#endif // EDICARPRODUTO_H
