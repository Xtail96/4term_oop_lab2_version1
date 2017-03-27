TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    shape.cpp \
    arc.cpp \
    ellipse.cpp \
    round.cpp

HEADERS += \
    shape.h \
    point.h \
    arc.h \
    ellipse.h \
    round.h
