#************************************************* 
#* Taller C. 
#* Fecha: 2 Agosto de 2022
#* Autor: Juan Manuel Vasquez Mejia
#* Asignatura: Computaciòn paralela y distribuida
#**********************************/

#/*********
#* 
#*  Programa que dada una matriz NxN (siendo N un número menor a 8 y indicado por el usuario):
#*	- Imprima una matriz con todos los elementos en "1"
#*	- Imprima una matriz de números aleatorios entre 0 y 9.
#*	- Imprima dos matrices de números aleatorios entre 0 y 9, mostrando:
#*		* Su suma
#*		* Su producto
#*		* Su resta
#******/
GCC=gcc
FLAGS=-ansi -pedantic -Wall 
MATHFLAG=-lm

PROGRS= matrices_main

all:$(PROGRS)

matrices_main:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c matrices_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o matrices_lib.o $(MATHFLAG)
clean:
	$(RM) *.o $(PROGRS)	 
