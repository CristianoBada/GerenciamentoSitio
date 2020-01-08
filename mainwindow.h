#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNova_Janela_triggered();

    void on_actionNovo_Form_triggered();

    void on_actionTela_Inicial_triggered();

    void on_actionAdd_Produto_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
