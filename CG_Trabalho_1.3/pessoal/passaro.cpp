#include "passaro.h"

Passaro::Passaro()
{
    this->tipo = 8;
    model =  new Model3DS("../3ds/bird.3DS");
}

void Passaro::desenha()
{
    Objeto::desenha();
    glPushMatrix();
        glTranslatef(0,0,0);
        glRotatef(-90,1,0,0);
        glScalef(0.06,0.06,0.06);
        model->draw();
    glPopMatrix();
}
