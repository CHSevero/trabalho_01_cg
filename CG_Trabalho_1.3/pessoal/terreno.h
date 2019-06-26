#ifndef TERRENO_H
#define TERRENO_H

#include <objeto.h>

class Terreno : public Objeto
{
public:
    Model3DS* model;

public:
    Terreno();
    void desenha();
};

#endif // TERRENO_H
