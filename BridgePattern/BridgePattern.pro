TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    rcatv.cpp \
    sonytv.cpp \
    remotecontrol.cpp \
    concreteremote.cpp \
    tv.cpp

HEADERS += \
    rcatv.h \
    sonytv.h \
    remotecontrol.h \
    concreteremote.h \
    tv.h
