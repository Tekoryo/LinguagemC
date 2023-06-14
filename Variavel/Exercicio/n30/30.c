#include <stdio.h>

int main(){

    float Vr, Vdolar;

    printf("Valo real: ");
        scanf("%f",&Vr);
    printf("Valor Dolar: ");
        scanf("%f",&Vdolar);

    Vr = Vdolar* Vr;

    printf("Valor: %f", Vr);


    return 0;
}