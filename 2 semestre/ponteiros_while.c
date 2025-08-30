#include <stdio.h>
int main(){

    char resp = 's';

    while(resp == 's'){
        int *ptr, i, qtd;

        printf("Digite a quantidade de itens na lista: ");
        scanf("%d", &qtd);

        int lista[qtd];

        //ptr é igual o começo da lista
        ptr = lista;

        for(i = 0; i < qtd; i++){
            printf("digite o %d numero: ", i + 1);
            scanf("%d", ptr++);
        }

        printf("Sua lista de %d itens: \n\n", i);

        ptr = lista;
        for(i = 0; i < qtd; i++){
            printf("item %d: %d\n", i + 1, *(ptr++));
        }
        fflush(stdin);
        printf("Deseja continuar? ");
        scanf("%c", &resp);

    }

}
