/*
Aloque dinamicamente a seqüência de números reais digitados pelo usuário, até que este escolha
a opção N (Deseja continuar? (S/N)). Em seguida, exiba a média dos elementos (não considerar
as ocorrências com valor = 0). Utilizar função para alocação dinâmica.
*/

#include <stdio.h>
#include <stdlib.h>

void aloca(int **p, int tam){

    *p = (int *)realloc(*p, tam);

    if(*p == NULL){
        printf("\nAlocou nao tmj");
        exit(1);
    }else{
        printf("\nAlocou");
        printf("\n endereco de p %d", &p);
        printf("\n endereco de onde p aponta %d", p);
        printf("\n conteudo onde p ta apontando %d", *p);
    }

}


int main(){
    int *numeros = NULL, tam = 0, soma = 0, tam_aux;
    char resp = 's';

    //aloca(&numeros, tam * sizeof(int));


    while(resp=='s'){

        aloca(&numeros, ++tam * sizeof(int));

        printf("\nDigite o numero %d: ", tam);
        //tam -1 pq eu to avançando um ++tam e to desreferenciando tudo e todos pqp.
        scanf("%d", numeros + tam - 1);

        for(int i = 0; i < tam; i++){
            printf("\nnumero %d: %d", i + 1, *numeros++);
        }
        numeros -= tam;

        printf("\nDeseja continuar?");
        fflush(stdin);
        scanf("%c", &resp);

    }

    tam_aux = tam;

    for(int i = 0; i < tam; i++){
        printf("\nnumero %d: %d", i + 1, *numeros);
        //printf("%d", tam);
        if(*numeros == 0){
            tam_aux--;
        }
        soma += *numeros++;
    }
    printf("\nMedia dessa lista: %.2f", (float) soma / tam_aux);




    printf("\nendereco numeros: %d", &numeros);
    printf("\nvalor numeros: %d", *numeros);


}

