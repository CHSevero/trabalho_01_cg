#ifndef CASA_H
#define CASA_H
#include <objeto.h>
#include "quadrado.h"
#include "tresangulos.h"
#include "cubo.h"

class Casa : public Objeto
{
public:

    Quadrado *q = new Quadrado();
    TresAngulos *t = new TresAngulos();
    Cubo *c = new Cubo();
    Casa();
    void desenha();
};

#endif // CASA_H
