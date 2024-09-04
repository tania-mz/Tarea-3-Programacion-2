/*
- Fecha de publicación:
- Hora:
- Versión de su código: 1.0
- Autor. Ing(c) Tania Marin Zamora
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C11
- Compilador utilizado: MinGW 6.3.0-1
- Versión del S.O: Windows 11 Home Single Language V23H2
- Presentado a: Doctor Ricardo Moreno Laverde
- Asignatura IS284 Programación II
  Universidad Tecnológica de Pereira
  Programa de Ingeniería de Sistemas y Computación
  Este programa toma un numero ingresado por el usuario y lo imprime al reves
  
  number: Se usa para guardar el numero ingresado por el usuario*/

#include <stdio.h>

void PrintNumber(int number, int boolean) {
    if (boolean == 1) {
        if (number < 10) {
            printf("%i", number);
        } else {
            printf("%i", number % 10);
            PrintNumber(number / 10, 1);
        }
    } // Función PrintNumber con la cual imprimimos el número al revés
    else if (number % 10 == 0) { // Condición extra para que los ceros a la izquierda no cuenten
        PrintNumber(number, 1);
    } else {
        if (number < 10) {
            printf("%i", number);
        } else {
            printf("%i", number % 10);
            PrintNumber(number / 10, boolean);
        }
    }
}

int main() {
    int number = 0; // Se inicializa la variable number en 0

    printf("Este programa lee desde el teclado un numero entero y lo imprime al reves.\n");
    printf("Entre el numero: "); // Se le pide al usuario ingresar un número 
    scanf("%i", &number);

    if (number < 0) {
        printf("-");
        PrintNumber(number * -1, 0);
    } else {
        PrintNumber(number, 0);
    }

    return 0;
}
