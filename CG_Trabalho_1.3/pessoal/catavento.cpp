#include "catavento.h"

CataVento::CataVento()
{
    tipo=11;
}

void CataVento::desenha()
{
    Objeto::desenha();
    GUI::setColor(0.5,0.35,0.05);
    glPushMatrix();

        glPushMatrix();
            glTranslatef(0,1,0);
            glScalef(0.5,5,0.5);
            c->desenha();
        glPopMatrix();

        glTranslatef(0,2.2,0.2);

        glPushMatrix();
        GUI::setColor(0,0,1);
        glRotatef(r,0,0,1);
        r+=10;
        r=r%360;
            glPushMatrix();
                glScalef(3,0.25,0.5);
                c->desenha();
            glPopMatrix();

            glPushMatrix();
                glScalef(0.25,3,0.5);
                 c->desenha();
            glPopMatrix();
        glPopMatrix();

    glPopMatrix();
}
