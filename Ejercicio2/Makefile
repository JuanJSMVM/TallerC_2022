#************************************************* 
#* Taller C. 
#* Fecha: 2 Agosto de 2022
#* Autor: Juan Manuel Vasquez Mejia
#* Asignatura: Computaciòn paralela y distribuida
#**********************************/

#/*********
#* 
#*  Programa que convierte los dias especificados en años, semanas y dias.
#*
#******/
GCC=gcc
FLAGS=-ansi -pedantic -Wall
MATHFLAG=-lm

PROGRS= ejercicio2_main

all:$(PROGRS)

ejercicio2_main:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c ejercicio2_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o ejercicio2_lib.o $(MATHFLAG)
clean:
	$(RM) *.o $(PROGRS)	
