#include <stdio.h>

long int Factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * Factorial(n - 1);
  }
}

/*
Función CatalanSerie que imprimirá los primeros 'number' términos de la serie de números de Catalán.
- value1 es el valor actual de la serie de Catalán a imprimir
- value2 es el índice actual para calcular el siguiente valor de la serie de Catalán
- counter es el contador de términos impresos hasta el momento
- number es el total de términos que se desean imprimir
*/
void CatalanSerie(long long int value1, long long int value2, long long int counter, int number) {
    if (counter < number) {
        printf("%lli, ", value1);
        CatalanSerie((Factorial(2 * value2)) / ((Factorial(value2)) * Factorial(value2 + 1)), value2 + 1, counter + 1, number);
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