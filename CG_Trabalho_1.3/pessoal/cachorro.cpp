#include "cachorro.h"

Cachorro::Cachorro()
{
    this->tipo=4;
}

void Cachorro::desenha()
{
    Objeto::desenha();

    glPushMatrix();
    glPushMatrix();
        GUI::setColor(1,1,1);
        glTranslatef(0,0.4,0);
        glScalef(2,0.75,0.75);
        c->desenha();
    glPopMatrix();


    glPushMatrix();
        GUI::setColor(1,1,1);
        glTranslatef(0.45,0,-0.2);
        glScalef(0.15,1.5,0.15);
        c->desenha();
    glPopMatrix();

    glPushMatrix();
        GUI::setColor(1,1,1);
        glTranslatef(0.45,0,0.2);
        glScalef(0.15,1.5,0.15);
        c->desenha();
    glPopMatrix();


    glPushMatrix();
        GUI::setColor(1,1,1);
        glTranslatef(-0.45,0,-0.2);
        glScalef(0.15,1.5,0.15);
        c->desenha();
    glPopMatrix();


    glPushMatrix();
        GUI::setColor(1,1,1);
        glTranslatef(-0.455,0,0.2);
        glScalef(0.15,1.5,0.15);
        c->desenha();
    glPopMatrix();



    glPushMatrix();
        GUI::setColor(1,1,1);
        glTranslatef(0.7,0.75,0);
        glRotatef(45,0,0,1);
        glScalef(1.3,0.30,0.30);
        c->desenha();
    glPopMatrix();


      //Rabo
    glPushMatrix();


        GUI::setColor(1,1,1);
        glTranslatef(-0.65,0.7,0);
        glRotatef(-45,0,0,1);
        glScalef(1,0.10,0.10);
        c->desenha();
    glPopMatrix();


    glPushMatrix();
        GUI::setColor(1,1,1);
        glTranslatef(0.7,0.8,0);
        glRotatef(45,0,0,1);
        glScalef(0.5,0.5,0.5);
        c->desenha();
    glPopMatrix();

    glPushMatrix();
        GUI::setColor(1,1,1);
        glTranslatef(0.6,0.9,-0.14);
        glRotatef(45,0,0,1);
        glScalef(0.10,0.25,0.15);
        c->desenha();
    glPopMatrix();


    glPushMatrix();
        GUI::setColor(1,1,1);
        glTranslatef(0.6,0.9,0.14);
        glRotatef(45,0,0,1);
        glScalef(0.10,0.25,0.15);
        c->desenha();
    glPopMatrix();


    glPushMatrix();
        GUI::setColor(0,0,0);
        glTranslatef(0.71,0.95,0.09);
        glRotatef(45,0,0,1);
        glScalef(0.10,0.10,0.10);
        c->desenha();
    glPopMatrix();

    glPushMatrix();
        GUI::setColor(0,0,0);
        glTranslatef(0.71,0.95,-0.09);
        glRotatef(45,0,0,1);
        glScalef(0.10,0.10,0.10);
        c->desenha();
    glPopMatrix();

    glPopMatrix();

}
