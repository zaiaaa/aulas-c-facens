#include <stdio.h>

void main(){
    int i, n;

    printf("Digite o numero que deseja a tabuada: ");
    scanf("%d", &n);


    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d \n", i, n, n*i);
    }
}
