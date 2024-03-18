/*
Hacer un programa que solicite un color por teclado e imprima “Puede pasar “ si el
color ingresado es verde , “Precaución “ si es amarillo , “No pasar “ si es rojo o “Color
inválido” si es cualquier otro.
*/

#include<stdio.h>
#include<string.h>

void Traffic_light(char);

void main(){

    char light_colour;

    printf("Seleccione un color: \n\nV-Verde\nA-Amarillo\nR-Rojo\n\nCOLOR:");
    fflush(stdin);
    scanf("%c", &light_colour);
    Traffic_light(light_colour);
}

void Traffic_light(char a){
    if(a == 'v' || a == 'V'){
        printf("\nPuede pasar.\n");
    }else{
        if(a == 'a' || a == 'A'){
            printf("\nPrecaucion!\n");
        }else{
            if(a == 'r' || a == 'R'){
                printf("\nNO PASAR!\n");
            }else{
                printf("\nColor invalido.\n");
            }

        }
    }
}
