#include <stdio.h>

int main(){

    float Metros_Por_Segundo, Quilometros_Por_horas = 0;

    printf("A velocidade em m/s e: ");
        scanf("%f",&Metros_Por_Segundo);

    Quilometros_Por_horas = Metros_Por_Segundo * 3,6;

    printf("A Velocidade em Km/h e: %f",Quilometros_Por_horas);

    return 0;
}