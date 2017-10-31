#include <stdio.h>
/*
Ejemplo de manejo de punteros que guardan la localidad en memoria
para despues poder accesar al dato o la direccion con el simbolo&
y * antepuesto para declarar como puntero a la variable.
para compilar y obtener las instrucciones en ensamblador se compila con:

gcc -o nombre_ensamblador_output.s -S nombre_de_la_aplicacion.c

//esta linea de arriba generará un archivo estructurado en ensamblador
//y para compilar este archivo en ensamblador se utiliza la siguiente línea:

gcc -o nombre_del_ejecutable nombre_ensamblador_output.s
*/
int main()
{
   int num = 10;

   int *p;

   *p = num;

   printf("\nLa direccion de la variable es: %p", &num);
   printf("\nEl valor de la variable es: %d",*p);
   printf("\n");
   return 0;
}