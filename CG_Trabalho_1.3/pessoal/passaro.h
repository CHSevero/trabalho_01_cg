#ifndef PASSARO_H
#define PASSARO_H

#include <objeto.h>

class Passaro : public Objeto
{
public:
    Model3DS* model;
public:
    Passaro();
    void desenha();
};

#endif // PASSARO_H
