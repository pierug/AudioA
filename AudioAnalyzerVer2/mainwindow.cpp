#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include "analyzerwindow.h"
#include <QtMultimedia/QMediaPlayer>
#include <QAudioOutput>
#include <QUrl>
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

    QAudioFormat format;
    // Set up the format, eg.
    format.setSampleRate(8000);
    format.setChannelCount(1);
    format.setSampleSize(8);
    format.setCodec("audio/pcm");
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setSampleType(QAudioFormat::UnSignedInt);

    QAudioOutput* out = new QAudioOutput(format);
    QFile file;
    file.setFileName("dupa.wav");
    file.open(QIODevice::ReadOnly);
    out->start(&file);
    delete out;
   //QMediaPlayer* player = new QMediaPlayer(this);
   //QString filePath = "punk.wav";//fileName;

   //player->setMedia(QUrl::fromLocalFile(filePath));
   //player->play();
   //delete player;
   // QString fileName = QFileDialog::getOpenFileName(this,
                                          //    tr("Open"), "","");

   // AnalyzerWindow *a = new AnalyzerWindow(fileName);
   // a->show();

}
