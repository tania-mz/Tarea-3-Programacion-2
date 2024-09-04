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

#include <stdio.h> // Librería que contiene las funciones estándar para entrada y salida de datos
#include <math.h> // Librería con funciones matemáticas como el pow()

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

double GetSenh(double x, int limit, int k) {
    if (k <= limit) { // Mientras el limite inferior no sea mayor al limite superior se continúa con la recursión
        return (pow(x, (2 * k) + 1) / CalculateFactorial((2 * k) + 1, 1)) + GetSenh(x, limit, k + 1); // Llamado recursivo
        // Suma el término de x con los valores de k actuales y vuelve a llamar a la función con (k + 1)
    } else {
        return 0; // Cuando el límite sea pasado no se evalúa más, sino que devuelve 0 para no afectar a la suma
    }// Fin if (k <= limit)
} // Fin función GetSenh

int main() {
    double x = 0; // Variable que va a contener el número ingresado y se mandará como parametro a la función factorial
    int limit = 0; // Variable que guarda el límite superior de la sumatoria par calcular el valor aproximado de la exponencial

    // Pedimos el número a calcular y lo guardamos en la variable x
    printf("\nIngrese el valor de x en radianes a evaluar: "); 
    scanf("%lf", &x);
    // Pedimos el número de terminos para evaluar la serie de taylor y lo guardamos en limit
    printf("Ingrese el n%cmero de terminos con los que desea calcular: ", 163);
    scanf("%d", &limit);

    // Llamamos a la función GetSenh e imprimimos el valor que devuelve
    printf("%lf", GetSenh(x, limit, 0));

    return 0;

}