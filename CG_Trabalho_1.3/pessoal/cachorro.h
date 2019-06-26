#ifndef CACHORRO_H
#define CACHORRO_H

#include <objeto.h>
#include "cubo.h"
#include "losangulo.h"


class Cachorro : public Objeto
{
public:
    bool a = true;
    float r=45;
    Cubo *c = new Cubo();
    Losangulo *l = new Losangulo();
    Cachorro();
    void desenha();
};

#endif // CACHORRO_H
