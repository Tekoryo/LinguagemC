#include <stdio.h>

int main(){

    float Vt, Parcela, Desconto = 0.10, Comisscao = 0.05, Valor_comisscao = 0;

    printf("Valor Total: ");
        scanf("%f",&Vt);
    printf("Parcela: ");
        scanf("%f",&Parcela);
    
    Desconto =  Vt - (Vt * Desconto);

    Parcela = Vt / Parcela;

    printf(" | Total com Desconto: %f \n",Desconto);
    printf(" | Valor de cada parcela: %f \n",Parcela);

    Valor_comisscao = Desconto * Comisscao;

    printf(" | Comissao vendedo a vista: %f \n",Valor_comisscao);

    Valor_comisscao = Comisscao * Vt;

    printf(" | Comissao vendedor parcelada: %f",Valor_comisscao);

    return 0;
}