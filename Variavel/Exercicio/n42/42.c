#include <stdio.h>

int main(){

    float Sb, Sr = 0, G = 1.05, Ir = 0.07;

    printf("salario base: ");
        scanf("%f",&Sb);
    
    Sr = (Sb * G);

    Sr = Sr - (Sr * Ir);

    printf("Salario: %f", Sr);

    return 0;   
}