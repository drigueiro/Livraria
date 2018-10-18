TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    livro.cpp \
    impresso.cpp \
    ebook.cpp \
    audiobook.cpp

HEADERS += \
    livro.h \
    impresso.h \
    ebook.h \
    audiobook.h
