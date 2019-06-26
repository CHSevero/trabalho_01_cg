#ifndef FLOR_H
#define FLOR_H

#include <objeto.h>
#include <cubo.h>

class Flor: public Objeto
{
public:
    Cubo *c = new Cubo();
    Flor();
    void desenha();
};

#endif // FLOR_H
