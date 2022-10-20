TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        TestAlveoles.cpp \
        TestRouleau.cpp \
        TestSTock.cpp \
        alveoleslibres.cpp \
        chariot.cpp \
        magasins.cpp \
        main.cpp \
        menu.cpp \
        rouleau.cpp \
        stock.cpp

HEADERS += \
    alveoleslibres.h \
    chariot.h \
    magasins.h \
    menu.h \
    rouleau.h \
    stock.h

DISTFILES += \
    Alveoles.txt \
    menu.txt \
    stock.txt
