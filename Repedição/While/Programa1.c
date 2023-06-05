#include <stdio.h>
/*
Faça um programa, no qual receba e some numeros inteiros até o numero de entrada seja zero.
*/
int main(){

    //Variavel
    int numero, soma=0;
    //entreda
    printf("Informe um numero: ");
    scanf("%d", &numero);

    while(numero != 0){
        //processamento
            soma=soma+numero;  

        //entreda
            printf("Informe um numero: ");
            scanf("%d", &numero);
 
    }

    //saida 
    printf("A soma e %d", soma);

    return 0;
}