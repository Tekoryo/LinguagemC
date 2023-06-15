#include <stdio.h>

int main (){

    char Letra1, Letra2, Letra3;

    printf("Digite um numero de 100 a 999: ");
        scanf("%c%c%c",&Letra1,&Letra2,&Letra3);
    
    printf("Numero invertido: %c%c%c",Letra3,Letra2,Letra1);

    return 0;
}