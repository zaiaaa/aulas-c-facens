/*
Aloque dinamicamente a seq��ncia de n�meros reais digitados pelo usu�rio, at� que este escolha
a op��o N (Deseja continuar? (S/N)). Em seguida, exiba a m�dia dos elementos (n�o considerar
as ocorr�ncias com valor = 0). Utilizar fun��o para aloca��o din�mica.
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
        //tam -1 pq eu to avan�ando um ++tam e to desreferenciando tudo e todos pqp.
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

