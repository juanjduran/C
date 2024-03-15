/*
Hacer un programa que solicite una edad y determine si es mayor de edad.
*/

#include<stdio.h>

void Comprobar(int);

void main(){

    int edad;
    char menu;

    do{
        printf("Ingrese la edad que quiere comprobar: ");
        scanf("%d", &edad);
        printf("\nEDAD: %d", edad);
        Comprobar(edad);
        printf("\nComprobar otro? S/N\n");
        fflush(stdin);
        scanf("%c", &menu);
        system("cls");
    }while(menu != 'n' && menu != 'N');


}

void Comprobar(a){
    if (a >= 18){
        printf("\n\nEs mayor de edad.\n");
    }else{
        printf("\n\nEs menor de edad.\n");
    }
}
