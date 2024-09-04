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
  Este programa calcula el factorial de un numero ingresado por el usuario
  
  number: Se usa para guardar el numero ingresado por el usuario
  factorial: Se usa para ir guardando un acumulado del factorial del numero*/

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

int main(){
    int number = 0; //Se inicializa la variable number en 0

    printf("Ingrese el numero del cual quiere saber el factorial: "); //Se le pide al usuario que ingrese el numero
    scanf("%i", &number);
    printf ("El factorial de %i es %li", number, CalculateFactorial(number, 1)); //Se hace el llamado de la funcion Calculate Factorial
    
    return 0;
}