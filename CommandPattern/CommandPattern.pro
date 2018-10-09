TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    command.cpp \
    invoker.cpp \
    concretecommand.cpp \
    receiver.cpp

HEADERS += \
    command.h \
    invoker.h \
    concretecommand.h \
    receiver.h
