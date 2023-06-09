#include <stdio.h>

int main(){

    float Quinta_Parte = 0, Numero_Real;

    printf("Digite um numero real: ");
    scanf("%f", &Numero_Real);

    Quinta_Parte = Numero_Real / 5;

    printf("A quinta parte e: %f",Quinta_Parte);
    
    return 0;
}