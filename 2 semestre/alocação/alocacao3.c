#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMBLOCO 3000000000ULL

int main(){

    void *ptr1, *ptr2;

    ptr1 = malloc(TAMBLOCO);

    if(ptr1 == NULL){
        printf("nao alocado");
    }else{
        printf("\nAlocou");
        ptr2 = malloc(TAMBLOCO);
    }

    if(ptr2 != NULL){
        printf("\nSegunda alocacao funfou");
    }else{
        printf("\nalocou nao.");
        free(ptr1);
        printf("\nliberando primeiro bloco");
        ptr2 = malloc(TAMBLOCO);

        if(ptr2 != NULL){
            printf("\n depois de free() alocacao realizada");
        }
    }
}
