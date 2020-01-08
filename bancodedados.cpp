#include "bancodedados.h"
#include <QMessageBox>
#include <QtSql>
#include <QColumnView>

BancoDeDados::BancoDeDados()
{
}

void BancoDeDados::conectar(QWidget* wi){
    QSqlDatabase db;

    if (QSqlDatabase::contains("QMYSQL")) {
        db = QSqlDatabase::database("QMYSQL");
    } else {
        db = QSqlDatabase::addDatabase("QMYSQL");
    }

    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("admin");
    db.setDatabaseName("gerenciamento");

    if (!db.open()) {
        QMessageBox::critical(wi, "Erro", db.lastError().text());
    }
}

void BancoDeDados::addValores(QString nome, QString unidade) {
    QSqlQuery qsq;

    qsq.prepare("INSERT INTO produto (nome, unidade) VALUES(?, ?);");

    qsq.addBindValue(nome);
    qsq.addBindValue(unidade);

    qsq.exec();
}

void BancoDeDados::desconectar() {

}

void BancoDeDados::completaTabela(QTableView* table){
    QSqlQueryModel* modal = new QSqlQueryModel();

    QSqlQuery qsq;
    qsq.prepare("select * from produto");

    qsq.exec();

    modal->setQuery(qsq);

    table->setModel(modal);
}
