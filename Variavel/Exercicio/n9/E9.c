#include <stdio.h>

int main(){

    float Kelvein = 0, celsius;

    printf("digite a temperatura em Celsius: ");
    scanf("%f",&celsius);

     Kelvein = (celsius + 273.15f);

    printf("A Temperatura em Kelvein e: %f",Kelvein);

    return 0;
}