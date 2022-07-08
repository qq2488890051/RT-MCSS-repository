#-------------------------------------------------
#
# Project created by QtCreator 2022-05-13T23:54:02
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = RT-MCSS
TEMPLATE = app


SOURCES += main.cpp\
    lib/qcustomplot.cpp \
    Sched/mainwindow.cpp \
    Sched/sheduler.cpp \
    tool/toolvs.cpp \
    Sched/dialogabout.cpp \
    Sched/dialoghelp.cpp


FORMS += \
    Sched/mainwindow.ui \
    Sched/dialogabout.ui \
    Sched/dialoghelp.ui

DISTFILES += \
    desktop.ico \
    tmp

RC_ICONS = desktop.ico

HEADERS += \
    lib/qcustomplot.h \
    Sched/mainwindow.h \
    Sched/sheduler.h \
    Sched/dialogabout.h \
    Sched/dialoghelp.h



