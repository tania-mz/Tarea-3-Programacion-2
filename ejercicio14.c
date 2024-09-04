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
  Este programa muestra las tablas de multiplicar del 1 al 10 recursivamente
  
  tables: Para guardar que tabla se está imprimiendo
  index: Para saber por cual numero se esta multiplicando */

#include <stdio.h>

void ShowTables(int table, int index) { //Se crea la funcion ShowTables para imprimir las tablas
    if (table <= 10) {
        if (index <= 10) {
            printf("%i x %i = %i\n", table, index, table * index);
            ShowTables(table, index + 1);
        } else {
            printf("\n");
            ShowTables(table + 1, 1);
        }
    }
}

int main(){

    printf("Este programa muestra las tablas de multiplicar del 1 al 10 recursivamente\n\n"); //Descripcion de la funcionalidad del programa
    ShowTables (1, 1); //Se hace el llamado de la funcion ShowTables
    
    return 0;
}