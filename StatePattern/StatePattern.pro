TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    robotfollowstate.cpp \
    robotnavistate.cpp \
    robotstandbystate.cpp \
    xrobot.cpp

HEADERS += \
    robotstate.h \
    robotfollowstate.h \
    robotnavistate.h \
    robotstandbystate.h \
    xrobot.h
