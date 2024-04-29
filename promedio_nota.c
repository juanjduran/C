/*Realizá un programa que permita al usuario ingresar 3 notas
pertenecientes a tres trimestres distintos para cierto alumno.
La computadora debe mostrar la nota promedio.*/

#include<stdio.h>
#define CANTIDAD_DE_NOTAS 3

float Promedio(float, int);

void main(){
    float nota, suma_notas=0;
    int i;

    for(i=0; i<CANTIDAD_DE_NOTAS; i++){
        printf("Ingrese nota del trimestre numero %d: ", i+1);
        scanf("%f", &nota);
        printf("\nNOTA %d: %.2f\n\n", i+1, nota);
        suma_notas = suma_notas + nota;
    };
    printf("El promedio de las notas es: %.2f\n", Promedio(suma_notas, CANTIDAD_DE_NOTAS));

}

float Promedio(float a, int b){
    return a / b;
}
