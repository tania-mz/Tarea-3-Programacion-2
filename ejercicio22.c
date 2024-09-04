/*
- Fecha de publicación: 03/09/24
- Hora: 23:10
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

//Funcion que imprime la cantidad de espacios especificados
void PrintSpaces(int amount, int index){
    if(index < amount){
        printf(" ");
        PrintSpaces(amount, index+1);
    }
}

//Funcion que imprime la cantidad de letras "P" especificadas
void PrintP(int amount, int index){
    if(index < amount){
        printf("P");
        PrintP(amount, index+1);
    }
}

//Funcion que dibuja el triangulo correspondiente a la salida por pantalla
void PrintTriangle(int amountP, int amountSpaces, int row){
    if(row < 7){
        PrintSpaces(amountSpaces, 0);
        PrintP(amountP, 0);
        PrintSpaces(amountSpaces, 0);
        printf("\n");
        PrintTriangle(amountP-2, amountSpaces+1, row+1);
    }
}

int main(){
    printf("Este programa imprime un patron determinado en pantalla.\n\n");
    //Se llama a la funcion PrintPattern con los dos terminos iniciales y un index
    PrintTriangle(13, 33, 0);
    return 0;
}