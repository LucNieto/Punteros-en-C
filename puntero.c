#include <stdio.h>
/*
Se imprime la direccion de memoria anteponiendo el simbolo & a la variable.
En el placeholder con %d para imprimir el valor decimal.
Y %p para imprimir la localidad en memoria.

para compilar y obtener las instrucciones en ensamblador se compila con:

gcc -o nombre_ensamblador_output.s -S nombre_de_la_aplicacion.c

//esta linea de arriba generará un archivo estructurado en ensamblador
//y para compilar este archivo en ensamblador se utiliza la siguiente línea:

gcc -o nombre_del_ejecutable nombre_ensamblador_output.s
*/
int main()
{
   int num = 10;
   printf("El valor de la variable es: %d", num);
   printf("\nLa direccion de la variable es: %p", &num);
   printf("\n");
   return 0;
}