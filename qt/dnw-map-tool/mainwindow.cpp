#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //TiletypeList
    tiletypeListModel = new QStringListModel(this);

    //QStringList tiletypeList;


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addTiletypeButton_clicked()
{

}

void MainWindow::on_editTiletypeButton_clicked()
{

}

void MainWindow::on_removeTiletypeButton_clicked()
{

}
