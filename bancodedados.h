#ifndef BANCODEDADOS_H
#define BANCODEDADOS_H

#include <QSqlDatabase>
#include <QWidget>
#include <QTableView>

class BancoDeDados
{
public:
    BancoDeDados();

    void conectar(QWidget* wi);

    void desconectar();

    void addValores(QString nome, QString unidade);

    void completaTabela(QTableView* table);

private:
    QSqlDatabase db;
};

#endif // BANCODEDADOS_H
