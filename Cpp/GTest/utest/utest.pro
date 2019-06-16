TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ClassATest.cpp \
    ../app/classa.cpp

#INCLUDEPATH += /media/Dokumenty/Moje Programy/Narzędzia/GTest/googletest-release-1.8.1/googletest/include/

DISTFILES +=

LIBS += -lgtest_main -lgtest -lpthread
