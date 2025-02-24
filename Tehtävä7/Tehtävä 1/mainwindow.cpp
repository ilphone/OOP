#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LisaaNappi_clicked()
{
    int num = ui->lineEdit->text().toInt();
    num++;
    ui->lineEdit->setText(QString::number(num));
}


void MainWindow::on_ResetNappi_clicked()
{
    ui->lineEdit->setText("0");
}

