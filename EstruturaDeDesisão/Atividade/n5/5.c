#include <stdio.h>

int main(){

    int x;

    printf("Dg valor inteiro: ");
        scanf("%d",&x);

    if((x % 2) == 0){
        printf("Este valor e par! ");
    }else{
        printf("Este valor e impar! ");
    }

    return 0;
}