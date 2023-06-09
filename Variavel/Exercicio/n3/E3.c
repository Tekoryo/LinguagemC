#include <stdio.h>

int main(){

    int soma = 0,Valor_Inteiros1,Valor_Inteiros2,Valor_Inteiros3;

    printf("Digite o primeiro valor: ");
        scanf("%d", &Valor_Inteiros1);

    printf("Digite o Segundo valor: ");
        scanf("%d", &Valor_Inteiros2);

    printf("Digite o Terceiro valor: ");
        scanf("%d", &Valor_Inteiros3);
    
    soma = Valor_Inteiros1 + Valor_Inteiros2 + Valor_Inteiros3;

    printf("A soma dos valores e: %d",soma);
    
    return 0;
}