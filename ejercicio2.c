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
  Este programa muestra en pantalla los números de la serie de Fibonacci sin pasar el número 100, y luego muestra la suma de estos numeros
  
  number1: Se usa para guardar el primer número de la serie Fibonacci (0)
  number2: Se usa para guardar el segundo número de la serie Fibonacci (1)
  suma: Se usa para ir acumulando la suma entre los números de la serie*/

#include <stdio.h>

void Fibonacci(int number1, int number2, int suma) { // Se crea la función Fibonacci con la cual calcularemos la serie y la mostraremos en pantalla
    if (number1 < 10000){
        if (number2 > 100){ // Se agrega esta condición para que el ultimo número impreso en la serie no tenga coma final
            printf("%i y su suma es: %i", number1, suma);
        }
        else{
            printf("%i, ", number1);
            Fibonacci(number2, number2 + number1, (suma + number2)); // Se hace el llamado recursivo
        }
    }
}

int main(){
    printf("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\n");//Imprimimos la salida en pantalla que se da en el diseño planteado
    printf("Los numeros a sumar son:\n");
    Fibonacci(0, 1, 0);//Se hace el llamado de la función entregandole como parametros los primeros numeros de la serie fibonacci y un acumulador que guardará la suma
    return 0;
}