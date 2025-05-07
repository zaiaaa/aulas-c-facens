#include <stdio.h>

main(){

    int num[5] = {1, 2, 3, 4, 5}, copiaNum[5];

    for(int i = 0; i < 5; i++){
        copiaNum[4 - i] = num[i];
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }

    printf("\n\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", copiaNum[i]);
    }

}
