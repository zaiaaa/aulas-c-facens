#include <stdio.h>

void main(){
    int i;
    float salario, soma = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite o primeiro salário: ");
        scanf("%f", &salario);
        soma += salario;
        printf("\t Soma parcial: %.2f\n\n", soma);
    }

    printf("A soma dos salarios foi de %.2f", soma);
}
