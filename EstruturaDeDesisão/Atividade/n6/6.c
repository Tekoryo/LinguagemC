#include <stdio.h>

int main(){

    float x, y, z =0;

    printf("Valor 1: ");
        scanf("%f",&x);
    printf("Valor 2: ");
        scanf("%f",&y);
    
    if(x > y){
        z = x - y;
        printf("Valor 1 e maior, esta e a diferenca: %f",z);
    }else{
        z = y - x;
        printf("Valor 2 e maior, esta e a diferenca: %f",z);
    }

    return 0;
}