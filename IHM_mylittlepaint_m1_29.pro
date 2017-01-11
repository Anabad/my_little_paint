#-------------------------------------------------
#
# Project created by QtCreator 2015-09-25T08:40:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IHM_mylittlepaint_m1_29
TEMPLATE = app


SOURCES += main.cpp\
        view.cpp \
    model.cpp \
    control.cpp \
    canvas.cpp

HEADERS  += view.h \
    model.h \
    control.h \
    canvas.h

FORMS    += mainWindow.ui
QT += printsupport
