#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "DatosMemCompartida.h"
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc,char* argv[])
{
	int i;
	DatosMemCompartida* dat;
	char *direccion;
	int fd;
	
	//fd=open(X1);
	//Abrimos despues de haber sido creada por el juego
	fd=open("memoria.dat", O_RDWR);
	if (fd == -1)
	{
		perror("Error al abrir el archivo"); 
		return 1;
	}
	//direccion=mmap(X2);
	//Hago la proyeccion en memoria del archivo memoria.dat por medio de su 
	//descriptor y con el tamaño que contenga las variables esfera, raqueta y accion
	//devuelve la direccion inicial o final de la proyeccion?
	direccion = (char*)mmap(NULL,sizeof(DatosMemCompartida),PROT_READ | PROT_WRITE
	,MAP_SHARED,fd,0);
	
	if (direccion == MAP_FAILED)
	{
		perror("Error en la proyeccion mmap"); 
		return 1;
	}
	close(fd);
	//devuelve un puntero a la clase por medio del a direccion con lo cual estamos
	//trabajando con un objeto de la clase DatosMemCompartida
	dat=(DatosMemCompartida*)direccion;

	while(1)
	{
		usleep(25000);
		// X3 Completar la lógica
		// dat->jugador, por ejemplo, accede al identificador del jugador
		// Leer posiciones
		// Quiero el centro de la raqueta
        //float yJugador = (dat->raqueta1.y1 + dat->raqueta1.y2) / 2.0f; //Accedemos a los atributos de la clase
        float yJugador = (dat->raqueta1.y1+dat->raqueta1.y2)/2;//punto medio de jugador
	float yEsfera = dat->esfera.centro.y;

        // Decidir acción
        if (yEsfera > yJugador)
            dat->accion = 1;//subir
        else if (yEsfera < yJugador)
            dat->accion = -1;//bajar
        else
            dat->accion = 0;//quieto
	}
	
	
	//añadido
	//Desproyectamos
	munmap(direccion, sizeof(DatosMemCompartida));
	return 0;
}
