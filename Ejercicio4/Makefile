#************************************************* 
#* Taller C. 
#* Fecha: 2 Agosto de 2022
#* Autor: Juan Manuel Vasquez Mejia
#* Asignatura: Computaciòn paralela y distribuida
#**********************************/

#/*********
#* 
#*  Programa que muestra los primeros X números naturales.
#*
#******/

GCC=gcc
FLAGS=-ansi -pedantic -Wall
MATHFLAG=-lm

PROGRS= ejercicio4_main

all:$(PROGRS)

ejercicio4_main:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c ejercicio4_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o ejercicio4_lib.o $(MATHFLAG)
clean:
	$(RM) *.o $(PROGRS)	
