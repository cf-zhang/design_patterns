TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    dough.cpp \
    thincrustdough.cpp \
    sauce.cpp \
    marinarasauce.cpp \
    cheese.cpp \
    reggianocheese.cpp \
    nypizzaingredientfactory.cpp \
    pizza.cpp \
    cheesepizza.cpp \
    nyppizzastore.cpp \
    pizzastore.cpp

HEADERS += \
    dough.h \
    thincrustdough.h \
    sauce.h \
    marinarasauce.h \
    cheese.h \
    reggianocheese.h \
    pizzaingredientfactory.h \
    nypizzaingredientfactory.h \
    pizza.h \
    cheesepizza.h \
    nyppizzastore.h \
    pizzastore.h
