/************************************************* 
* Taller C. 
* Fecha: 2 Agosto de 2022
* Autor: Juan Manuel Vasquez Mejia
* Asignatura: Computaciòn paralela y distribuida
**********************************/

/*********
* 
*  Programa que muestra los primeros X números naturales.
*
******/
#include <stdio.h>

/* Muestra un mensaje de entrada al programa */
void darBienvenida(){
	printf("\n..........................................................................");
	printf("\n	Programa que muestra los primeros X números naturales");
	printf("\n..........................................................................\n\n");	
}

/* Muestra los primeros X números naturales ingresados por el usuario 
* cant=10
* Resultado: 1 2 3 4 5 6 7 8 9 10
*/
void mostrarNumeros(){
	int cant,num;
	printf("\nInserte el número de números que desea mostrar: ");
	scanf("%d", &cant);
	printf("\n\n");
	for(num=1;num<=cant;num++){
		if(num==1)
			printf("%d",num);
		else
			printf(" %d",num);	
	}
	printf("\n\n");
}
