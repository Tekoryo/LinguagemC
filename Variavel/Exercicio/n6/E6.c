#include <stdio.h>

int main(){

    float Fahrenheit = 0, celsius;

    printf("digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    Fahrenheit = celsius*(9.0/5.0)+32.0;

    printf("A Temperatura Em Fahrenheit e: %f",Fahrenheit);

    return 0;
}