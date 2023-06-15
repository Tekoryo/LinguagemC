#include <stdio.h>

int main (){

    int Idade, Ano_atual, Ano_Nacimento = 0;

    printf("Idade: ");
        scanf("%d",&Idade);
    printf("Ano atual: ");
        scanf("%d",&Ano_atual);
    
    Ano_Nacimento = Ano_atual - Idade;

    printf("Ano de Nacimento: %d", Ano_Nacimento);

    return 0;
}