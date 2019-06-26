#include "objeto.h"

Objeto::Objeto()
{

}

void Objeto::desenha()
{

    glTranslatef(t.x,t.y,t.z);

    glRotatef(a.z,0,0,1);
    glRotatef(a.y,0,1,0);
    glRotatef(a.x,1,0,0);
    if(origem){
         GUI::drawOrigin(1);
    }
    if(sombra){

    }

    glScalef(s.x,s.y,s.z);
    if(selecionado){
        glPushMatrix();
                ti = (t.y/1000)+2;
            GUI::setColor(1,0,0);
            glTranslatef(0,0.5,0);
            glRotatef(90,0,0,1);
            glScalef(0.5,0.5,0.5);
//            if(s.x > 0 and s.y > 0 and s.z > 0){
//                glScalef(1/s.x,1/s.y,1/s.z);
//            }
            glPushMatrix();
                glPushMatrix();
                    glTranslatef(0,0,0.25);
                    glRotatef(-15,1,0,0);
                    glBegin(GL_TRIANGLES);
                        glVertex3f(0,1,0);
                        glVertex3f(-0.25,0,0);
                        glVertex3f(0.25,0,0);
                        glNormal3f(0,0.5,1);
                    glEnd();
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(0.25,0,0);
                    glRotatef(90,0,1,0);
                    glRotatef(-15,1,0,0);
                    glBegin(GL_TRIANGLES);
                        glVertex3f(0,1,0);
                        glVertex3f(-0.25,0,0);
                        glVertex3f(0.25,0,0);
                        glNormal3f(0,0.5,1);
                    glEnd();
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(-0.25,0,0);
                    glRotatef(-90,0,1,0);
                    glRotatef(-15,1,0,0);
                    glBegin(GL_TRIANGLES);
                        glVertex3f(0,1,0);
                        glVertex3f(-0.25,0,0);
                        glVertex3f(0.25,0,0);
                        glNormal3f(0,0.5,1);
                    glEnd();
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(0,0,-0.25);
                    glRotatef(180,0,1,0);
                    glRotatef(-15,1,0,0);
                    glBegin(GL_TRIANGLES);
                        glVertex3f(0,1,0);
                        glVertex3f(-0.25,0,0);
                        glVertex3f(0.25,0,0);
                        glNormal3f(0,0.5,1);
                    glEnd();
                glPopMatrix();

            glPopMatrix();

            glPushMatrix();
                glRotatef(180,1,0,0);
                glPushMatrix();
                    glPushMatrix();
                        glTranslatef(0,0,0.25);
                        glRotatef(-15,1,0,0);
                        glBegin(GL_TRIANGLES);
                            glVertex3f(0,1,0);
                            glVertex3f(-0.25,0,0);
                            glVertex3f(0.25,0,0);
                            glNormal3f(0,0.5,1);
                        glEnd();
                    glPopMatrix();
                    glPushMatrix();
                        glTranslatef(0.25,0,0);
                        glRotatef(90,0,1,0);
                        glRotatef(-15,1,0,0);
                        glBegin(GL_TRIANGLES);
                            glVertex3f(0,1,0);
                            glVertex3f(-0.25,0,0);
                            glVertex3f(0.25,0,0);
                            glNormal3f(0,0.5,1);
                        glEnd();
                    glPopMatrix();
                    glPushMatrix();
                        glTranslatef(-0.25,0,0);
                        glRotatef(-90,0,1,0);
                        glRotatef(-15,1,0,0);
                        glBegin(GL_TRIANGLES);
                            glVertex3f(0,1,0);
                            glVertex3f(-0.25,0,0);
                            glVertex3f(0.25,0,0);
                            glNormal3f(0,0.5,1);
                        glEnd();
                    glPopMatrix();
                    glPushMatrix();
                        glTranslatef(0,0,-0.25);
                        glRotatef(180,0,1,0);
                        glRotatef(-15,1,0,0);
                        glBegin(GL_TRIANGLES);
                            glVertex3f(0,1,0);
                            glVertex3f(-0.25,0,0);
                            glVertex3f(0.25,0,0);
                            glNormal3f(0,0.5,1);
                        glEnd();
                    glPopMatrix();

                glPopMatrix();
            glPopMatrix();


        glPopMatrix();
    }
}
