#include "carenterwindow.h"
#include "ui_carenterwindow.h"
#include "globalvars.h"
#include <QTime>
#include <QMessageBox>
QString cyan = "background:cyan;";
QString white = "background:white;";
QString red =  "background:red;";
QString green =  "background:lightgreen;";
void updateParkingSpot(Spot S,QLabel *handLbl,QLabel *tknLbl,QLabel *tknByLbl,QPushButton *ParkBtn){
    if(S.handicapped==true){handLbl->setText("HANDICAPPED");
        handLbl->setStyleSheet(cyan);
        if(!handicapped)
        {ParkBtn->setEnabled(false);}}
    else{handLbl->setText("Normal Parking");
        handLbl->setStyleSheet(white);}

    if(S.taken==true){
        tknLbl->setText("TAKEN");
        tknLbl->setStyleSheet(red);
        ParkBtn->setEnabled(false);}
    else {tknLbl->setText("FREE");
        tknLbl->setStyleSheet(green);}
    tknByLbl->setText("Taken By: "+S.takenBy);



}
void startParkingSession(Spot * S,QWidget *parent){

    QString SpotName=S->name;
    QTime currentTime=QTime::currentTime();


    QString test = "Confirm Parking for "+ carNumber +"\n at Parking Spot "+SpotName+"\n at time "+currentTime.toString() ;
    QMessageBox::StandardButton replyy;
    replyy = QMessageBox::question(parent, "Parking", test,
                                   QMessageBox::Yes|QMessageBox::No);
    if (replyy == QMessageBox::Yes) {
        S->startTime = currentTime;
        S->takenBy= carNumber;
        S->taken=true;

    }
    else {

    }

}

carEnterWindow::carEnterWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::carEnterWindow)
{

    ui->setupUi(this);
    updateParkingSpot(a1,ui->a1handLbl,ui->a1TakenLbl,ui->takenByLbla1,ui->a1Btn);
    updateParkingSpot(a2,ui->a2handLbl,ui->a2TakenLbl,ui->takenByLbla2,ui->a2Btn);
    updateParkingSpot(b1,ui->b1handLbl,ui->b1TakenLbl,ui->takenByLblb1,ui->b1Btn);
    updateParkingSpot(b2,ui->b2handLbl,ui->b2TakenLbl,ui->takenByLblb2,ui->b2Btn);
    updateParkingSpot(c1,ui->c1handLbl,ui->c1TakenLbl,ui->takenByLblc1,ui->c1Btn);
    updateParkingSpot(c2,ui->c2handLbl,ui->c2TakenLbl,ui->takenByLblc2,ui->c2Btn);


    updateParkingSpot(a3,ui->a3handLbl,ui->a3TakenLbl,ui->takenByLbla3,ui->a3Btn);
    updateParkingSpot(a4,ui->a4handLbl,ui->a4TakenLbl,ui->takenByLbla4,ui->a4Btn);
    updateParkingSpot(a5,ui->a5handLbl,ui->a5TakenLbl,ui->takenByLbla5,ui->a5Btn);
    updateParkingSpot(a6,ui->a6handLbl,ui->a6TakenLbl,ui->takenByLbla6,ui->a6Btn);
    updateParkingSpot(a7,ui->a7handLbl,ui->a7TakenLbl,ui->takenByLbla7,ui->a7Btn);
    updateParkingSpot(a8,ui->a8handLbl,ui->a8TakenLbl,ui->takenByLbla8,ui->a8Btn);
    updateParkingSpot(a9,ui->a9handLbl,ui->a9TakenLbl,ui->takenByLbla9,ui->a9Btn);
    updateParkingSpot(a10,ui->a10handLbl,ui->a10TakenLbl,ui->takenByLbla10,ui->a10Btn);
    updateParkingSpot(a11,ui->a11handLbl,ui->a11TakenLbl,ui->takenByLbla11,ui->a11Btn);
    updateParkingSpot(a12,ui->a12handLbl,ui->a12TakenLbl,ui->takenByLbla12,ui->a12Btn);
    updateParkingSpot(a13,ui->a13handLbl,ui->a13TakenLbl,ui->takenByLbla13,ui->a13Btn);
    updateParkingSpot(a14,ui->a14handLbl,ui->a14TakenLbl,ui->takenByLbla14,ui->a14Btn);

    updateParkingSpot(b3,ui->b3handLbl,ui->b3TakenLbl,ui->takenByLblb3,ui->b3Btn);
    updateParkingSpot(b4,ui->b4handLbl,ui->b4TakenLbl,ui->takenByLblb4,ui->b4Btn);
    updateParkingSpot(b5,ui->b5handLbl,ui->b5TakenLbl,ui->takenByLblb5,ui->b5Btn);
    updateParkingSpot(b6,ui->b6handLbl,ui->b6TakenLbl,ui->takenByLblb6,ui->b6Btn);
    updateParkingSpot(b7,ui->b7handLbl,ui->b7TakenLbl,ui->takenByLblb7,ui->b7Btn);
    updateParkingSpot(b8,ui->b8handLbl,ui->b8TakenLbl,ui->takenByLblb8,ui->b8Btn);
    updateParkingSpot(b9,ui->b9handLbl,ui->b9TakenLbl,ui->takenByLblb9,ui->b9Btn);
    updateParkingSpot(b10,ui->b10handLbl,ui->b10TakenLbl,ui->takenByLblb10,ui->b10Btn);
    updateParkingSpot(b11,ui->b11handLbl,ui->b11TakenLbl,ui->takenByLblb11,ui->b11Btn);
    updateParkingSpot(b12,ui->b12handLbl,ui->b12TakenLbl,ui->takenByLblb12,ui->b12Btn);
    updateParkingSpot(b13,ui->b13handLbl,ui->b13TakenLbl,ui->takenByLblb13,ui->b13Btn);
    updateParkingSpot(b14,ui->b14handLbl,ui->b14TakenLbl,ui->takenByLblb14,ui->b14Btn);

    updateParkingSpot(c3,ui->c3handLbl,ui->c3TakenLbl,ui->takenByLblc3,ui->c3Btn);
    updateParkingSpot(c4,ui->c4handLbl,ui->c4TakenLbl,ui->takenByLblc4,ui->c4Btn);
    updateParkingSpot(c5,ui->c5handLbl,ui->c5TakenLbl,ui->takenByLblc5,ui->c5Btn);
    updateParkingSpot(c6,ui->c6handLbl,ui->c6TakenLbl,ui->takenByLblc6,ui->c6Btn);
    updateParkingSpot(c7,ui->c7handLbl,ui->c7TakenLbl,ui->takenByLblc7,ui->c7Btn);
    updateParkingSpot(c8,ui->c8handLbl,ui->c8TakenLbl,ui->takenByLblc8,ui->c8Btn);
    updateParkingSpot(c9,ui->c9handLbl,ui->c9TakenLbl,ui->takenByLblc9,ui->c9Btn);
    updateParkingSpot(c10,ui->c10handLbl,ui->c10TakenLbl,ui->takenByLblc10,ui->c10Btn);
    updateParkingSpot(c11,ui->c11handLbl,ui->c11TakenLbl,ui->takenByLblc11,ui->c11Btn);
    updateParkingSpot(c12,ui->c12handLbl,ui->c12TakenLbl,ui->takenByLblc12,ui->c12Btn);
    updateParkingSpot(c13,ui->c13handLbl,ui->c13TakenLbl,ui->takenByLblc13,ui->c13Btn);
    updateParkingSpot(c14,ui->c14handLbl,ui->c14TakenLbl,ui->takenByLblc14,ui->c14Btn);

    updateParkingSpot(h1,ui->h1handLbl,ui->h1TakenLbl,ui->takenByLblh1,ui->h1Btn);
    updateParkingSpot(h2,ui->h2handLbl,ui->h2TakenLbl,ui->takenByLblh2,ui->h2Btn);
    updateParkingSpot(h3,ui->h3handLbl,ui->h3TakenLbl,ui->takenByLblh3,ui->h3Btn);
    updateParkingSpot(h4,ui->h4handLbl,ui->h4TakenLbl,ui->takenByLblh4,ui->h4Btn);
    updateParkingSpot(h5,ui->h5handLbl,ui->h5TakenLbl,ui->takenByLblh5,ui->h5Btn);
    updateParkingSpot(h6,ui->h6handLbl,ui->h6TakenLbl,ui->takenByLblh6,ui->h6Btn);
    updateParkingSpot(h7,ui->h7handLbl,ui->h7TakenLbl,ui->takenByLblh7,ui->h7Btn);
    updateParkingSpot(h8,ui->h8handLbl,ui->h8TakenLbl,ui->takenByLblh8,ui->h8Btn);
    updateParkingSpot(h9,ui->h9handLbl,ui->h9TakenLbl,ui->takenByLblh9,ui->h9Btn);
    updateParkingSpot(h10,ui->h10handLbl,ui->h10TakenLbl,ui->takenByLblh10,ui->h10Btn);
    updateParkingSpot(h11,ui->h11handLbl,ui->h11TakenLbl,ui->takenByLblh11,ui->h11Btn);
    updateParkingSpot(h12,ui->h12handLbl,ui->h12TakenLbl,ui->takenByLblh12,ui->h12Btn);
    updateParkingSpot(h13,ui->h13handLbl,ui->h13TakenLbl,ui->takenByLblh13,ui->h13Btn);
    updateParkingSpot(h14,ui->h14handLbl,ui->h14TakenLbl,ui->takenByLblh14,ui->h14Btn);






    if (handicapped){ui->userhnd->setText("Status: Handicapped\n");} else {ui->userhnd->setText("Status: Not Handicapped");}
    ui->usrcar->setText("Parking for: "+carNumber+"\nCurrent Time: "+QTime::currentTime().toString());
}

carEnterWindow::~carEnterWindow()
{
    delete ui;
}

void carEnterWindow::on_carEnterWindow_accepted() // THIS FUNCTION DOES NOTHING AND SHOULD BE REMOVED AND I HAVE NO IDEA HOW
{

}


void carEnterWindow::on_a1Btn_clicked() // THIS FUNCTION DOES NOTHING AND SHOULD BE REMOVED AND I HAVE NO IDEA HOW
{
    //QString SpotName="u1";
    //u1.startTime=QTime::currentTime();
    //QString test = "Confirm Parking for Car "+ carNumber +"at Parking Spot "+SpotName+"at time " ;
    /*QMessageBox::StandardButton replyy;
    replyy = QMessageBox::question(this, "Parking", "Are you Handicapped?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (replyy == QMessageBox::Yes) {
      handicapped = true ;
    } else {
      handicapped = false ;
    }
    carEnterWindow::close();*/
}


void carEnterWindow::on_a1Btn_pressed()
{

    startParkingSession(a1ptr,this);

    carEnterWindow::close();
}


void carEnterWindow::on_a2Btn_pressed()
{
    startParkingSession(a2ptr,this);

    carEnterWindow::close();
}


void carEnterWindow::on_h1Btn_pressed()
{
    startParkingSession(h1ptr,this);

    carEnterWindow::close();
}

void carEnterWindow::on_h2Btn_pressed()
{
    startParkingSession(h2ptr,this);

    carEnterWindow::close();
}

void carEnterWindow::on_b1Btn_pressed()
{
    startParkingSession(b1ptr,this);

    carEnterWindow::close();
}

void carEnterWindow::on_b2Btn_pressed()
{
    startParkingSession(b2ptr,this);

    carEnterWindow::close();
}


void carEnterWindow::on_a3Btn_pressed()
{
    startParkingSession(a3ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a4Btn_pressed()
{
    startParkingSession(a4ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a5Btn_pressed()
{
    startParkingSession(a5ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a6Btn_pressed()
{
    startParkingSession(a6ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a7Btn_pressed()
{
    startParkingSession(a7ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a8Btn_pressed()
{
    startParkingSession(a8ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a9Btn_pressed()
{
    startParkingSession(a9ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a10Btn_pressed()
{
    startParkingSession(a10ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a11Btn_pressed()
{
    startParkingSession(a11ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a12Btn_pressed()
{
    startParkingSession(a12ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a13Btn_pressed()
{
    startParkingSession(a13ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_a14Btn_pressed()
{
    startParkingSession(a14ptr,this);

    carEnterWindow::close();
}

void carEnterWindow::on_b3Btn_pressed()
{
    startParkingSession(b3ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b4Btn_pressed()
{
    startParkingSession(b4ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b5Btn_pressed()
{
    startParkingSession(b5ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b6Btn_pressed()
{
    startParkingSession(b6ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b7Btn_pressed()
{
    startParkingSession(b7ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b8Btn_pressed()
{
    startParkingSession(b8ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b9Btn_pressed()
{
    startParkingSession(b9ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b10Btn_pressed()
{
    startParkingSession(b10ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b11Btn_pressed()
{
    startParkingSession(b11ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b12Btn_pressed()
{
    startParkingSession(b12ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b13Btn_pressed()
{
    startParkingSession(b13ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_b14Btn_pressed()
{
    startParkingSession(b14ptr,this);

    carEnterWindow::close();
}

void carEnterWindow::on_c1Btn_pressed()
{
    startParkingSession(c1ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c2Btn_pressed()
{
    startParkingSession(c2ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c3Btn_pressed()
{
    startParkingSession(a3ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c4Btn_pressed()
{
    startParkingSession(c4ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c5Btn_pressed()
{
    startParkingSession(c5ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c6Btn_pressed()
{
    startParkingSession(c6ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c7Btn_pressed()
{
    startParkingSession(c7ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c8Btn_pressed()
{
    startParkingSession(c8ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c9Btn_pressed()
{
    startParkingSession(c9ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c10Btn_pressed()
{
    startParkingSession(c10ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c11Btn_pressed()
{
    startParkingSession(c11ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c12Btn_pressed()
{
    startParkingSession(c12ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c13Btn_pressed()
{
    startParkingSession(c13ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_c14Btn_pressed()
{
    startParkingSession(c14ptr,this);

    carEnterWindow::close();
}

void carEnterWindow::on_h3Btn_pressed()
{
    startParkingSession(h3ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h4Btn_pressed()
{
    startParkingSession(h4ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h5Btn_pressed()
{
    startParkingSession(h5ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h6Btn_pressed()
{
    startParkingSession(h6ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h7Btn_pressed()
{
    startParkingSession(h7ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h8Btn_pressed()
{
    startParkingSession(h8ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h9Btn_pressed()
{
    startParkingSession(h9ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h10Btn_pressed()
{
    startParkingSession(h10ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h11Btn_pressed()
{
    startParkingSession(h11ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h12Btn_pressed()
{
    startParkingSession(h12ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h13Btn_pressed()
{
    startParkingSession(h13ptr,this);

    carEnterWindow::close();
}
void carEnterWindow::on_h14Btn_pressed()
{
    startParkingSession(h14ptr,this);

    carEnterWindow::close();
}
