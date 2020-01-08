#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "form.h"
#include "telainicialform.h"
#include "edicarproduto.h"
#include <QDesktopWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_actionTela_Inicial_triggered();
    this->setWindowTitle("Gerenciamento de Produção");

    QRect screenSize = QDesktopWidget().availableGeometry(this);
    this->setFixedSize(QSize(screenSize.width() * 0.7f, screenSize.height() * 0.7f));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNova_Janela_triggered()
{
    //Cria uma nova janela
    Dialog obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionNovo_Form_triggered()
{
    //Cria um novo form
    Form* f = new Form(this);
    setCentralWidget(f);
}

void MainWindow::on_actionTela_Inicial_triggered()
{
    TelaInicialForm* tela = new TelaInicialForm(this);
    setCentralWidget(tela);
}

void MainWindow::on_actionAdd_Produto_triggered()
{
    EdicarProduto ep;
    ep.setModal(true);
    ep.exec();
}
