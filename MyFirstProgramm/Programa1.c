//Varíaveis

#include <stdio.h>

int main()
{ // A chave delimita um bloco de codigo (inicio do bloco)
    //declarando Variáveis
    int idade; // inteiro

    //função  para escrever algo na saida padrão(Console)
    printf("Qual e a sua idade? ");

    //Receber dados
    scanf("%d" , &idade);
    
    //Saída
    printf("Esta e a sua idade: %d", idade);

    return 0;
} //(fim do bloco)
