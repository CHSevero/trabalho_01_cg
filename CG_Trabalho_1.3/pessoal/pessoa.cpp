#include "pessoa.h"

Pessoa::Pessoa()
{
    this->tipo = 1;
}

void Pessoa::desenha()
{
    glPushMatrix();
    Objeto::desenha();
    glTranslatef(0,0.5,0);
    glScalef(0.6,0.6,0.6);

        //Tronco
        glPushMatrix();
            GUI::setColor(0,0,1);
            glTranslatef(0,0,0);
            glScalef(1,2,1);
            c->desenha();
        glPopMatrix();

        // pe direito
        glPushMatrix();
            GUI::setColor(1,1,0);
            glTranslatef(-0.2,-0.7,0);
            glScalef(0.25,1,0.5);
            c->desenha();
        glPopMatrix();

        //pe esquerdo
        glPushMatrix();
            GUI::setColor(1,1,0);
            glTranslatef(0.2,-0.7,0);
            glScalef(0.25,1,0.5);
            c->desenha();
        glPopMatrix();

        //braco esquerdo

        glPushMatrix();
            GUI::setColor(1,1,0);
            glTranslatef(0.5,0.25,0);
            glRotated(40,0,0,1);
            glScalef(0.25,1.5,0.5);
            c->desenha();
        glPopMatrix();

        //Braco direito

        glPushMatrix();
            GUI::setColor(1,1,0);
            glTranslatef(-0.5,0.25,0);
            glRotated(-40,0,0,1);
            glScalef(0.25,1.5,0.5);
            c->desenha();
        glPopMatrix();


        //Cabeca

        glPushMatrix();
            GUI::setColor(1,1,1);
            glTranslatef(0,0.65,0);
            glScalef(0.7,0.7,0.7);
            c->desenha();
        glPopMatrix();

        //Olho direito

        glPushMatrix();
            GUI::setColor(0,0,0);
            glTranslatef(0.1,0.7,0.15);
            GUI::drawSphere(0,0,0,0.05);
        glPopMatrix();

        //olho esquerdo
        glPushMatrix();
            GUI::setColor(0,0,0);
            glTranslatef(-0.1,0.7,0.15);
            GUI::drawSphere(0,0,0,0.05);
        glPopMatrix();

        //nariz
        glPushMatrix();
            GUI::setColor(0,0,0);
            glTranslatef(0,0.65,0.2);
            glScalef(0.1,0.1,0.1);
            c->desenha();
        glPopMatrix();

        glPushMatrix();
            GUI::setColor(0,0,0);
            glTranslatef(0,0.55,0.17);
            glScalef(0.3,0.08,0.1);
            c->desenha();
        glPopMatrix();

    glPopMatrix();
}
