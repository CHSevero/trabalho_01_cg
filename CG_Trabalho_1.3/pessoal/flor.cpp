#include "flor.h"



Flor::Flor()
{
    this->tipo=3;
}

void Flor::desenha()
{
    Objeto::desenha();
    glPushMatrix();

    glPushMatrix();
        GUI::setColor(0,1,0);
        glTranslatef(0,0,0);
        glScalef(0.25,2,0.25);
        c->desenha();
    glPopMatrix();

    glPushMatrix();
        GUI::setColor(1,1,0);
        glTranslatef(0,-0.4,0);

        GUI::drawSphere(0,1,0,0.15);
    glPopMatrix();

    glPushMatrix();
    glPushMatrix();
        GUI::setColor(1,0,0);
         glTranslatef(0.3,0.65,0);
          glRotatef(35,0,0,1);
          glRotatef(45,0,1,0);
          glScalef(1,0.1,1);

        c->desenha();
    glPopMatrix();

    glPushMatrix();
         GUI::setColor(1,0,0);
         glTranslatef(-0.3,0.65,0);
          glRotatef(-35,0,0,1);
          glRotatef(-45,0,1,0);
          glScalef(1,0.1,1);

        c->desenha();
    glPopMatrix();
    glPopMatrix();




    glPushMatrix();
    glRotated(90,0,1,0);
    glPushMatrix();
        GUI::setColor(1,0,0);
         glTranslatef(0.3,0.65,0);
          glRotatef(35,0,0,1);
          glRotatef(45,0,1,0);
          glScalef(1,0.1,1);

        c->desenha();
    glPopMatrix();

    glPushMatrix();
         GUI::setColor(1,0,0);
         glTranslatef(-0.3,0.65,0);
          glRotatef(-35,0,0,1);
          glRotatef(-45,0,1,0);
          glScalef(1,0.1,1);

        c->desenha();
    glPopMatrix();
    glPopMatrix();


    glPopMatrix();
}
