#include <stdio.h>

//Precise de ajuda, me faltava conhecimento e não sabia nem como isso iria funcionar na parte do segundo

int main (){

    int Segundo, h, m, s, resto;

    printf("Dg Segundo: ");
        scanf("%d",&Segundo);
    
    h = Segundo / 3600;
    resto = Segundo % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("Horas: %d:%d:%d",h,m,s);

    return 0;
}

//3:50:20
//5:20:30
//9:10:50
