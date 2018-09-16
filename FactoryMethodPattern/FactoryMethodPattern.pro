TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
SOURCES += main.cpp \
    pizza.cpp \
    chinesepizza.cpp \
    greekpizza.cpp \
    pepperonipizza.cpp \
    pizzastore.cpp \
    nyppizzastore.cpp

HEADERS += \
    pizza.h \
    chinesepizza.h \
    greekpizza.h \
    pepperonipizza.h \
    pizzastore.h \
    nyppizzastore.h
