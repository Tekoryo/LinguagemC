#include <stdio.h>

int main(){

    float L = 780000, P = 0, S = 0, T = 0;

    P = (0.46f * L);

    S = (0.32f * L);

    T = (0.22f * L);

    printf("Ganhador 1: %f", P);
    printf("Ganhador 2: %f", S);
    printf("Ganhador 3: %f", T);

    return 0;
}