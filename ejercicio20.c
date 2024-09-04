/*
- Fecha de publicación: 03/09/24
- Hora: 23:16
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

void PrintTriangle(int amountA, int amountSpaces, int row){
    if(row <= 80){
        PrintSpaces (amountSpaces, 0);
        PrintA (amountA, 0);
        printf("\n");
        PrintTriangle(amountA+1, amountSpaces-1, row+1);
    }
}

int main(){
    printf("Este programa imprime un patron determinado en pantalla.\n");
    //Se llama a la funcion PrintPattern con los dos terminos iniciales y un index
    PrintTriangle(1, 79, 1);
    return 0;
}