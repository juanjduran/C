/*
Crea un programa que pida dos número enteros al usuario y diga si alguno de ellos es múltiplo del otro.
Crea una función EsMultiplo que reciba los dos números, y devuelve si el primero es múltiplo del segundo.
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
