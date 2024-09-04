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
  Este programa muestra en pantalla la cantidad de numeros que el usuario quiera de la serie de Lucas
  
  number1: Se usa para guardar el primer número de la serie Lucas (2)
  number2: Se usa para guardar el segundo número de la serie Lucas (1)
  amount: Se usa para guardar la cantidad de elementos que el usuario desea ver de la serie de Lucas
  counter: Se usa para llevar una cuenta de los números impresos*/

#include <stdio.h>

void Lucas(int number1, int number2, int amount, int counter) { // Se crea la función Lucas con la cual calcularemos la serie y la mostraremos en pantalla
    if(counter < amount){
            printf("%i, ", number1);
            Lucas(number2, number2 + number1, amount, (counter + 1)); // Se hace el llamado recursivo    
        }
        else{
            printf("%i.", number1); //Para que imprima el último número con un punto y se cumpla el diseño de pantalla
        }
    }

int main(){

    int amount = 0;//Se inicializa la variable amount en 0
    printf("Este programa presenta la cantidad de elementos deseados de la serie de Lucas.\n");//Imprimimos la salida en pantalla que se da en el diseño planteado
    printf("Ingrese cuantos elementos desea ver: "); //Se le pide al usuario ingresar la cantidad y se lee el valor
    scanf("%i", &amount);
    Lucas(2, 1, amount, 1);//Se hace el llamado de la función entregandole como parametros los primeros numeros de la serie Lucas, la cantidad a ver y un contador
    return 0;
}