#include <stdio.h>

int main(){

    float Quadrado = 0, Numero_Real;

    printf("Digite um numero: ");
    scanf("%f",&Numero_Real);

    Quadrado = (Numero_Real * Numero_Real);

    printf("O quadrado do numero e: %f",Quadrado);

    return 0;
}