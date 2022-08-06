#************************************************* 
#* Taller C. 
#* Fecha: 2 Agosto de 2022
#* Autor: Juan Manuel Vasquez Mejia
#* Asignatura: Computaciòn paralela y distribuida
#**********************************/

#/*********
#* 
#*  Programa que dado un número ingresado por el usuario, 
#*  muestra un triángulo rectángulo vertical representado por asteriscos,
#*  el cual tiene de tamaño el número registrado anteriormente.
#*  Máximo 14 lineas.
#******/

GCC=gcc
FLAGS=-ansi -pedantic -Wall
MATHFLAG=-lm

PROGRS= ejercicio5_main

all:$(PROGRS)

ejercicio5_main:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c ejercicio5_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o ejercicio5_lib.o $(MATHFLAG)
clean:
	$(RM) *.o $(PROGRS)	 
