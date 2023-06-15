#include <stdio.h>


int main(){

    float N1,N2,N3,N4,Media = 0;

    printf("Nota1: ");
        scanf("%f",&N1);
    printf("Nota2: ");
        scanf("%f",&N2);
    printf("Nota3: ");
        scanf("%f",&N3);
    printf("Nota4: ");
        scanf("%f",&N4);
    
    Media = (N1 + N2 + N3 + N4)/4;

    printf("Media da nota: %f",Media);

    return 0;
}