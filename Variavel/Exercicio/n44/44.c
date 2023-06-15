#include <stdio.h>

int main(){

    float Hd, Ha, Total = 0;

    printf("Altura do Degrau: ");
        scanf("%f",&Hd);
    printf("Altuara: ");
        scanf("%f",&Ha);
    
    Total = Ha / Hd;

    printf("Quantos degraus: %f",Total);

    return 0 ;
}