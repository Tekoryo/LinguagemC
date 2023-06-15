#include <stdio.h>

int main(){

    float V, Desconto = 0.12;

    printf("Valor: ");
        scanf("%f",&V);
    
    float Vfinal = V - (V * Desconto);

    printf("Valor Final: %f",Vfinal);

    return 0;
}