#include "losangulo.h"

Losangulo::Losangulo()
{

}


void Losangulo::desenha()
{
    Objeto::desenha();

    glPushMatrix();

        glPushMatrix();
            glBegin(GL_TRIANGLES);
                glVertex3f(0,1,0);
                glVertex3f(-0.25,0,0.25);
                glVertex3f(0.25,0,0.25);
//                glNormal3f();
            glEnd();
            glBegin(GL_TRIANGLES);
                glVertex3f(0,1,0);
                glVertex3f(0.25,0,0.25);
                glVertex3f(0.25,0,-0.25);
            glEnd();
            glBegin(GL_TRIANGLES);
                glVertex3f(0,1,0);
                glVertex3f(-0.25,0,-0.25);
                glVertex3f(-0.25,0,0.25);
            glEnd();
            glBegin(GL_TRIANGLES);
                glVertex3f(0,1,0);
                glVertex3f(0.25,0,-0.25);
                glVertex3f(-0.25,0,-0.25);
            glEnd();
        glPopMatrix();

        glPushMatrix();
            glRotatef(180,1,0,0);
            glBegin(GL_TRIANGLES);
                glVertex3f(0,1,0);
                glVertex3f(-0.25,0,0.25);
                glVertex3f(0.25,0,0.25);
            glEnd();
            glBegin(GL_TRIANGLES);
                glVertex3f(0,1,0);
                glVertex3f(0.25,0,0.25);
                glVertex3f(0.25,0,-0.25);
            glEnd();
            glBegin(GL_TRIANGLES);
                glVertex3f(0,1,0);
                glVertex3f(-0.25,0,-0.25);
                glVertex3f(-0.25,0,0.25);
            glEnd();
            glBegin(GL_TRIANGLES);
                glVertex3f(0,1,0);
                glVertex3f(0.25,0,-0.25);
                glVertex3f(-0.25,0,-0.25);
            glEnd();
        glPopMatrix();


    glPopMatrix();

}
