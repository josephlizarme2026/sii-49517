// Esfera.cpp: implementation of the Esfera class.
//
//////////////////////////////////////////////////////////////////////

#include "Esfera.h"
#include "glut.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Esfera::Esfera()
{
	radio=0.5f;
	velocidad.x=3;
	velocidad.y=3;
}

Esfera::~Esfera()
{

}



void Esfera::Dibuja()
{
	glColor3ub(255,255,0);
	glEnable(GL_LIGHTING);
	glPushMatrix();
	glTranslatef(centro.x,centro.y,0);
	glutSolidSphere(radio,15,15);
	glPopMatrix();
}

//el parametro t es el tiempo
void Esfera::Mueve(float t)
{
	float gravedad = 9.81f;
	
	//suponiendo que no dejo caer la bola sino que la lanzo
	//y tengo una velocidad inicial, descompiendo el vector velocidad 
	//tendria una velocidad en x en y ,
	//entonces obtengo los desplazamientos en x en y, y su vector desplazamiento
	centro.x = centro.x + velocidad.x * t;
	centro.y = centro.y + velocidad.y * t - 0.5f * gravedad * t * t;
	//centro.y = centro.y + velocidad.y * t ;
    
}
