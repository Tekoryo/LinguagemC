# Caderno de C

## Repetição

Estruturas de repetição, For, while, do....while

### Quando usar

>For - Quando você sabe quantos loop ira ter.
~~~
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
~~~
>While - Utilizado quando você precisa de um loop onde não se tenha um número fixo de elementos, mas que tenha um critério de parada e antes de iniciar o loop a condição é checada.
~~~
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
~~~
>Do...While - Utilizado quando você precisa de um loop onde não se tenha um número fixo de elementos, mas que tenha um critério de parada e a de condição de para é checada após a primeira condição.
~~~
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
~~~

## Dicas Gerais

- Sempre que for usar uma variavel para soma que não será inicializa pelo usuario, Crie uma Variavel inicializada para evitar problema futuro no codígo.
