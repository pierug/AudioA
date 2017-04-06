#include "mainwindow.h"
#include <QApplication>
#include "analyzerwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    AnalyzerWindow *az = new AnalyzerWindow("dupa.wav");
    az->show();
    return a.exec();
}
