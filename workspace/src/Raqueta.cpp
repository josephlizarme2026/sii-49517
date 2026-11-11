// Raqueta.cpp: implementation of the Raqueta class.
//
//////////////////////////////////////////////////////////////////////

#include "Raqueta.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Raqueta::Raqueta()
{
	
}

Raqueta::~Raqueta()
{

}

void Raqueta::Mueve(float t)
{
//x1 e x2 no varian xq me desplazo unicamente en y
//describimos la ecuacion Xf=xo+v*t
//
	y1 = y1 + velocidad.y * t;
	y2 = y2 + velocidad.y * t;
}
