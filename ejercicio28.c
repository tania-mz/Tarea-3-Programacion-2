/*
- Fecha de publicación:
- Hora:
- Versión de su código: 1.0
- Autor: Ing(c) Tania Marin Zamora
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C11
- Compilador utilizado: MinGW 6.3.0-1
- Versión del S.O: Windows 11 Home Single Language V23H2
- Presentado a: Doctor Ricardo Moreno Laverde
- Asignatura IS284 Programación II
  Universidad Tecnológica de Pereira
  Programa de Ingeniería de Sistemas y Computación
  Este programa imprime un patrón determinado en pantalla
*/

#include <stdio.h>

// Función que imprime una cantidad especificada de espacios
void PrintSpaces(int amount, int index){
    if(index < amount){
        printf(" ");
        PrintSpaces(amount, index+1);
    }
}

// Función que imprime una cantidad especificada de caracteres 'A'
void PrintA(int amount, int index){
    if(index < amount){
        printf("A");
        PrintA(amount, index+1);
    }
}

// Función recursiva que imprime un triángulo de caracteres 'A'
// dependiendo del valor del parámetro 'bool', se decide si expandir o contraer el triángulo
void PrintTriangle(int amountA, int amountSpaces, int bool){
    if(bool == 1){ // Fase de contracción del triángulo
        if(amountA > 0){
            PrintSpaces(amountSpaces, 0);
            PrintA(amountA, 0);
            printf("\n");
            PrintTriangle(amountA-1, amountSpaces+1, 1); // Reduce la cantidad de 'A' y aumenta los espacios
        }
    }
    else if(amountA < 6){ // Fase de expansión del triángulo
        PrintSpaces(amountSpaces, 0);
        PrintA(amountA, 0);
        printf("\n");
        PrintTriangle(amountA+1, amountSpaces-1, 0); // Incrementa la cantidad de 'A' y reduce los espacios
    }
    else{
        PrintTriangle(amountA, amountSpaces, 1); // Transición a la fase de contracción
    }
}

int main(){
    printf("Este programa imprime un patron determinado en pantalla.\n\n");
    // Se llama a la función PrintTriangle con los valores iniciales
    PrintTriangle(1, 39, 0);
    return 0;
}
