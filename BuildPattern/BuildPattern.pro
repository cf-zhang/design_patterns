TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    meal.cpp \
    kfcwaiter.cpp \
    mealbuilder.cpp \
    submealbuildera.cpp \
    submealbuilderb.cpp

HEADERS += \
    meal.h \
    kfcwaiter.h \
    mealbuilder.h \
    submealbuildera.h \
    submealbuilderb.h
