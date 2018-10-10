TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    mallardduck.cpp

SUBDIRS += \
    StrategyPattern.pro

DISTFILES +=

HEADERS += \
    duck.h \
    flybehavior.h \
    flynoway.h \
    flywithwings.h \
    mallardduck.h \
    quack.h \
    quackbehavior.h \
    squeak.h
