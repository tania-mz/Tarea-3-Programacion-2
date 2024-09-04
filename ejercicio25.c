/*
- Fecha de publicación: 03/09/24
- Hora: 23:01
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

//Funcion que imprime los espacios que se le entregan como parametro
void PrintSpaces(int amount, int index){
    if(index < amount){
        printf(" ");
        PrintSpaces(amount, index+1);
    }
}

//Funcion que imprime las letras "Z" que se le entregan como parametro
void PrintZ(int amount, int index){
    if(index < amount){
        printf("Z");
        PrintZ(amount, index+1);
    }
}

//Funcion que imprime la forma del diamante, recibe la cantidad de espacios, letras "Z" y boolean que sirve para saber si de imprime la parte de arriba del diamante o la de abajo
void PrintDiamond(int amountZ, int amountSpaces, int boolean) {
    if (boolean == 0) {
        if (amountZ <= 7) {
            PrintSpaces(amountSpaces, 0);
            PrintZ(amountZ, 0);
            printf("\n");
            PrintDiamond(amountZ + 2, amountSpaces - 1, boolean);
        } else {
            PrintDiamond(amountZ, amountSpaces, 1);
        }
    } else if (amountZ > 0) {
        PrintSpaces(amountSpaces, 0);
        PrintZ(amountZ, 0);
        printf("\n");
        PrintDiamond(amountZ - 2, amountSpaces + 1, 1);  
    }
}

int main(){
    printf("Este programa imprime un patron determinado en pantalla.\n\n");
    //Se llama a la funcion PrintPattern con los dos terminos iniciales y un index
    PrintDiamond(1, 9, 0);
    return 0;
}