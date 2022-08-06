/************************************************* 
* Taller C. 
* Fecha: 2 Agosto de 2022
* Autor: Juan Manuel Vasquez Mejia
* Asignatura: Computaciòn paralela y distribuida
**********************************/

/*********
* 
*  Programa que dada una matriz NxN (siendo N un número menor a 8 y indicado por el usuario):
*	- Imprima una matriz con todos los elementos en "1"
*	- Imprima una matriz de números aleatorios entre 0 y 9.
*	- Imprima dos matrices de números aleatorios entre 0 y 9, mostrando:
*		* Su suma
*		* Su producto
*		* Su resta
******/

#include "matrices_lib.h"

int main(){
	bool seguir=true;
	darBienvenida();
	while(seguir){
		seguir=mostrarMenuPpal();
	}
	
	return 0;
}
