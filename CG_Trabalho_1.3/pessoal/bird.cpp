#include "bird.h"

Bird::Bird()
{
    tipo=10;
}

void Bird::desenha()
{
    Objeto::desenha();
    GUI::setColor(1,1,1);
    glPushMatrix();

        glPushMatrix();

            if(r11){
                glRotatef(r1,0,0,1);
                r1+=10;
                if(r1>=90){
                    r11=false;
                }
            }else{
                glRotatef(r1,0,0,1);
                r1-=10;
                if(r1<=0){
                    r11=true;
                }
            }



            glTranslatef(0.5,0,0);
            glRotatef(45,0,1,0);
            glScalef(1,0.1,1);
            c->desenha();
        glPopMatrix();


        glPushMatrix();
        if(r22){
            glRotatef(-r2,0,0,1);
            r2+=10;
            if(r2>=90){
                r22=false;
            }
        }else{
            glRotatef(-r2,0,0,1);
            r2-=10;
            if(r2<=0){
                r22=true;
            }
        }
            glTranslatef(-0.5,0,0);
            glRotatef(45,0,1,0);
            glScalef(1,0.1,1);
            c->desenha();
        glPopMatrix();

        glPushMatrix();
            glRotatef(-20,1,0,0);
            glScalef(0.4,0.4,0.8);
            GUI::drawSphere(0,0,0,0.5);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0,0.25,0.35);
            glRotatef(-45,1,0,0);
            glScalef(0.15,0.15,0.5);
            c->desenha();
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0,0.4,0.5);
            GUI::drawSphere(0,0,0,0.12);
        glPopMatrix();


        glPushMatrix();
            glTranslatef(0,0.1,-0.5);
            glRotatef(45,1,0,0);
            glScalef(0.2,0.1,1);
            c->desenha();
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.1,-0.2,-0.2);
            glScalef(0.1,0.5,0.1);
            c->desenha();
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-0.1,-0.2,-0.2);
            glScalef(0.1,0.5,0.1);
            c->desenha();
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0,0.4,-0.5);
            glRotatef(90,1,0,0);
            glPushMatrix();

                GUI::setColor(1,0,0);
                glTranslated(0,1,0);
                glScalef(0.25,0.5,0.25);
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

    glPopMatrix();



}
