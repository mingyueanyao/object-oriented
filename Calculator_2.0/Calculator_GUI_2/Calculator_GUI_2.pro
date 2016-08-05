#-------------------------------------------------
#
# Project created by QtCreator 2016-08-02T11:20:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator_GUI_2
TEMPLATE = app


SOURCES += main.cpp \
    calculator.cpp \
    printer.cpp \
    scaner.cpp \
    calculation.cpp \
    fileiodialog.cpp

HEADERS  += \
    calculator.h \
    printer.h \
    scaner.h \
    calculation.h \
    fileiodialog.h

FORMS    += \
    calculator.ui \
    fileiodialog.ui
