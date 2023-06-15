#include <stdio.h>

int main(){

    float V1, V2, V3,Soma = 0;

    printf("Valor1: ");
        scanf("%f",&V1);
    printf("Valor2: ");
        scanf("%f",&V2);
    printf("Valor3: ");
        scanf("%f",&V3);
    
    Soma = (V1*V1) + (V2*V1) + (V3*V3);

    printf("Total: %f",Soma);

    return 0;
}