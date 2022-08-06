/************************************************* 
* Taller C. 
* Fecha: 2 Agosto de 2022
* Autor: Juan Manuel Vasquez Mejia
* Asignatura: Computaciòn paralela y distribuida
**********************************/

/*********
* 
*  Programa que cálcula el producto entre dos números enteros dados.
*
******/

#include <stdio.h>

/* Muestra un mensaje de entrada al programa */
void darBienvenida(){
	printf("\n.................................................");
	printf("\n\n 	Cálcula el producto entre dos enteros...");
	printf("\n.................................................\n");
}

/* Retorna el producto de dos números enteros ingresados por el usuario */
int multiplicar(){
	int num1,num2, producto;
	printf("\n Inserte el primer número a multiplicar: ");
	scanf("%d",&num1);
	printf("\n Inserte el segundo número a multiplicar: ");
	scanf("%d",&num2);
	producto=num1*num2;
	printf("El producto de los dos números ingresados es de: %d \n\n",producto);
	return producto;
}
