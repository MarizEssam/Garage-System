#include "mainwindow.h"

#include <QApplication>
#include "globalvars.h"

QString carNumber;
bool handicapped;
    Spot h1("h1",true);
    Spot h2("h2",true);
    Spot h3("h3",true);
    Spot h4("h4",true);
    Spot h5("h5",true);
    Spot h6("h6",true);
    Spot h7("h7",true);
    Spot h8("h8",true);
    Spot h9("h9",true);
    Spot h10("h10",true);
    Spot h11("h11",true);
    Spot h12("h12",true);
    Spot h13("h13",true);
    Spot h14("h14",true);

    Spot a1("a1",false);
    Spot a2("a2",false);
    Spot b1("b1",false);
    Spot b2("b2",false);

    Spot a3("a3",false);
    Spot a4("a4",false);
    Spot a5("a5",false);
    Spot a6("a6",false);
    Spot a7("a7",false);
    Spot a8("a8",false);
    Spot a9("a9",false);
    Spot a10("a10",false);
    Spot a11("a11",false);
    Spot a12("a12",false);
    Spot a13("a13",false);
    Spot a14("a14",false);

    Spot b3("b3",false);
    Spot b4("b4",false);
    Spot b5("b5",false);
    Spot b6("b6",false);
    Spot b7("b7",false);
    Spot b8("b8",false);
    Spot b9("b9",false);
    Spot b10("b10",false);
    Spot b11("b11",false);
    Spot b12("b12",false);
    Spot b13("b13",false);
    Spot b14("b14",false);

    Spot c1("c1",false);
    Spot c2("c2",false);
    Spot c3("c3",false);
    Spot c4("c4",false);
    Spot c5("c5",false);
    Spot c6("c6",false);
    Spot c7("c7",false);
    Spot c8("c8",false);
    Spot c9("c9",false);
    Spot c10("c10",false);
    Spot c11("c11",false);
    Spot c12("c12",false);
    Spot c13("c13",false);
    Spot c14("c14",false);

    Spot* a1ptr = &a1;
    Spot* a2ptr = &a2;
    Spot* b1ptr = &b1;
    Spot* b2ptr = &b2;
    Spot* h1ptr = &h1;
    Spot* h2ptr = &h2;
    Spot* h3ptr = &h3;
    Spot* h4ptr = &h4;
    Spot* h5ptr = &h5;
    Spot* h6ptr = &h6;
    Spot* h7ptr = &h7;
    Spot* h8ptr = &h8;
    Spot* h9ptr = &h9;
    Spot* h10ptr = &h10;
    Spot* h11ptr = &h11;
    Spot* h12ptr = &h12;
    Spot* h13ptr = &h13;
    Spot* h14ptr = &h14;

     Spot* a3ptr = &a3;
     Spot* a4ptr = &a4;
     Spot* a5ptr = &a5;
     Spot* a6ptr = &a6;
     Spot* a7ptr = &a7;
     Spot* a8ptr = &a8;
     Spot* a9ptr = &a9;
     Spot* a10ptr = &a10;
     Spot* a11ptr = &a11;
     Spot* a12ptr = &a12;
     Spot* a13ptr = &a13;
     Spot* a14ptr = &a14;

     Spot* b3ptr = &b3;
     Spot* b4ptr = &b4;
     Spot* b5ptr = &b5;
     Spot* b6ptr = &b6;
     Spot* b7ptr = &b7;
     Spot* b8ptr = &b8;
     Spot* b9ptr = &b9;
     Spot* b10ptr = &b10;
     Spot* b11ptr = &b11;
     Spot* b12ptr = &b12;
     Spot* b13ptr = &b13;
     Spot* b14ptr = &b14;

     Spot* c1ptr = &c1;
     Spot* c2ptr = &c2;
     Spot* c3ptr = &c3;
     Spot* c4ptr = &c4;
     Spot* c5ptr = &c5;
     Spot* c6ptr = &c6;
     Spot* c7ptr = &c7;
     Spot* c8ptr = &c8;
     Spot* c9ptr = &c9;
     Spot* c10ptr = &c10;
     Spot* c11ptr = &c11;
     Spot* c12ptr = &c12;
     Spot* c13ptr = &c13;
     Spot* c14ptr = &c14;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
     //variables definition below
    return a.exec();


}
