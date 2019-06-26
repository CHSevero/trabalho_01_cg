#include "cavalo.h"



Cavalo::Cavalo()
{
    this->tipo = 7;
    model = new Model3DS("../3ds/Horse.3DS");
}

void Cavalo::desenha()
{
    Objeto::desenha();
    glPushMatrix();
        glTranslatef(-0.2,0,0);
        glRotatef(-90,1,0,0);
        glScalef(0.00085,0.00085,0.00085);
        model->draw();

    glPopMatrix();
}
