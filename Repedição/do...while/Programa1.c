#include <stdio.h>
/*
Faça um programa, no qual receba e some numeros inteiros até o numero de entrada seja zero.
*/
int main(){

    //Variavel
    int numero, soma=0;
    
    do{
        //entreda
            printf("Informe um numero: ");
            scanf("%d", &numero);

        //processamento
            soma=soma+numero;  
              
    }while (numero != 0);
    

    //saida 
    printf("A soma e %d", soma);

    return 0;
}