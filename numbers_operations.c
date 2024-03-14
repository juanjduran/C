/*
Hacer un programa que solicite por teclado dos número y muestre la suma , la resta ,la
multiplicación y la división de esos números.
*/

#include<stdio.h>
#include<string.h>

float addition(float, float);
float subtraction( float, float);
float multiplication(float, float);
float division(float, float);

void main(){
    float number_one, number_two;
    char option, menu;

    printf("Ingrese el primer numero: ");
    scanf("%f", &number_one);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &number_two);

    do{
        printf("\nQue operacion desea realizar?\n\nS-SUMA\nR-RESTA\nM-MULTIPLICACION\nD-DIVISION\n\nOPCION: ");
        fflush(stdin);
        scanf("%c", &option);

        switch(option){
            case 's':
            case 'S':
                printf("\nEl resultado de la suma entre %.1f y %.1f es %.1f", number_one, number_two, addition(number_one, number_two));
                break;
            case 'r':
            case 'R':
                printf("\nEl resultado de la resta entre %.1f y %.1f es %.1f", number_one, number_two, subtraction(number_one, number_two));
                break;
            case 'm':
            case 'M':
                printf("\nEl resultado de la multipicacion entre %.1f y %.1f es %.1f", number_one, number_two, multiplication(number_one, number_two));
                break;
            case 'd':
            case 'D':
                printf("\nEl resultado de la division entre %.1f y %.1f es %.1f", number_one, number_two, division(number_one, number_two));
                break;
        default:
                printf("\nOpcion invalida.");
        }
        printf("\n\nRealizar otra operacion? S/N");
        fflush(stdin);
        scanf("%c", &menu);
    }while(menu != 'n' && menu != 'N');
}

float addition(float a, float b){
    return (a + b);
}
float subtraction( float a, float b){
    return (a - b);
}
float multiplication(float a, float b){
    return (a * b);
}
float division(float a, float b){
    return (a / b);
}
