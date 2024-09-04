/*
- Fecha de publicación: 03/09/24
- Hora: 23:12
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

//Funcion que imprime una cantidad de espacios determinada
void PrintSpaces(int amount, int index){
    if(index < amount){
        printf(" ");
        PrintSpaces(amount, index+1);
    }
}

//Funcion que imprime una cantidad de letras determinada, la letra se saca por el caracter en el codigo ascii
void Print(int amount, int index, int letter){
    if(index < amount){
        printf("%c", letter);
        Print(amount, index+1, letter);
    }
}

//Imprimir triangulo invertido con las letras diferentes 
void PrintTriangle(int amountLetter, int amountSpaces, int letter){
    if(amountSpaces < 7){
        PrintSpaces(amountSpaces, 0),
        Print(amountLetter, 0, letter);
        printf("\n");
        PrintTriangle(amountLetter-2, amountSpaces+1, letter-2);
    }
}

int main(){
    printf("Este programa imprime un patron determinado en pantalla.\n\n");
    //Se llama a la funcion PrintPattern con los dos terminos iniciales y un index
    PrintTriangle(13, 0, 80);
    return 0;
}