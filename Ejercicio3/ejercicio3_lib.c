/************************************************* 
* Taller C. 
* Fecha: 2 Agosto de 2022
* Autor: Juan Manuel Vasquez Mejia
* Asignatura: Computaciòn paralela y distribuida
**********************************/

/*********
* 
*  Programa que cálcula la distancia entre dos puntos dados.
*
******/

#include <stdio.h>
#include <math.h>

/* Muestra un mensaje de entrada al programa */
void darBienvenida(){
	printf("\n...........................................................................");
	printf("\n	Programa que cálcula la distancia entre dos puntos dados");
	printf("\n...........................................................................");
}

/* Cálcula la distancia entre dos puntos ingresados por el usuario */
void calcularDistancia(){
	int x1,y1,x2,y2;
	float distancia;
	printf("\n\n----INGRESO DE COORDENADAS DEL PRIMER PUNTO----\n");
	printf("\n Digite la coordenada X: ");
	scanf("%d",&x1);
	printf("\n Digite la coordenada Y: ");
	scanf("%d",&y1);
	printf("\n\n----INGRESO DE COORDENADAS DEL SEGUNDO PUNTO----\n");
	printf("\n Digite la coordenada X: ");
	scanf("%d",&x2);
	printf("\n Digite la coordenada Y: ");
	scanf("%d",&y2);			
	distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("\n\n La distancia entre el punto A (%d, %d) y el punto B (%d,%d) es de: %0.2f\n\n", x1,y1,x2,y2,distancia);
}
