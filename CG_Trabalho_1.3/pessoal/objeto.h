#ifndef OBJETO_H
#define OBJETO_H

#include <gui.h>

class Objeto
{
public:
    Vetor3D t = Vetor3D(0,0,0);
    Vetor3D a = Vetor3D(0,0,0);
    Vetor3D s = Vetor3D(1,1,1);
    bool origem = false;
    bool sombra = true;
    bool selecionado = false;
    bool inicio = true;

    int ti;
    int tipo;

public:

    Objeto();
    virtual void desenha();;
};

#endif // OBJETO_H
