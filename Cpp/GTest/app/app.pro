TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    classa.cpp \
    classtofake.cpp \
    classtomock.cpp \
    classtotest.cpp

HEADERS += \
    classa.h \
    classtofake.h \
    classtomock.h \
    classtotest.h
