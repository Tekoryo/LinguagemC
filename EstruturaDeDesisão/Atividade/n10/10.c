#include <stdio.h>

int main(){
    
    
    float h, p = 0, sexo;

    printf("Sexo [M = 1/ F = 2]: ");
        scanf("%f",&sexo);
    printf("Altura: ");
        scanf("%f",&h);
    
    if(sexo == 1){
        p = (72.7 * h) - 58;
        printf("Peso idedal: %f",p);
    }else if (sexo == 2 ){
        p = (62.1 * h) - 44.7;
        printf("Peso idedal: %f",p);
    }else{
        printf("Sexo invalido");
    }

    return 0;
}