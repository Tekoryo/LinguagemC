#include <stdio.h>

int main(){

    int x = 0,y;

    printf("DG:");
        scanf("%d",&y);
    
    x = (y * 2) + 1;

    printf("AC: %d",x);

    x = (y * 3) - 1;

    printf(" | DC: %d",x);

    return 0;
}