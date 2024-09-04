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

#include <stdio.h>
#include <math.h>

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

double GetSen(double x, int times, int index){
    if (index > times){
        return 0;
    } else {
        return (pow(-1 , index) * pow(x,2 * index + 1)) / CalculateFactorial(2 * index + 1, 1) + GetSen(x, times, index + 1);
    }
    
}

int main(){
    //Inicializamos las variables x y terms, donde guardaremos el valor ingresado por el usuario
    double x = 0;
    int terms = 0; 

    printf("Este programa calcula por serie de taylor la funcion senx."); //Explicamos brevemente lo que hace el programa
    printf("\nIngrese el valor de x que para reemplazar en la serie de taylor: "); //Le pedimos al usuario que ingrese el valor de x que desea averiguar
    scanf("%lf", &x); //Le asignamos el valor ingresado a la variable x
    printf("Ingrese el numero de terminos de la serie que desea sumar (numero entero positivo): ");
    scanf("%i", &terms);

    printf("%lf", GetSen(x, terms, 0));

    return 0;
}