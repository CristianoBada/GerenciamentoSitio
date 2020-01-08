#include "edicarproduto.h"
#include "ui_edicarproduto.h"
#include "bancodedados.h"

EdicarProduto::EdicarProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EdicarProduto)
{
    ui->setupUi(this);
    this->setWindowTitle("Edição de Produtos");

    criaComboBox();
}

EdicarProduto::~EdicarProduto()
{
    delete ui;
}

void EdicarProduto::on_salvarProduto_clicked()
{
    BancoDeDados bd;
    bd.conectar(this);

    bd.addValores(ui->nomeProduto->text(), ui->unidadeProduto->currentText());

    this->close();
}

void EdicarProduto::criaComboBox() {
    ui->unidadeProduto->addItem("Kg");
    ui->unidadeProduto->addItem("L");
    ui->unidadeProduto->addItem("Un.");
}

void EdicarProduto::on_voltarProduto_clicked()
{
    this->close();
}
