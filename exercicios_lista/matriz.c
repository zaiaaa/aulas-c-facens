# include <stdio.h>

main(){

    int matriz[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    //Linha - Coluna.

    //1 2 3
    //4 5 6

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("|%d ", matriz[i][j]);
        }
        printf("\n\n");
    }


    //matriz[0][0] = 1000;

    //printf("%d", matriz[0][0]);

}
