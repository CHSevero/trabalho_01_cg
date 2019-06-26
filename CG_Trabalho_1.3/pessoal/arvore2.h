#ifndef ARVORE2_H
#define ARVORE2_H

#include <objeto.h>
#include "losangulo.h"

class Arvore2 : public Objeto
{
public:
    Model3DS* model;
    Losangulo *l = new Losangulo();
public:
    Arvore2();
    void desenha();
};

#endif // ARVORE2_H
