#include <stdio.h>

//Consegui fazer sem ajuda

int main (){

    int Horas, Minutos, Segundo, Tempo, HSegundos = 0, h = 0, m = 0, s = 0, resto = 0;

    printf("Dg Horas: ");
        scanf("%d",&Horas);
    printf("Dg Minutos: ");
        scanf("%d",&Minutos);
    printf("Dg Segundo: ");
        scanf("%d",&Segundo);
    printf("Dg a duracao em Segundo: ");
        scanf("%d",&Tempo);
    
    HSegundos = (Horas * 3600) + (Minutos * 60) + (Segundo);
    int Stempo = HSegundos + Tempo;

    h = Stempo / 3600;
    resto = Stempo % 3600;
    m = resto / 60;
    s = resto % 60;


    printf("Horas: %d:%d:%d",h,m,s);

    return 0;
}