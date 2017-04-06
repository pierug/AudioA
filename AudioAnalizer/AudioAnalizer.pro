#-------------------------------------------------
#
# Project created by QtCreator 2017-02-12T11:05:21
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

TARGET = AudioAnalizer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    analyzerwindow.cpp

HEADERS  += mainwindow.h \
    analyzerwindow.h

FORMS    += mainwindow.ui \
    analyzerwindow.ui
