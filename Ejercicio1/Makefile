#************************************************* 
#* Taller C. 
#* Fecha: 2 Agosto de 2022
#* Autor: Juan Manuel Vasquez Mejia
#* Asignatura: Computaciòn paralela y distribuida
#**********************************/

#/*********
#* 
#*  Programa que cálcula el producto entre dos números enteros dados.
#*
#******/
GCC=gcc
FLAGS=-ansi -pedantic -Wall
MATHFLAG=-lm

PROGRS= ejercicio1_main

all:$(PROGRS)

ejercicio1_main:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c ejercicio1_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o ejercicio1_lib.o $(MATHFLAG)
clean:
	$(RM) *.o $(PROGRS)	
