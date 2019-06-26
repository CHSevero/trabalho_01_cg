#ifndef CATAVENTO_H
#define CATAVENTO_H

#include <objeto.h>
#include <cubo.h>

class CataVento : public Objeto
{
public:
    int r = 0;
    Cubo * c = new Cubo();
    CataVento();
    void desenha();
};

#endif // CATAVENTO_H
