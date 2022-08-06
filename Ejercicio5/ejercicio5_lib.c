/************************************************* 
* Taller C. 
* Fecha: 2 Agosto de 2022
* Autor: Juan Manuel Vasquez Mejia
* Asignatura: Computaciòn paralela y distribuida
**********************************/

/*********
* 
*  Programa que dado un número ingresado por el usuario, 
*  muestra un triángulo rectángulo vertical representado por asteriscos,
*  el cual tiene de tamaño el número registrado anteriormente.
*  Máximo 14 lineas.
******/

#include <stdio.h>

/* Muestra un mensaje de entrada al programa */
void darBienvenida(){
	printf("\n..................................................");
	printf("\n	Triángulo Rectángulo");
	printf("\n..................................................");	
}

/* 
* Imprime por pantalla un triángulo rectángulo a partir de asteriscos. 
*  Con un número de lineas determinado por el usuario
*  lineas= 4
*  Resultado:
*  	*
*	**
*	***
*	****
*/
void imprimirTriangulo(){
	int lineas,i,j;
	printf("\nInserte el número de lineas a mostrar: ");
	scanf("%d",&lineas);
	while(lineas>14){
		if(lineas>14)
			printf("\n POR FAVOR INGRESE UN NÚMERO MENOR O IGUAL A 14");
		printf("\nInserte el número de lineas a mostrar: ");
		scanf("%d",&lineas);			
	}
	
	printf("\n\n");
	for(i=1;i<lineas;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}	
}
