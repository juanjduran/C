/*Realizá un programa que permita al usuario ingresar un número entero.
La computadora debe informar el número opuesto y el número inverso del ingresado*/

#include<stdio.h>

int Opuesto(int);
float Inverso(int);

void main(){
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("\nEl opuesto de %d es %d\n\n", numero, Opuesto(numero));
    printf("El inverso de %d es %f\n", numero, Inverso(numero));


}


int Opuesto(int a){
    return a * (-1);
}
float Inverso(int a){
    return 1 / (float)a;
}
