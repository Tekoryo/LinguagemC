#include <stdio.h>
//Estrutura de decisão If,  else Else if
int main(){
    int  idade;
    printf("Qual e a sua  idade? ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Voce e menor de idade.\n");
    }else if(idade >= 18 && idade < 60){
        printf("Voce e adulto.\n");
    }else{
        printf("Voce e idoso.\n");
    }
     printf("Sua idade e %d\n", idade);

    return 0;
}