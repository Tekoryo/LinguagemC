#include <stdio.h>

int main(){ 

    float x = 0, y;

    printf("DG: ");
        scanf("%f",&y);
    
    x = y - 1;

    printf("AC: %f",x);


    x = y + 1;

    printf(" | DC: %f",x);

    return 0;
}