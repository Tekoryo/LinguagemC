#include <stdio.h>

int main(){

    float Kelvein, celsius = 0;

    printf("digite a temperatura em Kelvein: ");
    scanf("%f",&Kelvein);

    celsius = (Kelvein - 273.15f);

    printf("A Temperatura Em Celsius e: %f",celsius);

    return 0;
}