#include <stdio.h>

main(){

    int vet[5] = {2, 4, 1, 3, 5}, temp;

    for(int i = 0; i < 5; i++){
        temp = vet[i + 1];

        if(vet[i] > temp){
            vet[i] = temp;
        }

        printf("%d ", vet[i]);
    }

}
