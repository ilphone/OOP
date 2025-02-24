#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    state = 1;
    ui->setupUi(this);
    QStringList numerot = {"N0", "N1", "N2", "N3", "N4", "N5", "N6", "N7", "N8", "N9"};

    for (const QString &name : numerot) {
        QPushButton *nappi = findChild<QPushButton*>(name);
        if (nappi) {
            connect(nappi, &QPushButton::clicked, this, &MainWindow::numeroPainettu);
        }
    }



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numeroPainettu(){
    QPushButton *nappi = qobject_cast<QPushButton*>(sender());
    if(state == 1){
        ui->num1->setText(ui->num1->text() + nappi->text());
        return;
    }

    ui->num2->setText(ui->num2->text() + nappi->text());
};



void MainWindow::on_clear_clicked()
{
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
    state = 1;
}


void MainWindow::on_add_clicked()
{
    nykyinenOperaattori = Lisays;
    state = 2;
}


void MainWindow::on_sub_clicked()
{
    nykyinenOperaattori = Vahennys;
    state = 2;
}


void MainWindow::on_mul_clicked()
{
    nykyinenOperaattori = Kerto;
    state = 2;
}


void MainWindow::on_div_clicked()
{
    nykyinenOperaattori = Jako;
    state = 2;
}



void MainWindow::on_equals_clicked()
{
    int numero1 = ui->num1->text().toInt();
    int numero2 = ui->num2->text().toInt();
    int lasku;
    if(nykyinenOperaattori == Lisays){
        lasku = numero1+numero2;
        ui->result->setText(QString::number(lasku));
        return;
    }
    if(nykyinenOperaattori == Vahennys){
        lasku = numero1-numero2;
        ui->result->setText(QString::number(lasku));
        return;
    }
    if(nykyinenOperaattori == Kerto){
        lasku = numero1*numero2;
        ui->result->setText(QString::number(lasku));
        return;
    }
    if(nykyinenOperaattori == Jako){
        if(numero1 == 0 || numero2 == 0 ){
            ui->result->setText("ERROR");
            return;
        }
        double jakolasku = 1.0*numero1/numero2;
        qDebug() << jakolasku;
        ui->result->setText(QString::number(jakolasku));
        return;
    }
}

