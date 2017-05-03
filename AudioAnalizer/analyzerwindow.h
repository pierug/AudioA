#ifndef ANALYZERWINDOW_H
#define ANALYZERWINDOW_H

#include <QWidget>
#include <QSound>
#include <QMediaPlayer>
#include <QAudioProbe>

#include <QDebug>

#include <QFile>

namespace Ui {
class AnalyzerWindow;
}

class AnalyzerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AnalyzerWindow(QString fileName,QWidget *parent = 0);
    ~AnalyzerWindow();

public slots:
    //void handleStateChanged(QAudio::State newState);
private slots:
    void on_playBtn_clicked();

    void on_pauseBtn_clicked();

    void on_positionSlider_sliderMoved(int position);

    void on_volumneSlider_sliderMoved(int position);

    void on_durationChanged(qint64 position);

    void on_positionChanged(qint64 position);

private:
    Ui::AnalyzerWindow *ui;
    QSound *sound;
    QFile sourceFile;
    QMediaPlayer* player;
    QString filePath;
    QAudioProbe *probe;
    //QAudioOutput* audio;
};

#endif // ANALYZERWINDOW_H
