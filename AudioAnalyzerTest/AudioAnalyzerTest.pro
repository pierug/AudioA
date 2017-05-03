QT       += testlib
QT += multimedia \
      multimediawidgets \


QT       -= gui

CONFIG += c++11

TARGET = AudioAnalyzerTest
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    wavefiletest.cpp \
    \
../AudioAnalyzer/wavefile.cpp
DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    wavefiletest.h \
    \
../AudioAnalyzer/wavefile.h
