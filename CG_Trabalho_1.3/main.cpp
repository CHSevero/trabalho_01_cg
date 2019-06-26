#include <iostream>
#include <fstream>
using namespace std;

#include <gui.h>
#include <vector>
#include <objeto.h>
#include <quadrado.h>
#include <cubo.h>
#include <pessoa.h>
#include <casa.h>
#include <flor.h>
#include <terreno.h>
#include <cachorro.h>
#include <cavalo.h>
#include <passaro.h>
#include <arvore1.h>
#include <arvore2.h>
#include <losangulo.h>
#include <catavento.h>
#include <bird.h>
#include <bits/stdc++.h>
void salvar();
void carregar();

vector<Camera *> cameras;
int posCamera;
//Model3DS model3ds("../3ds/cartest.3DS");

vector<Objeto*> objetos;
int posSelecionado = -1;

//-------------------sombra-------------------
bool drawShadow = false;
bool pontual = true;
float k = 0.0;
//-------------------sombra-------------------

void desenha() {
    GUI::displayInit();

    //definindo a luz que sera usada para gerar a sombra
    float lightPos[4] = {-1+glutGUI::lx,2+glutGUI::ly,1+glutGUI::lz,pontual};
    GUI::setLight(0,-1,2,1,true,false,false,false,pontual);

    GUI::drawOrigin(1);
    GUI::setColor(0,1,0);
//    GUI::setColor(1,0,0);
    glPushMatrix();
        //-------------------sombra-------------------
        glTranslated(0.0,k-0.001,0.0);
//        GUI::drawFloor(25,25);
        //-------------------sombra-------------------
    glPopMatrix();


    GUI::drawFloor();

    for (int i = 0; i < objetos.size(); ++i) {
        glPushMatrix();
            objetos[i]->desenha();
        glPopMatrix();
    }


    //-------------------sombra-------------------

    //desenhando os objetos projetados
    glPushMatrix();
            GLfloat sombra[4][4];
            GLfloat plano[4] = {0,1,0,0};
            GUI::shadowMatrix(sombra,plano,lightPos);
            glMultTransposeMatrixf( (GLfloat*)sombra );

        glDisable(GL_LIGHTING);
        glColor3d(0.0,0.0,0.0);
        if (drawShadow) {
            bool aux = glutGUI::draw_eixos;
            glutGUI::draw_eixos = false;
            for (int i = 0; i < objetos.size(); ++i) {
                if(objetos[i]->sombra){
                    glPushMatrix();
                        objetos[i]->desenha();
                    glPopMatrix();
                }
            }
            glutGUI::draw_eixos = aux;
        }
        glEnable(GL_LIGHTING);
    glPopMatrix();
    //-------------------sombra-------------------

    //-------------------sombra-------------------

    //desenhando os objetos projetados
    glPushMatrix();
            GLfloat sombra1[4][4];
            GLfloat plano1[4] = {-1,0,0,4.95};
            GUI::shadowMatrix(sombra1,plano1,lightPos);
            glMultTransposeMatrixf( (GLfloat*)sombra1 );

        glDisable(GL_LIGHTING);
        glColor3d(0.0,0.0,0.0);
        if (drawShadow) {
            bool aux = glutGUI::draw_eixos;
            glutGUI::draw_eixos = false;
            for (int i = 0; i < objetos.size(); ++i) {
                if(objetos[i]->sombra){
                    glPushMatrix();
                        objetos[i]->desenha();
                    glPopMatrix();
                }
            }
            glutGUI::draw_eixos = aux;
        }
        glEnable(GL_LIGHTING);
    glPopMatrix();
    //-------------------sombra-------------------

    //-------------------sombra-------------------
    //desenhando os objetos projetados
    glPushMatrix();
        //matriz de projecao para gerar sombra no plano y=k
            GLfloat sombra2[4][4];
//            GUI::shadowMatrixYk(sombra,lightPos,k);
            GLfloat plano2[4] = {0,0,1,4.95};
            GUI::shadowMatrix(sombra2,plano2,lightPos);
            glMultTransposeMatrixf( (GLfloat*)sombra2 );

        glDisable(GL_LIGHTING);
        glColor3d(0.0,0.0,0.0);
        if (drawShadow) {
            bool aux = glutGUI::draw_eixos;
            glutGUI::draw_eixos = false;
            for (int i = 0; i < objetos.size(); ++i) {
                if(objetos[i]->sombra){
                    glPushMatrix();
                        objetos[i]->desenha();
                    glPopMatrix();
                }
            }
            glutGUI::draw_eixos = aux;
        }
        glEnable(GL_LIGHTING);

    glPopMatrix();
    //-------------------sombra---------------


    //-------------------sombra-------------------

    //desenhando os objetos projetados
    glPushMatrix();
        //matriz de projecao para gerar sombra no plano y=k
            GLfloat sombra3[4][4];
//            GUI::shadowMatrixYk(sombra,lightPos,k);
            GLfloat plano3[4] = {sqrt(2)/2,sqrt(2)/2,0,1.4};
            GUI::shadowMatrix(sombra3,plano3,lightPos);
            glMultTransposeMatrixf( (GLfloat*)sombra3 );

        glDisable(GL_LIGHTING);
        glColor3d(0.0,0.0,0.0);
        if (drawShadow) {
            bool aux = glutGUI::draw_eixos;
            glutGUI::draw_eixos = false;
            for (int i = 0; i < objetos.size(); ++i) {
                if(objetos[i]->sombra){
                    glPushMatrix();
                        objetos[i]->desenha();
                    glPopMatrix();
                }
            }
            glutGUI::draw_eixos = aux;
        }
        glEnable(GL_LIGHTING);
    glPopMatrix();
    //-------------------sombra---------------


    if (posSelecionado >= 0 and posSelecionado < objetos.size()) {
        objetos[posSelecionado]->t.x += glutGUI::dtx;
        objetos[posSelecionado]->t.y += glutGUI::dty;
        objetos[posSelecionado]->t.z += glutGUI::dtz;

        objetos[posSelecionado]->a.x += glutGUI::dax;
        objetos[posSelecionado]->a.y += glutGUI::day;
        objetos[posSelecionado]->a.z += glutGUI::daz;

        objetos[posSelecionado]->s.x += glutGUI::dsx;
        objetos[posSelecionado]->s.y += glutGUI::dsy;
        objetos[posSelecionado]->s.z += glutGUI::dsz;
    }


    GUI::displayEnd();
}

bool incluirObjeto = false;

void teclado(unsigned char key, int x, int y) {
    //if (!incluirObjeto) {
        GUI::keyInit(key,x,y);
    //}

    switch (key) {
    case 't':
        glutGUI::trans_obj = !glutGUI::trans_obj;
        break;
    case 'l':
        glutGUI::trans_luz = !glutGUI::trans_luz;
        break;

    case 'n':
        if ( posSelecionado >= 0 and posSelecionado < objetos.size()) {
            objetos[posSelecionado]->selecionado = false;
        }
        posSelecionado++;
        posSelecionado = posSelecionado%objetos.size();
        if (posSelecionado >= 0 and posSelecionado < objetos.size()) {
            objetos[posSelecionado]->selecionado = true;
        }
        break;
    case 'b':
        if (posSelecionado >= 0 and posSelecionado < objetos.size()) {
            objetos[posSelecionado]->selecionado = false;
        }
        posSelecionado--;
        if (posSelecionado < 0) {
            posSelecionado = objetos.size()-1;
        }
        if (posSelecionado >= 0 and posSelecionado < objetos.size()) {
            objetos[posSelecionado]->selecionado = true;
        }
        break;
    case 'O':
        incluirObjeto = !incluirObjeto;
        break;
    case 'W':
        if(posSelecionado >= 0 and objetos.size() > 0 and posSelecionado<objetos.size()){
            objetos[posSelecionado]->origem = !objetos[posSelecionado]->origem;
        }
        break;
    case 'w':
        if(incluirObjeto){
            objetos.push_back(new Pessoa());
        }
        break;
    case 'e':
        if(incluirObjeto){
            objetos.push_back(new Casa());
        }
        break;
    case 'E':
        if(incluirObjeto){
            objetos.push_back(new Flor());
        }
        break;
    case 'r':
        if(incluirObjeto){
            objetos.push_back(new Terreno());
        }
        break;
    case 'R':
        if(incluirObjeto){
            objetos.push_back(new Cachorro());
        }
        break;
    case 'a':
        if(incluirObjeto){
            objetos.push_back(new Cavalo());
        }
        break;
    case 'A':
        if(incluirObjeto){
            objetos.push_back(new Passaro());
        }
        break;
    case 's':
        if(incluirObjeto){
            objetos.push_back(new Arvore1());
        }
        break;
    case 'u':
        if(incluirObjeto){
            objetos.push_back(new CataVento());
        }
        break;
    case 'U':
        if(incluirObjeto){
            objetos.push_back(new Bird());
        }
        break;
    case 'S':
         salvar();
        break;
    case 'd':
        posCamera++;
        posCamera = posCamera%cameras.size();
        glutGUI::cam = new CameraDistante(cameras[posCamera]->e, cameras[posCamera]->c, cameras[posCamera]->u) ;
        break;
    case 'D':
        if(objetos.size() > 0){
            objetos.pop_back();
        }
        break;
    case 'p':
        if(objetos.size() > 0 and posSelecionado >= 0){
            objetos.erase(objetos.begin()+posSelecionado);
        }
        break;
        //-------------------sombra-------------------
        case 'h':
            drawShadow = !drawShadow;
            break;
        case 'H':
            pontual = !pontual;
            break;
        case 'K':
            k += 0.1;
            break;
        case 'k':
            k -= 0.1;
            break;
    case ',':
        pontual = !pontual;
        break;
    case '<':
        if (posSelecionado >= 0 and posSelecionado < objetos.size()) {
            objetos[posSelecionado]->sombra = !objetos[posSelecionado]->sombra;
        }
        break;
        //-------------------sombra-------------------
    case '.':
        glutGUI::perspective = (glutGUI::perspective+1)%3;
        break;

    default:
        break;
    }
}

void salvar()
{
    ofstream arquivo("MeusObj.txt");
    arquivo << objetos.size() << "\n";
    for(auto a : objetos){
        arquivo << a->tipo <<"\n";
        arquivo << a->t.x << "\n";
        arquivo << a->t.y << "\n";
        arquivo << a->t.z << "\n";

        arquivo << a->a.x << "\n";
        arquivo << a->a.y << "\n";
        arquivo << a->a.z << "\n";

        arquivo << a->s.x << "\n";
        arquivo << a->s.y << "\n";
        arquivo << a->s.z << "\n";

     }
}

void carregar(){
    ifstream arquivo("MeusObj.txt");
    string linha;
    getline(arquivo,linha);
    int quantidade= strtof(linha.c_str(),0);
    int tipo;
    Vetor3D v1, v2, v3;

    for(int i=0; i<quantidade; i++){
        getline(arquivo,linha);
        tipo = strtof(linha.c_str(),0);

        getline(arquivo,linha);
        v1.x = strtof(linha.c_str(),0);
        getline(arquivo,linha);
        v1.y = strtof(linha.c_str(),0);
        getline(arquivo,linha);
        v1.z = strtof(linha.c_str(),0);


        getline(arquivo,linha);
        v2.x = strtof(linha.c_str(),0);
        getline(arquivo,linha);
        v2.y = strtof(linha.c_str(),0);
        getline(arquivo,linha);
        v2.z = strtof(linha.c_str(),0);

        getline(arquivo,linha);
        v3.x = strtof(linha.c_str(),0);
        getline(arquivo,linha);
        v3.y = strtof(linha.c_str(),0);
        getline(arquivo,linha);
        v3.z = strtof(linha.c_str(),0);

        switch (tipo) {
        case 1:
            objetos.push_back(new Pessoa());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;
            break;
        case 2:
            objetos.push_back(new Casa());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        case 3:
            objetos.push_back(new Flor());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        case 4:
            objetos.push_back(new Cachorro());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        case 5:
            objetos.push_back(new Terreno());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        case 6:
            objetos.push_back(new Arvore1());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        case 7:
            objetos.push_back(new Cavalo());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        case 8:
            objetos.push_back(new Passaro());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        case 9:
            objetos.push_back(new Passaro());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        case 10:
            objetos.push_back(new Bird());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        case 11:
            objetos.push_back(new CataVento());
            objetos[i]->t = v1;
            objetos[i]->a = v2;
            objetos[i]->s = v3;

            break;
        default:
            break;
        }
    }
}


int main()
{
    cout << "Hello World!" << endl;

    cameras.push_back(new CameraDistante(0,1,5,0,0,0,0,1,0));
    cameras.push_back(new CameraDistante(3,3,3,0,0,0,0,1,0));//iso
    cameras.push_back(new CameraDistante(3,0,3,0,0,0,0,1,0));//bi
    cameras.push_back(new CameraDistante(3,8,2,0,0,0,0,1,0));//tri
//    cameras.push_back(new CameraDistante(1,0,0,0,0,0,0,1,0));
//    cameras.push_back(new CameraDistante(-100,100,0,0,0,0,0,150,-1));
    carregar();

    GUI gui = GUI(800,600,desenha,teclado);
}


//while(true) {
//    desenha();
//    interacaoUsuario();
//}
