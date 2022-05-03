#include "carleavewindow.h"
#include "ui_carleavewindow.h"
#include "globalvars.h"
#include <QMessageBox>
#include <cmath>
Spot* carPtr;
void updateLabels(Spot* spot, QLabel *carName,QLabel *Parking,QLabel *pay ,QLabel *duration,QLabel *start){
    carName->setText("Name: "+spot->takenBy);
    Parking->setText("Parking Spot: "+spot->name);
    start->setText("Start Time: "+spot->startTime.toString());
    double totaltime = (spot->startTime.secsTo(QTime::currentTime())) ;
    int totalpay = ceil(totaltime/60) * 10;
    if (totalpay>=60){totalpay=80;}
    QString payy = QString::number(totalpay);
    QTime t = QTime(0,0,0);
    t= t.addSecs(totaltime);
    pay->setText("Payment: "+payy+" $");
    duration->setText("Duration: "+t.toString());
}
carLeaveWindow::carLeaveWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::carLeaveWindow)
{
    ui->setupUi(this);

    for(int i =0;i<56;i++){
        if(SpotArray[i]->taken){ui->comboBox->addItem(SpotArray[i]->takenBy);}
    }

}
Spot* searchByCar(Spot* spotArray[],QComboBox *combobox){
    QString car = combobox->currentText();
    for(int i=0;i<56;i++){
        if(spotArray[i]->takenBy == car){
           return spotArray[i];
        }
    }return spotArray[7];
}

carLeaveWindow::~carLeaveWindow()
{
    delete ui;
}

void carLeaveWindow::on_comboBox_activated(int index)
{
    carPtr = searchByCar(SpotArray,ui->comboBox);
    ui->leaveBtn->setEnabled(true);
    updateLabels(carPtr,ui->carNumberLbl,ui->parkingSpotLbl,ui->paymentLbl,ui->durationLbl,ui->startTimeLbl);

}


void carLeaveWindow::on_leaveBtn_pressed()
{


    QString test = "Confirm Leave for "+ carPtr->takenBy +"\n"+ui->paymentLbl->text();
    QMessageBox::StandardButton replyy;
    replyy = QMessageBox::question(this, "Parking", test,
                                  QMessageBox::Yes|QMessageBox::No);
    if (replyy == QMessageBox::Yes) {
        carPtr->taken=false;
        carPtr->takenBy="None";

    }
    else {

    }

    carLeaveWindow::close();

}

