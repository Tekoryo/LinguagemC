#include <stdio.h>
#include <math.h>

int main(){

    float x, y = 0;

    printf("Dg Valor: ");
        scanf("%f",&x);
    
    if(x >= 0){
        y = x;

        x = x * x;
        y = sqrt(y);
        printf("Valor quadrado: %f \n",x);
        printf("Valor raiz quardrada: %f",y);

    }

    return 0;
}