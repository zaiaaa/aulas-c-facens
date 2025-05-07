#include <stdio.h>

main(){

    //por def: tipo nome[qtd de vetores].
    //o length do array é IMUTÁVEL. Apenas no futuro usando ponteiros
    //int armario[6] = {1, 4, 2, 7, 2, 9};
    //armario[0] = 18;
    //armario[1] = 1;

    //isso tb é possível.
    //armario [2] = armario[0] + armario[1];


    //for(int i = 0; i <= 5; i++){
    //    printf("%d\n", armario[i]);
    //}

    preencherVetor();
}

void preencherVetor(){

    int num[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o %d numero:\n", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Vetor inteiro: \n\n");
    for(int i = 0; i <5; i++){
        printf("%d, ", num[i]);
    }

}
