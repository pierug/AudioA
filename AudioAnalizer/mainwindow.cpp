#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include "analyzerwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_analyzeFileBtn_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                              tr("Open"), "","");

    AnalyzerWindow *a = new AnalyzerWindow(fileName);
    a->show();

}
