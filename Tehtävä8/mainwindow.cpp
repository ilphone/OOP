#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , player1Time(300)
    , player2Time(300)
{
    ui->setupUi(this);
    player1Timer = new QTimer(this);
    player2Timer = new QTimer(this);
    connect(player1Timer, &QTimer::timeout, this, &MainWindow::updatePlayer1Time);
    connect(player2Timer, &QTimer::timeout, this, &MainWindow::updatePlayer2Time);
}



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_twomin_clicked()
{
    player1Time = 120;
    player2Time = 120;
    ui->label->setText("120sec game");
}


void MainWindow::on_fivemin_clicked()
{
    player1Time = 300;
    player2Time = 300;
    ui->label->setText("5min game");
}


void MainWindow::on_start_game_clicked()
{
    ui->progressbar_player1->setMaximum(player1Time);
    ui->progressbar_player2->setMaximum(player2Time);
    ui->progressbar_player1->setValue(player1Time);
    ui->progressbar_player2->setValue(player2Time);
    activePlayer = 1;
    player1Timer->start(1000);
    player2Timer->stop();
}

void MainWindow::updatePlayer1Time(){
    if(player1Time > 0){
        player1Time--;
        ui->progressbar_player1->setValue(player1Time);
        qDebug() << "Player 1 aika: " << player1Time;
    }
    else{
        player1Timer->stop();
        ui->label->setText("Player 2 won");
    }

}

void MainWindow::updatePlayer2Time(){
    if(player2Time > 0){
        player2Time--;
        ui->progressbar_player2->setValue(player2Time);
         qDebug() << "Player 2 aika: " << player2Time;
    }
    else{
        player2Timer->stop();
        ui->label->setText("Player 1 won");
    }
}

void MainWindow::on_switch_player1_clicked()
{
    if(activePlayer == 1){
        player1Timer->stop();
        player2Timer->start(1000);
        activePlayer = 2;

    }
}


void MainWindow::on_switch_player2_clicked()
{    if(activePlayer == 2){
        player2Timer->stop();
        player1Timer->start(1000);
        activePlayer = 1;
    }

}


void MainWindow::on_stop_game_clicked()
{
    player1Timer->stop();
    player2Timer->stop();
    ui->label->setText("Select playtime and press start!");
}

