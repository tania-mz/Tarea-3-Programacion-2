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

void PrintZ(int amount, int index){
    if(index < amount){
        printf("Z");
        PrintZ(amount, index+1);
    }
}

void PrintTriangle(int amountZ, int amountSpaces1, int amountSpaces2, int row){
    if(row < 10){
        PrintSpaces (amountSpaces1, 0);
        PrintZ (amountZ, 0);
        PrintSpaces (amountSpaces2, 0);
        PrintZ (amountZ, 0);
        printf("\n");
        PrintTriangle(amountZ, amountSpaces1+1, amountSpaces2-2, row+1);
    } else {
        PrintSpaces (amountSpaces1, 0);
        PrintZ (amountZ, 0);
    }
}

int main(){
    printf("Este programa imprime un patron determinado en pantalla.\n");
    //Se llama a la funcion PrintPattern con los dos terminos iniciales y un index
    PrintTriangle(1, 0, 17, 1);
    return 0;
}