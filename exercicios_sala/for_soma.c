#include <stdio.h>

void main(){
    //Aqui estamos somando os valores de 0 a n.
    //ex: 1 + 2 + 3 + 4 + 5...


    //quando n�o atribuimos valor � vari�vel, ela fica com lixo de mem�ria.
    int i, n, soma = 0;

    printf("%d", soma);

    printf("Entre com o valor de N");
    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++){
        //1 + 2 + 3 + 4...
        //somando com soma somamos do 1 at� N (ele acumula)
        //somando com N + i, ele n�o acumula
        soma = soma + i;
        //soma = n + i;
    }

    printf("A soma dos primeiros %d numeros eh %d\n", n, soma);

}
