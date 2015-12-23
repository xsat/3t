#-------------------------------------------------
#
# Project created by QtCreator 2015-12-06T21:29:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 3t
TEMPLATE = app


SOURCES += main.cpp\
        game.cpp \
    menu.cpp \
    window.cpp \
    block.cpp \
    button.cpp \
    exit.cpp \
    new.cpp \
    item.cpp \
    player.cpp

HEADERS  += game.h \
    menu.h \
    window.h \
    block.h \
    button.h \
    exit.h \
    new.h \
    item.h \
    player.h

RESOURCES += \
    images.qrc
