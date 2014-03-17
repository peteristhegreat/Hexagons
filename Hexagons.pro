#-------------------------------------------------
#
# Project created by QtCreator 2014-03-16T20:20:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Hexagons
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    graphicsscene.cpp \
    boardhexagon.cpp \
    draggablepiece.cpp

HEADERS  += widget.h \
    graphicsscene.h \
    boardhexagon.h \
    draggablepiece.h
