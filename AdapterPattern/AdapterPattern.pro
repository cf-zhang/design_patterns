TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    mallardduck.cpp \
    wildturkey.cpp \
    turkeyadapter.cpp

HEADERS += \
    duck.h \
    mallardduck.h \
    turkey.h \
    wildturkey.h \
    turkeyadapter.h
