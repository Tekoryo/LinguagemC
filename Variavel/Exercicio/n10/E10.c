#include <stdio.h>

int main(){

    float Quilometros_Por_Hora, Metros_Por_Segundo = 0;

    printf("A velocidade em Km/h: ");
        scanf("%f",&Quilometros_Por_Hora);

    Metros_Por_Segundo = Quilometros_Por_Hora / 3.6;

    printf("A Velocidade em M/s e: %f",Metros_Por_Segundo); 


    return 0;
}