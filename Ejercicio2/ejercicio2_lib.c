/************************************************* 
* Taller C. 
* Fecha: 2 Agosto de 2022
* Autor: Juan Manuel Vasquez Mejia
* Asignatura: Computaciòn paralela y distribuida
**********************************/

/*********
* 
*  Programa que convierte los dias especificados en años, semanas y dias.
*
******/

#include <stdio.h>

/* Muestra un mensaje de entrada al programa */
void darBienvenida(){
	printf("\n.......................................................................");
	printf("\n 	Conversor de dias a años,semanas y dias transcurridos");
	printf("\n.......................................................................\n\n");	
}

/* Convierte los dias especificados por el usuario en años, semanas y dias. */
void convertirTiempo(){
	int dias,day,year,week, temp;
	printf("Inserte el número de dias que desea convertir: ");
	scanf("%d",&dias);
	year=dias/365;
	temp=dias%365;
	week=(temp)/7;
	day=temp%7;
	printf("\n Años: %d, Semanas: %d, Dias: %d\n\n",year,week,day);
}


