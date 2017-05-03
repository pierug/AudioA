/********************************************************************************
** Form generated from reading UI file 'analyzerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYZERWINDOW_H
#define UI_ANALYZERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
            AnalyzerWindow->setObjectName(QStringLiteral("AnalyzerWindow"));
        AnalyzerWindow->resize(400, 300);
        horizontalLayoutWidget = new QWidget(AnalyzerWindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 391, 141));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        volumneSlider = new QSlider(horizontalLayoutWidget);
        volumneSlider->setObjectName(QStringLiteral("volumneSlider"));
        volumneSlider->setValue(99);
        volumneSlider->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(volumneSlider);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        playBtn = new QPushButton(horizontalLayoutWidget);
        playBtn->setObjectName(QStringLiteral("playBtn"));

        horizontalLayout->addWidget(playBtn);

        pauseBtn = new QPushButton(horizontalLayoutWidget);
        pauseBtn->setObjectName(QStringLiteral("pauseBtn"));

        horizontalLayout->addWidget(pauseBtn);

        positionSlider = new QSlider(horizontalLayoutWidget);
        positionSlider->setObjectName(QStringLiteral("positionSlider"));
        positionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(positionSlider);

        positionLabel = new QLabel(horizontalLayoutWidget);
        positionLabel->setObjectName(QStringLiteral("positionLabel"));

        horizontalLayout->addWidget(positionLabel);


        retranslateUi(AnalyzerWindow);

        QMetaObject::connectSlotsByName(AnalyzerWindow);
    } // setupUi

    void retranslateUi(QWidget *AnalyzerWindow)
    {
        AnalyzerWindow->setWindowTitle(QApplication::translate("AnalyzerWindow", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AnalyzerWindow", "Volume", Q_NULLPTR));
        playBtn->setText(QApplication::translate("AnalyzerWindow", "Play", Q_NULLPTR));
        pauseBtn->setText(QApplication::translate("AnalyzerWindow", "Pause", Q_NULLPTR));
        positionLabel->setText(QApplication::translate("AnalyzerWindow", "Progress", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnalyzerWindow: public Ui_AnalyzerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYZERWINDOW_H
