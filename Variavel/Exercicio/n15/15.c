#include <stdio.h>

int main(){

    float G = 0,R,pi=3.14f;

    printf("Digite o valor: ");
        scanf("%f",&R);
    
    G = R * 180 / pi;

    printf("Valor e: %f",G);


    return 0;
}