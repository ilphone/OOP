#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void numeroPainettu();

    void on_clear_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_equals_clicked();

private:
    Ui::MainWindow *ui;
    int state;
    QString num1, num2;
    enum Operaattori{None, Lisays, Vahennys, Kerto, Jako};
    Operaattori nykyinenOperaattori = None;

};
#endif // MAINWINDOW_H
