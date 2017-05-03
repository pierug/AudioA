#include "analyzerwindow.h"
#include "ui_analyzerwindow.h"
#include <QTime>
#include <QDebug>
#include <QtMultimedia/QSound>
#include <QtMultimedia/QAudioProbe>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QMediaAudioProbeControl>

AnalyzerWindow::AnalyzerWindow(QString fileName,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnalyzerWindow)
{

    ui->setupUi(this);
    player = new QMediaPlayer(this);
    filePath = "punk.wav";//fileName;

    player->setMedia(QUrl::fromLocalFile(filePath));
    qDebug() << filePath;
    connect(player, &QMediaPlayer::positionChanged, this, &AnalyzerWindow::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &AnalyzerWindow::on_durationChanged);
    probe = new QAudioProbe;

    connect(probe, SIGNAL(audioBufferProbed(QAudioBuffer)),
            this, SLOT(processBuffer(QAudioBuffer)));
    if(!probe->setSource(player))
        qDebug() << "Source for AudioProbe not set!";

}

AnalyzerWindow::AnalyzerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnalyzerWindow)
{
    ui->setupUi(this);

}
AnalyzerWindow::~AnalyzerWindow()
{
    delete ui;
}

void AnalyzerWindow::on_playBtn_clicked()
{
    qDebug() << filePath;
    player->setMedia(QUrl::fromLocalFile(filePath));
    player->play();
    qDebug()<<player->errorString();
}

void AnalyzerWindow::on_pauseBtn_clicked()
{
    player->stop();
}


void AnalyzerWindow::on_positionSlider_sliderMoved(int position)
{
    player->setPosition(position);

}

void AnalyzerWindow::on_volumneSlider_sliderMoved(int position)
{
    player->setVolume(position);
}

void AnalyzerWindow::on_durationChanged(qint64 position)
{
    ui->positionSlider->setMaximum(position);
}

void AnalyzerWindow::on_positionChanged(qint64 position)
{
    ui->positionSlider->setValue(position);
}
