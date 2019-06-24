TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ClassATest.cpp \
    ../app/classa.cpp

DISTFILES +=

LIBS += -lgtest_main -lgtest -lpthread
