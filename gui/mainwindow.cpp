#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBoxTool->addItem("gcc");
    ui->comboBoxTool->addItem("g++");
    ui->comboBoxTool->addItem("erl");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BtnGenerate_clicked()
{
    QMessageBox box;
    box.setText("no Project Name");

    if (!CheckOptions())
        box.show();

}

bool MainWindow::CheckOptions()
{
    return false;
    if (ui->lineEditName->text() != "")
       return true;

}
