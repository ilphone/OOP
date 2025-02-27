#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTimer>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();


private slots:
    void on_twomin_clicked();
    void on_fivemin_clicked();
    void on_start_game_clicked();
    void updatePlayer1Time();
    void updatePlayer2Time();

    void on_switch_player1_clicked();

    void on_switch_player2_clicked();

    void on_stop_game_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *player1Timer;
    QTimer *player2Timer;
    int player1Time;
    int player2Time;
    int activePlayer;
};
#endif // MAINWINDOW_H
