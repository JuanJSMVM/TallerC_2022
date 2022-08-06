#************************************************* 
#* Taller C. 
#* Fecha: 2 Agosto de 2022
#* Autor: Juan Manuel Vasquez Mejia
#* Asignatura: Computaciòn paralela y distribuida
#**********************************/

#/*********
#* 
#*  Programa que cálcula la distancia entre dos puntos dados.
#*
#******/

GCC=gcc
FLAGS=-ansi -pedantic -Wall
MATHFLAG=-lm

PROGRS= ejercicio3_main

all:$(PROGRS)

ejercicio3_main:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c ejercicio3_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o ejercicio3_lib.o $(MATHFLAG)
clean:
	$(RM) *.o $(PROGRS)	
