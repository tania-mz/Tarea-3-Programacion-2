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
  Programa de Ingeniería de Sistemas y Computación*
  Este programa muestra en pantalla los números de la serie de Fibonacci sin pasar el número 10000
  
  number1: Se usa para guardar el primer número de la serie Fibonacci (0)
  number2: Se usa para guardar el segundo número de la serie Fibonacci (1)*/
  
#include <stdio.h>

void Fibonacci(int number1, int number2) { // Se crea la función Fibonacci con la cual calcularemos la serie y la mostraremos en pantalla
    if (number1 < 10000){
        if (number2 > 10000){ // Se agrega esta condición para que el ultimo número impreso en la serie no tenga coma final
            printf("%i", number1);
        }
        else{
            printf("%i, ", number1);
            Fibonacci(number2, number2 + number1); // Se hace el llamado recursivo
        }
    }
}

int main(){
    printf("Este programa presenta la serie de Fibonacci como la serie que comienza con los digitos 1 y 0 y va sumando progresivamente los dos ultimos elementos de la serie, asi:0 1 1 2 3 5 8 13 21 34...");//Imprimimos la salida en pantalla que se da en el diseño planteado
    printf("Para este programa, se presentara la serie de Fibonacci hasta llegar sin sobrepasar el numero 10,000.\n");
    Fibonacci(0, 1);//Se hace el llamado de la función entregandole como parametros los primeros numeros de la serie fibonacci
    return 0;
}