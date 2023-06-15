#include <stdio.h>

int main(){

    float milhas = 0, quilometros;
    printf("Digite a distancia em quilometro: ");
        scanf("%f",&quilometros);

    milhas = quilometros/1.61f;

    printf("Distacia em milhas: %f", milhas);

    return 0;
}