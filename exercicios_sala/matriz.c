#include <stdio.h>

main(){

    int linha, coluna;

    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            printf("%d, %d |", linha, coluna);
        }
        printf("\n");
    }
}
