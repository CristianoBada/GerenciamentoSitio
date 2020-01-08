#include "telainicialform.h"
#include "ui_telainicialform.h"
#include "bancodedados.h"
#include "dialog.h"
#include "cadastroproduto.h"

TelaInicialForm::TelaInicialForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TelaInicialForm)
{
    ui->setupUi(this);

    ui->abas->addTab(new QWidget(), "Imicio");

    CadastroProduto* cp = new CadastroProduto(this);
    ui->abas->addTab(cp, "Produtos");

    ui->abas->addTab(new QWidget(), "Vendas");

    ui->abas->addTab(new QWidget(), "Compras");
}

TelaInicialForm::~TelaInicialForm()
{
    delete ui;
}

void TelaInicialForm::on_abas_currentChanged(int index)
{
    switch (index) {
        case 0:
            break;
    }
}
