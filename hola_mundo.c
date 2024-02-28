/*
Hacer un programa donde se pida un nombre por teclado y se imprima “Hola..el_nombre_ingresado”
*/

#include <stdio.h>
#include <string.h>

void main(){

char name[50];

printf("Ingrese nombre: ");
fflush(stdin);
gets(&name);
printf("Hola %s", name);

return 0;
}
