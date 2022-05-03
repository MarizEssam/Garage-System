#include "mainwindow.h"
#include <QMessageBox>
#include "carleavewindow.h"
#include "./ui_mainwindow.h"
#include "carenterwindow.h"
#include "globalvars.h"
#include <QInputDialog>
Spot* SpotArray[]={a1ptr,a2ptr,h1ptr,h2ptr,b1ptr,b2ptr,
                  a3ptr,a4ptr,a5ptr,a6ptr,a7ptr,a8ptr,a9ptr,a10ptr,a11ptr,a12ptr,a13ptr,a14ptr
                  ,b3ptr,b4ptr,b5ptr,b6ptr,b7ptr,b8ptr,b9ptr,b10ptr,b11ptr,b12ptr,b13ptr,b14ptr
                  ,c3ptr,c4ptr,c5ptr,c6ptr,c7ptr,c8ptr,c9ptr,c10ptr,c11ptr,c12ptr,c13ptr,c14ptr,
                   h3ptr,h4ptr,h5ptr,h6ptr,h7ptr,h8ptr,h9ptr,h10ptr,h11ptr,h12ptr,h13ptr,h14ptr,c1ptr,c2ptr};

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

void getName(QWidget *parent,QString message){
    bool ok =false ;
    QString text = QInputDialog::getText(parent, "Parking",
                                         (message),QLineEdit::Normal,"",
                                         &ok);
    if(ok){
    for(int i =0;i<56;i++){
        if(text==SpotArray[i]->takenBy){
            getName(parent,"Name already taken!, Choose Another:");
            return;
        }
    }
    if(text != ""){

    carNumber = text;
    carEnterWindow carEnterWindow;
    carEnterWindow.setModal(true);
    carEnterWindow.exec();
    return;}
    else {
            getName(parent,"Please enter a Name !!");
            return;
        }}
}
void MainWindow::on_carEnterBtn_clicked()                       // TODO: CREATE FUNCTION TO OPEN WINDOW
{
    QMessageBox::StandardButton reply;
    handicapped = false;
    reply = QMessageBox::question(this, "Parking", "Are you Handicapped?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      handicapped = true ;
      getName(this, "Enter Name: ");
    } else if (reply == QMessageBox::No){
      handicapped = false ;
      getName(this, "Enter Name: ");
    }

}


void MainWindow::on_carLeaveBtn_pressed()
{
    carLeaveWindow carLeaveWindow;
    carLeaveWindow.setModal(true);
    carLeaveWindow.exec();
}

