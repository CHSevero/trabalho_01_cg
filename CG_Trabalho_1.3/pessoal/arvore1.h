#ifndef ARVORE1_H
#define ARVORE1_H

#include <objeto.h>
#include <losangulo.h>
#include <cubo.h>

class Arvore1 : public Objeto
{
public:


public:
    Cubo *c = new Cubo();
    Losangulo *l = new Losangulo();
    Arvore1();
    void desenha();
};

#endif // ARVORE1_H
