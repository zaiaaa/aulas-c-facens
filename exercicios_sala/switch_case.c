#include <stdio.h>

void main(){

    char operacao;
    int n1, n2, res;

    printf("Digite os valores em que deseja fazer a operacaoo: \n");
    scanf("%d \n %d", &n1, &n2);

    printf("Agora digite a operação que deseja realizar: \n");
    //ta " %c" pq pode dar erro de de leitura por causa do enter q a gnt deu no scan anterior.
    scanf("%d", &operacao);

    switch(operacao){

    case '+':
        res = n1 + n2;
        printf("A soma de %d + %d eh igual a %d", n1, n2, res);
        break;

    case '-':
        res = n1 - n2;
        printf("A subtracao de %d - %d eh igual a %d", n1, n2, res);
        break;

    case '*':
        res = n1 * n2;
        printf("A multiplicacao de %d * %d eh igual a %d", n1, n2, res);
        break;

    case '/':
        res = n1 / n2;
        printf("A divisao de %d / %d eh igual a %d", n1, n2, res);
        break;
    }

}
