#-------------------------------------------------
#
# Project created by QtCreator 2016-09-10T10:43:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_learn_5
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        cell.cpp \
        finddialog.cpp \
        gotocelldialog.cpp \
        sortdialog.cpp \
        spreadsheet.cpp

HEADERS  += mainwindow.h \
    cell.h \
    finddialog.h \
    gotocelldialog.h \
    sortdialog.h \
    spreadsheet.h

FORMS += \
    gotocelldialog.ui \
    sortdialog.ui

RESOURCES += \
    qt_rs.qrc
