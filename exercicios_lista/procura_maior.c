#include <stdio.h>

main(){

    int maior = 0, menor = 10000, vetor[5] = {241, 512, 32, 55, 12};

    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }

        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("maior numero: %d \n\n menor numero: %d", maior, menor);

}
