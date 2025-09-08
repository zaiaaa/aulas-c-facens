/*
Aloque espaço para uma seqüência de números reais escolhida pelo usuário. Receba os valores
e imprima-os em ordem inversa. Utilizar função para alocação dinâmica.

ex 2 e 3.

*/

#include <stdio.h>
#include <stdlib.h>

void aloca(int **p, int tam){

    //alocando a memória. Apontando pro end. de memoria d
    *p = (int *)realloc(*p, tam);

    if(*p == NULL){
        printf("\nNao deu pra alocar tmj");
        exit(1);
    }else{
        printf("\nalocou");
    }

}


int main(){
S
    int *numeros = NULL, tam = 0;
    char resp = 's';
    //INICIALIZAR PONTEIRO !SEMPRE! COM NULL.

    while(resp == 's'){
        printf("\nQual o tamanho da lista?");
        scanf("%d", &tam);


        aloca(&numeros, tam * sizeof(int));

        printf("\nDIgite os numeros:");

        for(int i = 0; i < tam; i++){
            printf("\nnumero %d:", i);
            scanf("%d", numeros++);
        }

        //voltando a posição 0.
        numeros -= tam;

        for(int i = 0; i < tam; i++){
            printf("\nnumero %d: %d", i, *numeros++);
        }

        printf("\nArray inverso:");
        for(int i = 0; i < tam; i++){
            printf("\nnumero %d: %d", i, *--numeros);
        }

        printf("\nDeseja continuar?");
        fflush(stdin);
        scanf("%c", &resp);

        free(numeros);
    }



}
