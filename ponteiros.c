#include <stdio.h>

int main(){

    int lista[10] = {1, 2, 4, 500, 1, 4, 3, 10, 8, 62}, *ptr_lista, maior = 0;

    ptr_lista = lista;

    for(int i = 0; i < 10; i++){
        if(*ptr_lista > maior){
            maior = *ptr_lista;
        }
        *ptr_lista++;
    }

    printf("O maior numero eh: ");
    printf("%d", maior);
    printf("\n");
    printf("\n");








    //conteudo q se aponta
    printf("%d", *ptr_lista);
    printf("\n");
    //endereço de memoria que se aponta
    printf("%d",ptr_lista);
    printf("\n");
    //endereço próprio de memoria
    printf("%d",&ptr_lista);
    printf("\n");

    printf("%d",lista[0]);
    printf("\n");
    printf("%d",&lista[0]);
}
