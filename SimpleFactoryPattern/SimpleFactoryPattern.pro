TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    candymachine.cpp \
    candy.cpp \
    toffee.cpp \
    hardcandy.cpp \
    softsweets.cpp \
    crispcandy.cpp

HEADERS += \
    candymachine.h \
    candy.h \
    toffee.h \
    hardcandy.h \
    softsweets.h \
    crispcandy.h
