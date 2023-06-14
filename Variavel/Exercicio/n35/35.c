#include <stdio.h>
#include <math.h>

int main(){

    float a,b, hipotenusa =0;

    printf("Catetu 1: ");
        scanf("%f",&a);
    printf("Catetu 2: ");
        scanf("%f",&b);

    hipotenusa = sqrt((a * a) + (b * b));

    printf("Valor: %f",hipotenusa);

    return 0;
}