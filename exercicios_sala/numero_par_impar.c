#include <stdio.h>

void main(){
    int n;

    printf("Digite um numero!\n");
    scanf("%d", &n);

    if(n > 0){
        n % 2 == 0 ? printf("%d eh par.", n) : printf("%d eh impar.", n);
    }else{
        printf("Esse numero eh negativo.");
    }

}
