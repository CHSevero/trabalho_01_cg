#include "casa.h"

Casa::Casa()
{
    this->tipo=2;
}

void Casa::desenha()
{
    Objeto::desenha();
    glPushMatrix();

        glPushMatrix();
            GUI::setColor(1,1,1);
            c->desenha();
        glPopMatrix();

        glPushMatrix();
            GUI::setColor(1,1,1);
            glTranslatef(0,0.25,0.25);
            glScalef(1,1.1,1);
            t->desenha();
        glPopMatrix();

        glPushMatrix();
            GUI::setColor(1,1,1);
            glRotatef(180,0,1,0);
            glTranslatef(0,0.25,0.25);
            glScaled(1,1.1,1);
            t->desenha();
        glPopMatrix();

        glPushMatrix();

            GUI::setColor(0,1,1);
            glTranslatef(0,0,0.21);
            glScalef(0.3,0.7,0.2);
            c->desenha();
        glPopMatrix();

        GUI::setColor(1,0.5,0);
        glPushMatrix();
            glTranslatef(0.14,0.5,0);
            glRotatef(26,0,0,1);
            glScalef(0.05,1.3,1.2);
            c->desenha();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-0.14,0.5,0);
            glRotatef(-26,0,0,1);
            glScalef(0.05,1.3,1.2);
            c->desenha();
        glPopMatrix();

    glPopMatrix();
}
