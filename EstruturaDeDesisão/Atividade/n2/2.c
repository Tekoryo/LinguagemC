#include <stdio.h>
#include <math.h>


int main(){

    float x;

    printf("Forneca um numero: ");
        scanf("%f",&x);
    
    if(x >= 0){
        x = sqrt(x);
        printf("Valor: %f",x);
    }else{
        printf("Numero invalido");
    }


    return 0;
}