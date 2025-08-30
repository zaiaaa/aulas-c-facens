#include <stdio.h>

int main(){

    int num[5], *ptr, i;

    ptr = num;

    for(i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i + 1);
        //sem * pq estamos referenciando o endereço de memória onde vamos alterar, não o conteúdo.
        scanf("%d", ptr++);
    }
    fflush(stdin);

    //sempre reinicializar o ptr.
    ptr = num;
    printf("\n\nLista que acabou de inserir: \n\n");
    for(i=0;i <5; i++){
        printf("Item %d: %d\n", i, *(ptr++));
    }


}
