#ifndef ANALYZERWINDOW_H
#define ANALYZERWINDOW_H

#include <QWidget>

namespace Ui {
class AnalyzerWindow;
}

class AnalyzerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AnalyzerWindow(QWidget *parent = 0);
    ~AnalyzerWindow();

private:
    Ui::AnalyzerWindow *ui;
};

#endif // ANALYZERWINDOW_H
