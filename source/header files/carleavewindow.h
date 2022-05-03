#ifndef CARLEAVEWINDOW_H
#define CARLEAVEWINDOW_H

#include <QDialog>

namespace Ui {
class carLeaveWindow;
}

class carLeaveWindow : public QDialog
{
    Q_OBJECT

public:
    explicit carLeaveWindow(QWidget *parent = nullptr);
    ~carLeaveWindow();

private slots:
    void on_comboBox_activated(int index);

    void on_leaveBtn_pressed();

private:
    Ui::carLeaveWindow *ui;
};

#endif // CARLEAVEWINDOW_H
