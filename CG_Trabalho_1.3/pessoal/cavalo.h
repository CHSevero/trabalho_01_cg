#ifndef CAVALO_H
#define CAVALO_H

#include <objeto.h>

class Cavalo : public Objeto
{
public:
    Model3DS* model;

public:
    Cavalo();
    void desenha();
};

#endif // CAVALO_H
