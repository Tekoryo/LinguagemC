#include <stdio.h>

int main(){

    float milhas, quilometros = 0;

    printf("Digite a distancia em milha: ");
        scanf("%f",&milhas);

    quilometros = 1.61 * milhas;

    printf("Distacia em quilometro: %f", quilometros);
    
    return 0;
}