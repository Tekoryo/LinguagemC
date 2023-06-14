#include <stdio.h>

int main(){

    float V = 0, Pi = 3.141592,R,A;

    printf("Valor a: ");
        scanf("%f", &A);
    
    printf("Valor r: ");
        scanf("%f",&R);

    V = Pi * (R * R) * A;

    printf("Valor e: %f",A);

    return 0;
}