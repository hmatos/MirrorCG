//
//  engine.c
//  Mirrors
//
//  Created by Hugo Matos on 11/04/23.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "engine.h"

//-----------------------------------------------------------------------------------
//																			Desenho
//-----------------------------------------------------------------------------------
void display(void){
    
	glViewport( 0, 0, wDIMx,wDIMy );	
    
	glClear(GL_COLOR_BUFFER_BIT);		//....	Apaga ecra
    
	glColor3f (r, g, b);				//....	Especfica cor actual
	glBegin(GL_TRIANGLES);				//....  Desenha poligno
    glVertex2f(0.5,0.5);  
    glVertex2f(0.75,0.75);  
    glVertex2f(0.75,0.25);    		
	glEnd();
    
	glFlush();							//....	Refresh
}


//-----------------------------------------------------------------------------------
//																	Eventos teclado
//-----------------------------------------------------------------------------------
void keyboard(unsigned char key, int x, int y){
    
	switch (key) {
        case 'r':
            r=1.0; g=0.0; b=0.0;
            glutPostRedisplay();
            break;
        case 'g':
            r=0.0; g=1.0; b=0.0;
            glutPostRedisplay();
            break;
        case 'u':
            
            glutPostRedisplay();
            break;
        case 'b':
            r=0.0; g=0.0; b=1.0;
            glutPostRedisplay();
            break;	  
        case 27:
            exit(0);
            break;
	}
}
