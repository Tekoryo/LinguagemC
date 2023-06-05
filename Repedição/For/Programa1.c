#include <stdio.h>
/*
Faça um programa, no qual receba e some 5 numeros inteiros e apresente a soma no final
*/
int main(){

    //Variavel
    int numero, soma = 0;

    
//Para o int i iniciando em 0. enquanto i < 5; incrementa o i em 1
// inicialização, criterio de parada, forma de incremento
    for(int i = 0; i < 5; i++){
        //entreda
            printf("Informe um numero: ");
            scanf("%d", &numero);

        //processamento
            soma=soma+numero;
    }

    //saida 
    printf("A soma e %d", soma);

    return 0;
}