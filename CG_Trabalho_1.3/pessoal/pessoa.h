#ifndef PESSOA_H
#define PESSOA_H

#include <objeto.h>
#include "cubo.h"

class Pessoa : public Objeto
{
public:
    Cubo *c = new Cubo();
    Pessoa();
    void desenha();
};

#endif // PESSOA_H
