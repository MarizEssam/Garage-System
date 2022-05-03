#ifndef CARENTERWINDOW_H
#define CARENTERWINDOW_H

#include <QDialog>

namespace Ui {
class carEnterWindow;
}

class carEnterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit carEnterWindow(QWidget *parent = nullptr);
    ~carEnterWindow();

private slots:
    void on_carEnterWindow_accepted();

    void on_a1Btn_clicked();

    void on_a1Btn_pressed();
    void on_a2Btn_pressed();
    void on_b1Btn_pressed();
    void on_b2Btn_pressed();
    void on_h1Btn_pressed();
    void on_h2Btn_pressed();
    void on_c1Btn_pressed();
    void on_c2Btn_pressed();


    void on_a3Btn_pressed();
    void on_a4Btn_pressed();
    void on_a5Btn_pressed();
    void on_a6Btn_pressed();
    void on_a7Btn_pressed();
    void on_a8Btn_pressed();
    void on_a9Btn_pressed();
    void on_a10Btn_pressed();
    void on_a11Btn_pressed();
    void on_a12Btn_pressed();
    void on_a13Btn_pressed();
    void on_a14Btn_pressed();

    void on_b3Btn_pressed();
    void on_b4Btn_pressed();
    void on_b5Btn_pressed();
    void on_b6Btn_pressed();
    void on_b7Btn_pressed();
    void on_b8Btn_pressed();
    void on_b9Btn_pressed();
    void on_b10Btn_pressed();
    void on_b11Btn_pressed();
    void on_b12Btn_pressed();
    void on_b13Btn_pressed();
    void on_b14Btn_pressed();

    void on_c3Btn_pressed();
    void on_c4Btn_pressed();
    void on_c5Btn_pressed();
    void on_c6Btn_pressed();
    void on_c7Btn_pressed();
    void on_c8Btn_pressed();
    void on_c9Btn_pressed();
    void on_c10Btn_pressed();
    void on_c11Btn_pressed();
    void on_c12Btn_pressed();
    void on_c13Btn_pressed();
    void on_c14Btn_pressed();


    void on_h3Btn_pressed();
    void on_h4Btn_pressed();
    void on_h5Btn_pressed();
    void on_h6Btn_pressed();
    void on_h7Btn_pressed();
    void on_h8Btn_pressed();
    void on_h9Btn_pressed();
    void on_h10Btn_pressed();
    void on_h11Btn_pressed();
    void on_h12Btn_pressed();
    void on_h13Btn_pressed();
    void on_h14Btn_pressed();
private:
    Ui::carEnterWindow *ui;
};

#endif // CARENTERWINDOW_H
