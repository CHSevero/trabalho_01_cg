#include "arvore2.h"

Arvore2::Arvore2()
{
    this->tipo = 9;
    model = new Model3DS("../3ds/arv2.3DS");
}

void Arvore2::desenha()
{
   Objeto::desenha();
    glPushMatrix();
        glTranslatef(0,0,0);
        glRotatef(-90,1,0,0);
      glScalef(0.05,0.05,0.05);
        model->draw();
    glPopMatrix();
}
