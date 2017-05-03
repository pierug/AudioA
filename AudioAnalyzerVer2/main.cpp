#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QFileDialog>
#include "analyzerwindow.h"
#include <QtMultimedia/QMediaPlayer>
#include <QAudioOutput>
#include <QUrl>
/*
class AudioOutputTest : public QObject
{
    Q_OBJECT
    public Q_SLOTS:
        void handleStateChanged(QAudio::State state) {
            qWarning() << "state = " << state;
            qApp->exit();
        }
};*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QFile sourceFile;
    QAudioOutput* audio;

    sourceFile.setFileName("punk.wav");
    sourceFile.open(QIODevice::ReadOnly);
    char z[44];
    sourceFile.read(z,44);
    for(int i=0;i<44;i++){
        qDebug()<<"i: "<<i<<" : "<<(u_int8_t)z[i]<<" : "<<z[i];
    }
    QAudioFormat format;
       // Set up the format, eg.
    format.setSampleRate(11025);
    format.setChannelCount(1);
    format.setSampleSize(8);
    format.setCodec("audio/pcm");
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setSampleType(QAudioFormat::UnSignedInt);

    QAudioDeviceInfo info(QAudioDeviceInfo::defaultOutputDevice());
    if (!info.isFormatSupported(format)) {
        qWarning() << "Raw audio format not supported by backend, cannot play audio.";
        return 1;
    }

    audio = new QAudioOutput(format, &a);
   // AudioOutputTest audioOutputTest;
    //QObject::connect(audio, SIGNAL(stateChanged(QAudio::State)), &audioOutputTest, SLOT(handleStateChanged(QAudio::State)));
  //  audio->start(&sourceFile);

    return a.exec();
}
