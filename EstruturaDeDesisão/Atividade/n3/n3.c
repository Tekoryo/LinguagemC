#include <stdio.h>
#include <math.h>

int main(){

    float x;

    printf("Dg valor: ");
        scanf("%f",&x);
    
    if(x >= 0){
        x = sqrt(x);
        printf("Este e o valor 1: %f",x);
    }else{
        x = x * x;
        printf("Este e o valor 2: %f",x);
    }

    return 0;
}