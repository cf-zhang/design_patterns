TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    simplepizzafactory.cpp \
    pizza.cpp \
    chinesepizza.cpp \
    greekpizza.cpp \
    pepperonipizza.cpp \
    pizzastore.cpp

HEADERS += \
    simplepizzafactory.h \
    pizza.h \
    chinesepizza.h \
    greekpizza.h \
    pepperonipizza.h \
    pizzastore.h
