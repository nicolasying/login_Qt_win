#-------------------------------------------------
#
# Project created by QtCreator 2016-10-14T09:38:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = login
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp

HEADERS  += mainwindow.h \
    logindialog.h

FORMS    += mainwindow.ui \
    logindialog.ui

RC_FILE += \
    ico.rc

DISTFILES += \
    Nicolas.ico \
    ico.rc


