QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = prac5
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Esfera.cpp \
    Obstaculo.cpp \
    Plataforma.cpp \
    Extra.cpp

HEADERS  += mainwindow.h \
    Esfera.h \
    Obstaculo.h \
    Plataforma.h \
    Extra.h

FORMS    += mainwindow.ui

RESOURCES += \
    imagenes.qrc
