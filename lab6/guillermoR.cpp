#include "fonts.h"
#include <GL/glx.h>
using namespace std;

void showName(); 

//Function is found in the bottom of render() in our main file, "srcfile.cpp".
void showName(){
    // Aligns and draws the text 
    Rect r;
    r.bot = 100;
    r.left = 100;
    r.center = 0;
    ggprint8b(&r, 16, 0x00ff0000, "Guillermo");
}

void drawBox(int x, int y){
    static float angle = 0.0;
    //RGB
    glColor3ub( 0, 0, 200);
    glPushMatrix();
    glTranslatef(x, y, 0);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-50, -50, 0);
    angle = angle + 2.5;
    glBegin(GL_QUADS);
    glVertex2i(   0,   0);
    glVertex2i(   0, 100);
    glVertex2i( 100, 100);
    glVertex2i( 100,   0);
    glEnd();
    Rect r;
    r.bot = 50;
    r.left = 50;
    r.center = 1;
    ggprint8b(&r, 16, 0x00ff0000, "Guillermo");
    glPopMatrix();
}
