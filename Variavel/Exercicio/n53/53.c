#include <stdio.h>

int main(){

    float C, L,P,VlT = 0;

    printf("Dg valor C: ");
        scanf("%f",&C);
    printf("Dg valor L: ");
        scanf("%f",&L);   
    printf("Dg valor P: ");
        scanf("%f",&P);

    VlT = (C + L) * P;

    printf("Valor total e: %f", VlT);

    return 0;
}