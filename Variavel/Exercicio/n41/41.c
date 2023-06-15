#include <stdio.h>

int main(){

    float VHt, NHt, Porcentagem = 1.10,S = 0;

    printf("Valor da Hora: ");
        scanf("%f",&VHt);
    printf("Numero de Hora: ");
        scanf("%f",&NHt);
    
    S = (VHt * NHt) * Porcentagem;

    printf("Salario: %f", S);

    return 0;
}