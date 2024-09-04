#include <stdio.h>

/*
Función sumTerms que calcula la suma de productos de números de Motzkin.
- k es el índice actual para la suma
- number es el número total para calcular la suma
*/
int SumTerms(int k, int number);

/*
Función CalculateMotzkin que calcula el número de Motzkin para un índice dado.
- number es el índice del número de Motzkin a calcular
*/
int CalculateMotzkin(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return CalculateMotzkin(number - 1) + SumTerms(0, number);
}

/*
Función sumTerms que calcula la suma de productos de números de Motzkin.
- k es el índice actual para la suma
- number es el número total para calcular la suma
*/
int SumTerms(int k, int number) {
    if (k > number - 2) {
        return 0;
    }
    return CalculateMotzkin(k) * CalculateMotzkin(number - 2 - k) + SumTerms(k + 1, number);
}

/*
Función PrintNumbers que imprime los números de Motzkin desde el índice 'number' hasta 'numberT - 1'.
- number es el índice actual para imprimir
- numberT es el número total de términos a imprimir
*/
void PrintNumbers(int number, int numberT) {
    if (number < numberT-1) {
        printf("%d, ", CalculateMotzkin(number));
        PrintNumbers(number + 1, numberT); 
    } else {
        printf("%d. ", CalculateMotzkin(number));
    }
}

int main() {
    int numberT;
    printf("Digite el número de términos deseados: ");
    scanf("%i", &numberT);
    PrintNumbers(0, numberT);
    return 0;
}