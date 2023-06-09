#include <stdio.h>

int main(){

    float Fahrenheit, celsius = 0;

    printf("digite a temperatura em Fahrenheit: ");
    scanf("%f",&Fahrenheit);

    celsius = 5.0*(Fahrenheit-32.0)/9.0;

    
    printf("A Temperatura Em Celsius e: %f",celsius);

    return 0;
}