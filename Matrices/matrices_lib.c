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

#include <stdio.h>
#include <stdlib.h> /* srand() , rand() */
#include <string.h> /* memset() */
#include <time.h>    /* time() */
#include <unistd.h> /* getpid() */


typedef enum { false, true } bool;

/* Muestra un mensaje de entrada al programa */
void darBienvenida(){
	printf("\n..........................................................");
	printf("\n\n	Operaciones varias con matrices\n\n");
	printf("\n..........................................................");
}

/* 
*
* Retorna el tamaño ingresado por el usuario para la creación de una matriz NxN. 
* Ademas, valida que este no supere la longitud de 8 o que sea de tamaño negativo. 
*
*****/
int ingresarTamano(){
	int n;
	printf("\n Ingrese el tamaño de la matriz: ");
	scanf("%d",&n);
	while(n>8 || n<=0){
		if(n>8 || n<0)
			printf("\n POR FAVOR INGRESE UN TAMAÑO VALIDO");
		printf("\n Ingrese el tamaño de la matriz: ");
		scanf("%d",&n);	
	}
	return n;	
}

/** 
* Rellena una matriz de tamaño NxN y retorna la misma.
* Si la variable azar es true, se rellenara con números aleatorios entre 0 y 9. 
*	En caso contrario, se rellenara con unos.
* Si la variable times es true, la semilla que genera los números aleatorios,
* usara la función time(null), la cual retorna el número de segundos desde el
* 1 de Enero de 1970, mientras que si la variable times es false, se usara como
* semilla el resultado de la función getpid(), cuyo resultado es el ID del proceso que
* la invoca.
*/
int** rellenarMatriz(int n, bool azar, bool times){
	int** matriz=(int **)malloc(sizeof(int*)*n);
	int i,j;
	if(times)
		srand(time(NULL));
	else
		srand(getpid());
		
	if(azar)
		for(i=0;i<n;i++){
			matriz[i]=(int *)malloc(sizeof(int)*n);	
			for(j=0;j<n;j++){
				matriz[i][j]=rand() %10;				
			}
		}
	else
		for(i=0;i<n;i++){
			matriz[i]=(int *)malloc(sizeof(int)*n);				
			for(j=0;j<n;j++){
				matriz[i][j]=1;				
			}
		}	
	return matriz;
}
/*
* Muestra por pantalla una matriz NxN.
*/
void imprimirMatriz(int** matriz,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==0)
				printf("	%d",matriz[i][j]);
			else
				printf(" %d",matriz[i][j]);	
		}
		printf("\n");
	}
}
/*
* Crea y muestra por pantalla una matriz NxN de Unos, cuyo tamaño es elegido por el usuario.
*/
void mostrarUnos(){
	int n;
	int **matriz;
	n=ingresarTamano();
	printf("\n Matriz de Unos de tamaño %dx%d\n\n",n,n); 
	matriz=rellenarMatriz(n,false,true);
	imprimirMatriz(matriz,n);	
}

/*
* Crea y muestra por pantalla una matriz NxN, cuyos elementos son números aleatorios entre 0 y 9.
* Ademas, el tamaño es elegido por el usuario.
*/
void mostrarAzar(){
	int n;
	int **matriz;
	n=ingresarTamano();
	printf("\n Matriz de números aleatorios entre 0 y 9 de tamaño %dx%d\n\n",n,n);
	matriz=rellenarMatriz(n,true,true); 	
	imprimirMatriz(matriz,n);	
}

/*
* Suma dos matrices de tamaño NxN, y retorna una matriz resultado de la misma dimensión.
* matriz=[{5,4}, , matriz2=[{3,2},	n=2
* 	  {6,7}],	    {1,8}], 
* Resultado: [{8,6},
*	      {7,15}]
*/
int** sumarMatrices(int** matriz, int** matriz2, int n){
	int** suma=(int **)malloc(sizeof(int*)*n);
	int i,j;
	for(i=0;i<n;i++){
		suma[i]=(int *)malloc(sizeof(int)*n);	
		for(j=0;j<n;j++){
			suma[i][j]=matriz[i][j]+matriz2[i][j];				
		}
	}
	return suma;
}

/*
* Resta dos matrices de tamaño NxN, y retorna una matriz resultado de la misma dimensión.
* matriz=[{5,4}, , matriz2=[{3,2},	n=2
* 	  {6,7}],	    {1,8}], 
* Resultado: [{2,2},
*	      {5,-1}]
*/
int** restarMatrices(int** matriz, int** matriz2, int n){
	int** resta=(int **)malloc(sizeof(int*)*n);
	int i,j;
	for(i=0;i<n;i++){
		resta[i]=(int *)malloc(sizeof(int)*n);	
		for(j=0;j<n;j++){
			resta[i][j]=matriz[i][j]-matriz2[i][j];				
		}
	}
	return resta;
}

/*
* Crea y retorna un array de tamaño N, a partir de una fila dada de una matriz.
* Matriz=[{0,5},{2,7}], i=1, n=2
* Resultado: [{2,7}]
*/
int* extraerFila(int** matriz, int i,int n){
	int j;
	int * fila=(int *)malloc(sizeof(int)*n);
	for(j=0;j<n;j++){
		fila[j]=matriz[i][j];
	}
	return fila;
}
/*
* Crea y retorna un array de tamaño N, a partir de una columna dada de una matriz.
* Matriz=[{0,5},{2,7}], j=1, n=2
* Resultado: [{5,7}]
*/
int* extraerColumna(int** matriz, int j, int n){
	int i;
	int * columna=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		columna[i]=matriz[i][j];
	}
	return columna;
}
/*
* Multiplica cada elemento de ambos arrays y retorna la suma total de los productos.
* fila=[{2,5,6}], columna=[{3,7,8}], n=3
* Resultado: 2*3 + 5*7 + 6*8 = 6 + 35 + 48 = 89
*/
int obtenerSumaProducto(int* fila, int* columna, int n){
	int suma=0;
	int j;
	for(j=0;j<n;j++){
		suma+=fila[j]*columna[j];
	}
	return suma;	
}

/*
* Multiplica dos matrices de tamaño NxN. Retornando una matriz resultado de la misma dimensión.
* matriz=[{5,7},	, matriz2=[{2,3} 	, n=2
*     	  {4,9}]		   {3,4}]
*
* Resultado: [{31,43},
	      {35,48}]
*/
int** multiplicarMatrices(int** matriz, int** matriz2, int n){
	int** producto=(int **)malloc(sizeof(int*)*n);
	int* fila=(int *)malloc(sizeof(int)*n);
	int* columna=(int *)malloc(sizeof(int)*n);
	int i,j;
	for(i=0;i<n;i++){
		producto[i]=(int *)malloc(sizeof(int)*n);	
		for(j=0;j<n;j++){
			fila=extraerFila(matriz,i,n);
			columna=extraerColumna(matriz2,j,n);
			producto[i][j]=obtenerSumaProducto(fila,columna,n);				
		}
	}
	return producto;
}

/*
* Crea y muestra dos matrices de tamaño NxN, elegido por el usuario, cuyos elementos 
* son números aleatorios entre 0 y 9. Ademas, se muestra el resultado de su suma, resta y producto entre ellas.
*/
void mostrarAzarDuo(){
	int n;
	int **matriz;
	int **matriz2;
	int **suma;
	int **resta;
	int **producto;
	n=ingresarTamano();
	printf("\n Matriz #1 de números aleatorios entre 0 y 9 de tamaño %dx%d\n\n",n,n);
	matriz=rellenarMatriz(n,true,true); 	
	imprimirMatriz(matriz,n);
	printf("\n\n Matriz #2 de números aleatorios entre 0 y 9 de tamaño %dx%d\n\n",n,n);
	matriz2=rellenarMatriz(n,true,false); 	
	imprimirMatriz(matriz2,n);
	suma=sumarMatrices(matriz,matriz2,n);
	resta=restarMatrices(matriz,matriz2,n);
	producto=multiplicarMatrices(matriz,matriz2,n);
	printf("\n\n La suma de las dos matrices es: \n\n");
	imprimirMatriz(suma,n);
	printf("\n\n La resta de las dos matrices es: \n\n");
	imprimirMatriz(resta,n);
	printf("\n\n El producto de las dos matrices es: \n\n");
	imprimirMatriz(producto,n);
						
}

/*
* Muestra un menú que permite elegir entre distintas opciones al usuario.
* Ejecutando la acción que decida el usuario.
*/
bool mostrarMenuPpal(){
	int opcion;
	printf("\n Nota: Las matrices tendran tamaño 8x8 como máximo");
	printf("\n 1. Imprime una matriz con todos los elementos en (1).");
	printf("\n 2. Imprime una matriz de números aleatorios entre 0 y 9.");
	printf("\n 3. Imprime dos matrices de números aleatorios entre 0 y 9, y muestra: la suma, resta y producto.");
	printf("\n _. Salir del programa");
	printf("\n Seleccione una de las anteriores opciones: ");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:
			mostrarUnos();
			printf("\n______________________________________________________________________________________\n");			
			return true;
			break;
		case 2:
			mostrarAzar();
			printf("\n______________________________________________________________________________________\n");			
			return true;
			break;
		case 3:
			mostrarAzarDuo();
			printf("\n______________________________________________________________________________________\n");			
			return true;
			break;
		default:
			printf("\n\n PROGRAMA TERMINADO CON ÉXITO\n\n");
			return false;
			break;			
	}
}

