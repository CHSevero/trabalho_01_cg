#ifndef BIRD_H
#define BIRD_H

#include <objeto.h>
#include <cubo.h>

class Bird : public Objeto
{
public:
    bool r11= true;
    bool r22 = true;
    int r1 = 0;
    int r2 = 0;
    Cubo *c = new Cubo();
    Bird();
    void desenha();
};

#endif // BIRD_H
