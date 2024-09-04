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

#include <stdio.h> // Se importa la librería estandar de C
#include <math.h> // Se importa la libreria que permite hacer calculos matematicos 

// Se define el prototipo de las funciones que estarán en el código
float CalculateFactorial( float );
float CalculateSum( float, float, float, float);
void PrintBell( int, int );

// Función principal
int main(){
 
 int number=0; // Se declara la variable number que almacenará la cantidad de terminos que el usuario desea ver.

 printf( "\nIngrese el numero de terminos que desea generar: " );
 scanf( "%i", &number ); // Se almacena en la variable number la cantidad de terminos ingresados por teclado

 printf( "Los primeros %i terminos de la serie de Bell son: ", number );
 PrintBell( 1, number );//se llama a la función PrintBell con los valores iniciales de la serie, 1 para iniciar el contador y number como parámetros
 return 0;
}

// Se crea la función Factorial con un parámetro de tipo entero
// number: se encarga de hacer el factorial de un numero
float CalculateFactorial( float number ){
 if( number == 0 ){
    return 1;
 }else{
    return number * CalculateFactorial( number-1 );
 } 
} 

 /*se crea la función CalculateSum con cuatro parámetros de tipo flotante,
 k, n, result y limit que se encarga de hacer la sumatoria necesaria para hallar cada termino de la serie
 k: es el termino de la sumatoria, se inicializa en 0
 n: es el exponente de k, se inicializa en 1
 result: es el resultado de la sumatoria, se inicializa en 0
 limit: es el limite de la sumatoria, se inicializa en 100
 */

float CalculateSum( float k, float n, float result, float limit ){
    // Se le pone un limite a la sumatoria, sabiendo que entre mayor sea este, mas aproximado estará el resultado
    if( k <= limit ){
        return CalculateSum( ( k + 1 ), n, ( result + ( pow( k, ( n-1) ) / CalculateFactorial( k ) ) ), limit );
    }else{
        return ( result * ( 1 / 2.718281828459045235 ) );
    }
}

 // Se crea la función PrintBell con dos parámetros de tipo entero, primerNumero y TotalTerms
 // PrimeNumber: es el primer termino de la serie de Bell, se inicializa en 1
 // TotalTerms: es la cantidad de terminos de la serie de Bell que el usuario desea ver, se inicializa en 0

void PrintBell( int PrimeNumber, int TotalTerms ){

    //se crea el if con la condición de parada de la función, para que solo se impriman los numeros menores a TotalTerms (ingresado por el usuario)
    if( PrimeNumber < TotalTerms ){
        printf( "%g ", CalculateSum( 0, PrimeNumber, 0, 100 ) );
        //se usa el formato %g para que el resultado sea redondeado y no se imprima con valores decimales
        PrintBell( ( PrimeNumber + 1 ), TotalTerms );
    }
    else{
        printf( "%g", CalculateSum( 0, PrimeNumber, 0, 100 ) );
    }
}



