#include "tresangulos.h"




TresAngulos::TresAngulos()
{

}

void TresAngulos::desenha()
{
    Objeto::desenha();
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glNormal3f(0,0,1);
    glVertex3f(0, 0.5, 0);
    glVertex3f(-0.25, 0, 0);
    glVertex3f(0.25, 0, 0);
    glEnd();

    glPopMatrix();
}
