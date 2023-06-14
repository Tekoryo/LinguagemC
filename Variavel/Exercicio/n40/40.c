#include <stdio.h>

int main(){

    float Valor_Dia = 30, Dia, Desconto = 1.08, Salario = 0;

    printf("Quanto dia: ");
        scanf("%f",&Dia);

    Salario = (Valor_Dia * Dia) / Desconto;

    printf("Salario: %f",Salario);

    return 0;
}