#include "arvore1.h"

Arvore1::Arvore1()
{
    this->tipo = 6;

}

void Arvore1::desenha()
{
   Objeto::desenha();
    glPushMatrix();
        glScalef(0.5,0.5,0.5);
        glPushMatrix();
        GUI::setColor(0.5,0.35,0.05);
        glScalef(0.5,4,0.5);
        c->desenha();
        glPopMatrix();
        glPushMatrix();
        GUI::setColor(0,1,0);
        glTranslatef(0,1,0);
        c->desenha();
        glPopMatrix();
        glPushMatrix();
        GUI::setColor(0,1,0);
        glTranslatef(0.3,0.5,0);
        c->desenha();
        glPopMatrix();

        glPushMatrix();
        GUI::setColor(0,1,0);
        glTranslatef(-0.3,0.5,0);
        c->desenha();
        glPopMatrix();
        glPushMatrix();
        GUI::setColor(0,1,0);
        glTranslatef(0,0.5,0.3);
        c->desenha();
        glPopMatrix();
        glPushMatrix();
        GUI::setColor(0,1,0);
        glTranslatef(0,0.5,-0.3);
        c->desenha();
        glPopMatrix();
    glPopMatrix();
}
