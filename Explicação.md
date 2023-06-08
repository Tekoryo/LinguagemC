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

## Tipos De Dados

### Tipos Numericos

- Tipo interirogit 
  - int: 7, 5, 20, 53541,...
- Tipo Reais
    - float: 23.4, 1.234,...
    >Suporta até dez caracteres.
    - double: 23.4, 1.234,...
    >Suporta mais dados que o float.
#### Quando usar cada tipo

O tipo de dados int serve para guardar números inteiros, positivos e negativos. Os tipos de dados float e double são usados para guardar números reais. A diferença entre eles é a precisão. O float tem uma precisão de 6 casas decimais e o double tem uma precisão de 10 casas decimais.

> Matheus Cristiano de Almeida - <https://todasasrespostas.pt/quando-usar-int-ou-float>
____
## Dicas Gerais

- Sempre que for usar uma variavel para soma que não será inicializa pelo usuario, Crie uma Variavel inicializada para evitar problema futuro no codígo.
