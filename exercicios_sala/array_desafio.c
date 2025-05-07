#include <stdio.h>

main(){

    int num[5], contNeg = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o numero: \n");
        scanf("%d", &num[i]);

        if(num[i] < 0){
            contNeg++;
        }
    }

    printf("Quantidade de numeros negativos foi de: %d", contNeg);


}
