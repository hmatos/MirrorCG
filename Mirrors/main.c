//
//  main.c
//  OpenGL
//
//  Created by Hugo Matos on 11/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

/* ===================================================================================
 Departamento Eng. Informatica - FCTUC
 Computacao Grafica - 2010/11
 Trabalho 1 - Introducao ao OpenGL
 ======================================================================================= */


//.................................................... Bibliotecas necessarias
#include "engine.h"

void init(void);


//-----------------------------------------------------------------------------------
//																		         MAIN
//-----------------------------------------------------------------------------------
int main(int argc, char** argv){
    
	glutInit(&argc, argv);							//===1:Inicia janela
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);	//		:Single mode, RBG
	glutInitWindowPosition (200,100);				//		:localizacao
	glutInitWindowSize (800, 600);					//		:dimensoes (pixeis)
	glutCreateWindow ("Exemplo inicial");			//		:titulo
    
	init();											//===2:Inicializacao estado/parametros 
    
    //===3:Definicao callbaks	
	glutDisplayFunc(display);						//		:desenho
	glutKeyboardFunc(keyboard);						//		:eventos teclado
	glutMainLoop();									//===4:Inicia processamento
    
	return 1;
}

//-----------------------------------------------------------------------------------
//																		Inicializacao
//-----------------------------------------------------------------------------------
void init(void){
	glClearColor(1.0, 1.0, 1.0, 1.0);	//....	Cor para apagar
	gluOrtho2D(0, 1,0, 1);				//....	Definicao coordenadas area de desenho
	r=1.0;								//....	Cor inicial (vermelho)
	g=0.0;
	b=0.0;
    wDIMx=400;
    wDIMy=400;
}

