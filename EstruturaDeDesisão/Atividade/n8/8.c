#include <stdio.h>

int main(){

    float n1,n2,m = 0;

    printf("Valor 1 e valor 2: ");
        scanf("%f%f",&n1,&n2);

    if((0.0 <= n1 && n1 <= 10.0) && (0.0 <= n2 && n2 <= 10.0)){
        m =(n1 + n2)/2;
        printf("media e: %f",m);
    }else{
        printf("Nota invalida!");
    }
    
    return 0;
}