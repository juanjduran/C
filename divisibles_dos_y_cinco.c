/*
Hacer un programa que cuente del 1 al 100 inclusive e imprima los números que son
divisibles por 2 y por 5.
*/

#include<stdio.h>

void main(){
    int number = 1;

    for(number; number<101; number++){
        if(number % 2 == 0 && number % 5 == 0){
            printf("%d\n", number);
        }
    }
}
