TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += bib
INCLUDEPATH += gui_glut
INCLUDEPATH += pessoal

LIBS += -lGL -lGLU -lglut -l3ds -lSDL_image

SOURCES += main.cpp \
    bib/Camera.cpp \
    bib/CameraDistante.cpp \
    bib/CameraJogo.cpp \
    bib/Desenha.cpp \
    bib/model3ds.cpp \
    bib/Vetor3D.cpp \
    gui_glut/extra.cpp \
    gui_glut/gui.cpp \
    pessoal/objeto.cpp \
    pessoal/quadrado.cpp \
    pessoal/cubo.cpp \
    pessoal/pessoa.cpp \
    pessoal/casa.cpp \
    pessoal/tresangulos.cpp \
    pessoal/flor.cpp \
    pessoal/terreno.cpp \
    pessoal/cachorro.cpp \
    pessoal/cavalo.cpp \
    pessoal/passaro.cpp \
    pessoal/arvore1.cpp \
    pessoal/arvore2.cpp \
    pessoal/losangulo.cpp \
    pessoal/bird.cpp \
    pessoal/catavento.cpp

HEADERS += \
    bib/Camera.h \
    bib/CameraDistante.h \
    bib/CameraJogo.h \
    bib/Desenha.h \
    bib/model3ds.h \
    bib/Vetor3D.h \
    gui_glut/extra.h \
    gui_glut/gui.h \
    pessoal/objeto.h \
    pessoal/quadrado.h \
    pessoal/cubo.h \
    pessoal/pessoa.h \
    pessoal/casa.h \
    pessoal/tresangulos.h \
    pessoal/flor.h \
    pessoal/terreno.h \
    pessoal/cachorro.h \
    pessoal/cavalo.h \
    pessoal/passaro.h \
    pessoal/arvore1.h \
    pessoal/arvore2.h \
    pessoal/losangulo.h \
    pessoal/bird.h \
    pessoal/catavento.h
