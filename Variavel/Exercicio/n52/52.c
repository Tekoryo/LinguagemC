#include <stdio.h>

int main(){

    float VlT = 0, Vl1, Vl2, Vl3, VlL;

    printf("Dg Valor 1: ");
        scanf("%f",&Vl1);
    printf("Dg Valor 2: ");
        scanf("%f",&Vl2);
    printf("Dg Valor 3: ");
        scanf("%f",&Vl3);
    printf("Valor Premio: ");
        scanf("%f",&VlL);

    VlT = Vl1 + Vl2 + Vl3;

    Vl1 = (Vl1 * VlL) / VlT;

    Vl2 = (Vl2 * VlL) / VlT;

    Vl3 = (Vl3 * VlL) / VlT;

    printf("Valor 1: %f",Vl1);
    printf(" | Valor 2: %f",Vl2);
    printf(" | Valor 3: %f",Vl3);

    return 0;
}