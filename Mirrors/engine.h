//
//  engine.h
//  Mirrors
//
//  Created by Hugo Matos on 11/04/23.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <stdlib.h>

// ........................... Variaveis globais: cor poligno, dimensoes janela
GLfloat  r,g,b;			
GLint    wDIMx, wDIMy;


void display(void);
void keyboard(unsigned char key, int x, int y);

