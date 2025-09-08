#include <stdio.h>
#include <stdlib.h>

int *numeros, *inicio;

void aloca(int **lista);

int main() {

    aloca(&numeros);
    inicio = numeros;


    for(int i = 0; i < 10; i++){
        *numeros++ = i;
    }

    numeros = inicio;

    for(int i = 0; i < 10; i++){
        printf("%d\n", *numeros++);
    }


}// main


void aloca(int **lista){
if((*lista = (int *) malloc(10 * sizeof(int))) == NULL){
        printf("Não foi alocado");
        exit(1);
    }else{
        printf("alocado!");
    }
}
