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

void PrintSpaces(int amount, int index){
    if(index < amount){
        printf(" ");
        PrintSpaces(amount, index+1);
    }
}

void PrintA(int amount, int index){
    if(index < amount){
        printf("A");
        PrintA(amount, index+1);
    }
}

void PrintFigure(int amountZ, int amountSpaces, int boolean) {
    if (boolean == 0) {
        if (amountZ <= 3) {
            PrintA(amountZ, 0);
            PrintSpaces(amountSpaces, 0);
            PrintA(amountZ, 0);
            printf("\n");
            PrintFigure(amountZ + 1, amountSpaces - 2, boolean);
        } else if (amountZ == 4) {
            PrintA(7, 0);
            printf("\n");
            PrintFigure(amountZ - 1, amountSpaces + 2, 1);
        } else {
            PrintFigure(amountZ, amountSpaces, 1);
        }
    } else if (amountZ > 0) {
        PrintA(amountZ, 0);
        PrintSpaces(amountSpaces, 0);
        PrintA(amountZ, 0);
        printf("\n");
        PrintFigure(amountZ - 1, amountSpaces + 2, 1);  
    }
}

int main(){
    printf("Este programa imprime un patron determinado en pantalla.\n");
    //Se llama a la funcion PrintPattern con los dos terminos iniciales y un index
    PrintFigure(1, 5, 0);
    return 0;
}