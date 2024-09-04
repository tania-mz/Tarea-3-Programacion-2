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
  Este programa toma un numero ingresado por el usuario y calcula la suma de los factoriales de los numeros anteriores a este
  
  number: numero ingresado por el usuario
  suma: se usa para ir acumulando la suma de los factoriales*/

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

long int SumFactorial(int number, int index, int suma){
    if(index <= number){
        suma = suma + CalculateFactorial(index, 1);
        return SumFactorial(number, index+1, suma);
    }
    else{
        return suma;
    }
}

int main(){
    int number = 0;

    printf("Este programa recibe un numero entero positivo y muestra la suma de los factoriales de todos los numeros desde 0 hasta el numero ingresado.\n");
    printf("Ingrese un numero: ");
    scanf("%i", &number);

    if(number < 0){
        printf("El numero ingresado no es valido. Vuelva a intentarlo");
    }
    else {
        printf("La suma de los factoriales hasta %i es %li", number, SumFactorial(number, 0, 0));
    }

    return 0;
}