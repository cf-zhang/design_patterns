TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    computer.cpp \
    light.cpp \
    cup.cpp \
    workerfacade.cpp

HEADERS += \
    computer.h \
    light.h \
    cup.h \
    workerfacade.h
