#include <stdio.h>

int main(){

    float Salario, empretimo, prestacao = 0;

    printf("Salario: ");
        scanf("%f",&Salario);
    printf("empretimo: ");
        scanf("%f",&empretimo);
    
    prestacao = Salario * 1.20;

    if(empretimo > prestacao){
        printf("Emprestimo nao concedido!");
    }else{
        printf("Emprestimo concedido!");
    }

    return 0;
}