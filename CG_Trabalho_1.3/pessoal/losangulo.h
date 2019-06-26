#ifndef LOSANGULO_H
#define LOSANGULO_H

#include <objeto.h>
#include "tresangulos.h"

class Losangulo : public Objeto
{
public:
    TresAngulos *t = new TresAngulos();
    Losangulo();
    void desenha();
};

#endif // LOSANGULO_H
