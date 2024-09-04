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

#include<stdio.h>
#include <windows.h> 

void PrintSpaces(int counter){
    if(counter > 0){
        printf(" ");
        PrintSpaces(counter-1);
    }
}

void PrintLetter(int counter){
    if(counter > 0){
    PrintSpaces(40-counter);
    printf("A");
    PrintSpaces((counter-1)*2);
    printf("A\n");
    Sleep(300);
    system("cls");
    PrintLetter(counter-1);
    }
}

int main(){
    Sleep(300);
    system("cls");
    PrintLetter(40);
    return 0;
}