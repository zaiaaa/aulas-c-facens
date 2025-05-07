#include <stdio.h>

main(){
    //int tam;

    //printf("QUal o tamanho do quadrado?");
    //scanf("%d", &tam);

    //for(int i = 0; i < tam; i++){
        //printf("*");
        //for(int j = 0; j < tam - 1; j++){
            //printf("*");
        //}
    //printf("\n");
    //}

    triangulo();

}


triangulo(){
    int tam;

    printf("Qual o tamanho do triangulo?");
    scanf("%d", &tam);

    for(int i = 0; i < tam; i++){
        printf("\n*");
        for(int j = 1 ; j <= i; j++){
            printf("*");
        }
    }


}
