/*
Crea un programa que pida dos n�mero enteros al usuario y diga si alguno de ellos es m�ltiplo del otro.
Crea una funci�n EsMultiplo que reciba los dos n�meros, y devuelve si el primero es m�ltiplo del segundo.
*/

#include<stdio.h>

void EsMultiplo(int, int);

void main(){
    int numero_uno, numero_dos;

    printf("Ingrese un numero: ");
    scanf("%d", &numero_uno);
    printf("Ingrese otro numero: ");
    scanf("%d", &numero_dos);
    EsMultiplo(numero_uno, numero_dos);


}

void EsMultiplo(a, b){
    if(a % b == 0){
        printf("\n%d es multiplo de %d\n", a, b);
    }else{
        printf("\n%d no es multiplo de %d\n", a, b);
    }
}
