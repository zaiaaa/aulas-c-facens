#include <stdio.h>

void main(){
    for(int i = 0; i <=10; i++){
        for(int j = 0; j <= 10; j++){
            printf("%d x %d = %d \n", i, j, i*j);
        }
        printf("\n\n\n");
    }
}
