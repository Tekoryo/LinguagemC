#include <stdio.h>

int main(){

    int x,y;

    printf("Digite numero inteiro: ");
        scanf("%d",&x);
    printf("Digite numero inteiro: ");
        scanf("%d",&y);

    if(x < y){
        printf("Este e maior: %d",y);
    }else if(x > y){
        printf("Este e maior: %d", x);
    }else{
        printf("Sao iguais!");
    }

    return 0;
}