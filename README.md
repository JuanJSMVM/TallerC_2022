# Taller de Introducción a C.

# Descripción
El taller consiste en una serie de 10 ejercicios. Presentados a continuación:

1. Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los
dos enteros.

>Datos de prueba :
>
>Introduzca el primer entero: 25
>
>Introduzca el segundo entero: 15
>
>Salida esperada:
>
>Producto de los dos enteros anteriores = 375

2. Escribe un programa en C para convertir los días especificados en años, semanas y días.
Nota: Ignore el año bisiesto.

>Datos de prueba :
>
>Número de días : 1329
>
>Salida esperada :
>Años: 3
>Semanas 33
>Días: 3
3. Escribe un programa en C para calcular la distancia entre los dos puntos.
>Datos de prueba :
>Entrada x1: 25
>Entrada y1: 15
>Entrada x2: 35
>Entrada y2: 10
>Resultado esperado:
>Distancia entre dichos puntos: 11.1803
4. Escribe un programa en C para mostrar los 10 primeros números naturales.
>Salida esperada :
>1 2 3 4 5 6 7 8 9 10
5. Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un
asterisco. La cantidad de líneas del triangulo es ingresada por consola por el usuario, y el valor
máximo de líneas es de 14.
>El patrón como :
>
>\*
>
>\*\*
>
>\*\*\*
>
>\*\*\*\*
6. Escribe un programa que imprima una matriz de “1”, de tamaño NxN. El tamaño es
indicado por el usuario y debe ser siempre menor que 8.

7. Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9, de
de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.

8. Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
Finalmente, se presenta la suma de las dos matrices.

9. Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
Finalmente, se presenta la resta de las dos matrices.

10. Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
Finalmente, se presenta el producto de las dos matrices.
# Contenido.
- Cada carpeta contiene el ejercicio según su nombre. Exceptuando los ejercicios 6, 8,9 y 10, que son unificados en la carpeta "Matrices".
- Cada carpeta esta compuesta de los siguientes archivos:
    >
    >\*_main.c: Es la función principal que ejecuta el usuario para realizar las operaciones que realiza el programa.
    >
    >\*_lib.h: Declara las distintas funciones y estructuras a usar en los programas.
    >
    >\*_lib.c: Contiene la implementación de cada una de las funciones contenidas en el archivo con extensión .h
    >
    >Makefile: Contiene las órdenes que debe ejecutar la utilidad make , así como las dependencias entre los distintos módulos del programa.
# Modo de uso.
1. Abrir la consola.
2. Moverse a la carpeta del programa que desea ejecutar: `cd <nombre_de_carpeta>`
3. Ejecutar el siguiente comando: `make *_main`. Siendo '\*' el nombre del archivo main de ese programa.
4. Usar el ejecutable usando: `./*_main`. Siendo '\*' el nombre del archivo main del ejercicio.
