/*
Hacer un programa que cuente del 1 al 100 inclusive e imprima sólo los números pares
*/

#include<stdio.h>

void main(){
    int number = 1;

    for(number; number<101; number++){
        if(number % 2 == 0){
            printf("%d\n", number);
        }
    }
}

