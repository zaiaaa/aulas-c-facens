#include <stdio.h>

main(){

    //int matriz[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};
    int maior = 0, linhaMaior, colunaMaior;
    int matriz[2][3];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o item %d:%d: \n\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                linhaMaior = j;
                colunaMaior = i;

            }
        }
    }

    printf("%d: linha %d | coluna %d\n\n\n", maior, colunaMaior, linhaMaior);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d |", matriz[i][j]);
        }
        printf("\n");
    }


}
