#include <stdio.h>
/*
Ejemplo de manejo de arreglos y punteros que guardan la localidad en memoria
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
   int data[5]= {1,2,3,4,5}, i;

   int *p;
   for(i = 0; i < 5; ++i){
   	 //*p = data[i];
      printf("\nEl valor de la variable es: %d", *(data + i));
	  printf("\nLa direccion de la variable es: %p", &data[i]);
      printf("\n");
 	}
   return 0;

}