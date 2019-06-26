#include "terreno.h"

Terreno::Terreno()
{
   this->tipo=5;
    model = new Model3DS("../3ds/terraplana.3DS");
}

void Terreno::desenha()
{

    glPushMatrix();
         Objeto::desenha();
        glTranslatef(0,-0.2,0);
        glRotatef(-90,1,0,0);
        glScalef(0.5,0.5,0.5);
        model->draw();
    glPopMatrix();
}
