#include <stdio.h>

void main(){
    //Aqui estamos somando os valores de 0 a n.
    //ex: 1 + 2 + 3 + 4 + 5...


    //quando não atribuimos valor à variável, ela fica com lixo de memória.
    int i, n, soma = 0;

    printf("%d", soma);

    printf("Entre com o valor de N");
    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++){
        //1 + 2 + 3 + 4...
        //somando com soma somamos do 1 até N (ele acumula)
        //somando com N + i, ele não acumula
        soma = soma + i;
        //soma = n + i;
    }

    printf("A soma dos primeiros %d numeros eh %d\n", n, soma);

}
