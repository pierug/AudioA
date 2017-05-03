/********************************************************************************
** Form generated from reading UI file 'analyzerwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYZERWINDOW_H
#define UI_ANALYZERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalyzerWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSlider *volumneSlider;
    QLabel *label;
    QPushButton *playBtn;
    QPushButton *pauseBtn;
    QSlider *positionSlider;
    QLabel *positionLabel;

    void setupUi(QWidget *AnalyzerWindow)
    {
        if (AnalyzerWindow->objectName().isEmpty())
            AnalyzerWindow->setObjectName(QString::fromUtf8("AnalyzerWindow"));
        AnalyzerWindow->resize(400, 300);
        horizontalLayoutWidget = new QWidget(AnalyzerWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 391, 141));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        volumneSlider = new QSlider(horizontalLayoutWidget);
        volumneSlider->setObjectName(QString::fromUtf8("volumneSlider"));
        volumneSlider->setValue(99);
        volumneSlider->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(volumneSlider);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        playBtn = new QPushButton(horizontalLayoutWidget);
        playBtn->setObjectName(QString::fromUtf8("playBtn"));

        horizontalLayout->addWidget(playBtn);

        pauseBtn = new QPushButton(horizontalLayoutWidget);
        pauseBtn->setObjectName(QString::fromUtf8("pauseBtn"));

        horizontalLayout->addWidget(pauseBtn);

        positionSlider = new QSlider(horizontalLayoutWidget);
        positionSlider->setObjectName(QString::fromUtf8("positionSlider"));
        positionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(positionSlider);

        positionLabel = new QLabel(horizontalLayoutWidget);
        positionLabel->setObjectName(QString::fromUtf8("positionLabel"));

        horizontalLayout->addWidget(positionLabel);


        retranslateUi(AnalyzerWindow);

        QMetaObject::connectSlotsByName(AnalyzerWindow);
    } // setupUi

    void retranslateUi(QWidget *AnalyzerWindow)
    {
        AnalyzerWindow->setWindowTitle(QApplication::translate("AnalyzerWindow", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AnalyzerWindow", "Volume", 0, QApplication::UnicodeUTF8));
        playBtn->setText(QApplication::translate("AnalyzerWindow", "Play", 0, QApplication::UnicodeUTF8));
        pauseBtn->setText(QApplication::translate("AnalyzerWindow", "Pause", 0, QApplication::UnicodeUTF8));
        positionLabel->setText(QApplication::translate("AnalyzerWindow", "Progress", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AnalyzerWindow: public Ui_AnalyzerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYZERWINDOW_H
