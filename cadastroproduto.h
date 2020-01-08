#ifndef CADASTROPRODUTO_H
#define CADASTROPRODUTO_H

#include <QWidget>

namespace Ui {
class CadastroProduto;
}

class CadastroProduto : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroProduto(QWidget *parent = nullptr);
    ~CadastroProduto();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    void atulizaTabela();

    Ui::CadastroProduto *ui;
};

#endif // CADASTROPRODUTO_H
