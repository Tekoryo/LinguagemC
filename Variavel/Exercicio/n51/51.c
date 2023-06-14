#include <stdio.h>
#include <math.h>

int main(){

    float D = 0, Xa,Xb,Ya,Yb;

    printf("Dg Ponto Xa: ");
        scanf("%f",&Xa);
    printf("Dg Ponto Xb: ");
        scanf("%f",&Xb);
    printf("Dg Ponto Ya: ");
        scanf("%f",&Ya);
    printf("Dg Ponto Yb: ");
        scanf("%f",&Yb);

    D = sqrt(((Ya - Xa)*(Ya - Xa))+((Yb - Xb)*(Yb - Xb)));
    
    printf("Valor final: %f",D);

    return 0;
}