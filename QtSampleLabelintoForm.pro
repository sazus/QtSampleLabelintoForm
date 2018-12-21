load(qt_build_config)
################################################################################
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSampleLabelintoForm
TEMPLATE = app

CONFIG += c++11
################################################################################

INCLUDEPATH += src
DEPENDPATH  += src

SOURCES += \
    main.cpp \
    $$PWD/src/mainwindow.cpp

HEADERS += \
    $$PWD/src/mainwindow.h

FORMS += \
    $$PWD/ui/mainwindow.ui

OTHER_FILES += \
    $$PWD/README.md
