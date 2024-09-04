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
  Programa de Ingeniería de Sistemas y Computación*/
  
#include <stdio.h>

long int CalculateFactorial(int number, long int factorial){ //Se crea la funcion CalculateFactorial
    if(number == 0){
        return 1;
    }
    if (number == 1){
        return factorial;
    }
    else{
        return CalculateFactorial(number-1, number*factorial);
    }
}

/*
Función CatalanSerie que imprimirá los primeros 'number' términos de la serie de números de Catalán.
- value1 es el valor actual de la serie de Catalán a imprimir
- value2 es el índice actual para calcular el siguiente valor de la serie de Catalán
- counter es el contador de términos impresos hasta el momento
- number es el total de términos que se desean imprimir
*/
void CatalanSerie(long int value1, long int value2, long long int counter, int number) {
    if (counter < number) {
        printf("%lli, ", value1);
        CatalanSerie((CalculateFactorial(2 * value2, 1)) / ((CalculateFactorial(value2, 1)) * CalculateFactorial(value2 + 1, 1)), value2 + 1, counter + 1, number);
    } else {
        printf("%lli.", value1);
    }
}

int main() {
    // Inicializamos la variable number que guardará la cantidad de términos que el usuario quiere ver
    int number = 0;
    printf("Digite el número de términos deseados: ");
    scanf("%i", &number);
    CatalanSerie(1, 1, 1, number);
    return 0;
}