/*- Hora:
- Versión de su código: 1.0
- Autor. Ing(c) Tania Marin Zamora
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C11
- Compilador utilizado: MinGW 6.3.0-1
- Versión del S.O: Windows 11 Home Single Language V23H2
- Presentado a: Doctor Ricardo Moreno Laverde
- Asignatura IS284 Programación II
  Universidad Tecnológica de Pereira
  Programa de Ingeniería de Sistemas y Computación*/

#include<stdio.h>

/*
Función TriangularSucesion que imprimirá los términos de la sucesión triangular.
- value1 es el valor actual de la sucesión a imprimir.
- value2 es el siguiente valor de la sucesión triangular.
- counter es el contador de términos impresos hasta el momento.
- number es el total de términos que se desean imprimir.
*/
void TriangularSucesion(int value1, int value2, int counter, int number){
    if(counter < number){
        printf("%i, ", value1);
        TriangularSucesion(value2, (value2-value1)+(value2+1), counter + 1, number);
    } else {
        printf("%i.", value1);
    }
}

int main(){
    // Inicializamos la variable number que guardará la cantidad de términos que el usuario desea ver
    int number = 0;
    printf("Digite el número de términos deseados: ");
    scanf("%i", &number);
    TriangularSucesion(1, 3, 1, number);
    return 0;
}