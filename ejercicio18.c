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
  Este programa imprime un patron determinado en pantalla*/

#include <stdio.h>

void PrintPattern(int column1, int column2, int column3, int index2) { //Se crea la funcion PrintPattern
    if (column1 <= 9) {
        if (index2 <= 3) {
            printf("%i  %i  %i\n", column1, column2, column3);
            PrintPattern(column1 + 1, column2, column3 + 1, index2 + 1);
        } else {
            PrintPattern(column1, column2 + 1, 1, 1);
        }
    }
}

int main(){
    printf("Este programa imprime un patron determinado en pantalla.\n");
    PrintPattern(1, 1, 1, 1); //Se llama a la funcion PrintPattern con los dos terminos iniciales y un index
   
    return 0;
}