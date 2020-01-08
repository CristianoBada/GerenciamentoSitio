#include "cadastroproduto.h"
#include "ui_cadastroproduto.h"
#include "bancodedados.h"
#include "edicarproduto.h"

CadastroProduto::CadastroProduto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CadastroProduto)
{
    ui->setupUi(this);

    atulizaTabela();
}

CadastroProduto::~CadastroProduto()
{
    delete ui;
}

void CadastroProduto::on_pushButton_clicked()
{
    EdicarProduto ep;
    ep.setModal(true);
    ep.exec();
    atulizaTabela();
}

void CadastroProduto::atulizaTabela(){
    BancoDeDados* bd = new BancoDeDados();
    bd->conectar(this);
    bd->completaTabela(ui->tableView);
}

void CadastroProduto::on_pushButton_2_clicked()
{
   QModelIndex index = ui->tableView->currentIndex();
   int value = ui->tableView->model()->index(index.row(),0).data().toInt();
   ui->label->setText(QString(value));
}

void CadastroProduto::on_tableView_doubleClicked(const QModelIndex &index)
{
    EdicarProduto ep;
    ep.setModal(true);
    ep.exec();
    atulizaTabela();
}
