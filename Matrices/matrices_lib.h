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

#ifndef MATRICES_LIB_H_INCLUDED
#define MATRICES_LIB_H_INCLUDED

typedef enum { false, true } bool;

void darBienvenida();

int ingresarTamano();

int** rellenarMatriz(int n, bool azar,bool times);

void imprimirMatriz(int** matriz,int n);

void mostrarUnos();

void mostrarAzar();

int** sumarMatrices(int** matriz, int** matriz2, int n);

int** restarMatrices(int** matriz, int** matriz2, int n);

int* extraerFila(int** matriz, int i,int n);

int* extraerColumna(int** matriz, int j, int n);

int obtenerSumaProducto(int* fila, int* columna, int n);

int** multiplicarMatrices(int** matriz, int** matriz2, int n);

void mostrarAzarDuo();

bool mostrarMenuPpal();


#endif
