QT += core
QT -= gui

CONFIG += c++11

TARGET = Pilhas
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    jogador.cpp \
    pilhatorres.cpp \
    node.cpp \
    filajogador.cpp

HEADERS += \
    jogador.h \
    pilhatorres.h \
    node.h \
    filajogador.h
