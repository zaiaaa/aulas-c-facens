/*Alocar espa�o para 10 n�meros reais. Mostrar o endere�o e receber do usu�rio os valores. Em
seguida, alterar esses valores, somando 30 a cada elemento. Mostrar novamente o endere�o (que
deve ser o mesmo) com o novo valor. Utilizar fun��o para aloca��o din�mica.
*/

#include <stdio.h>
#include <stdlib.h>


void aloca(int **p, int tam){

    *p = (int *) realloc(*p, tam);

    if(*p == NULL){
        printf("\nalocou nao");
        exit(1);
    }else{
        printf("\nalocou ss");
        printf("\nendereco p %u", &p);
        //conteudo de numeros
        printf("\nconteudo de numeros %u", *p);
        printf("\nendereco numeros apontado por p %u", p);
    }


}

int main(){

    int *numeros = NULL, tam = 10;

    printf("endereco numeros %u", &numeros);

    aloca(&numeros, tam * sizeof(int));

    printf("\n\nDigite 10 numeros:");

    for(int i = 0; i < 10; i++){
        printf("\nNumero %d:", i);
        scanf("%d", numeros++);
    }

    numeros -= 10;

    for(int i = 0; i < 10; i++){
        printf("\nNumero %d: %d | endereco: %d", i, *numeros++, numeros);
    }

    numeros -= 10;

    printf("\nAdicionando 30");
    for(int i = 0; i < 10; i++){
        *numeros += 30;
        printf("\n%d", *numeros++);
    }




}
