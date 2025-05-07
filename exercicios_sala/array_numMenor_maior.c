#include <stdio.h>
#define LENGTH 4

main(){

    int num[LENGTH], maior = 0, menor = 100000;

    for(int i = 0; i < LENGTH; i++){

        printf("Digite o %d numero: \n", i);
        scanf("%d", &num[i]);

        if(num[i] > maior){
            maior = num[i];
        }

        if(num[i] < menor){
            menor = num[i];
        }

    }

    printf("\n\nO maior numero eh %d\n\nO menor numero eh %d", maior, menor);

}
