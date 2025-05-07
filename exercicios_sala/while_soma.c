#include <stdio.h>

int main(){
    int numero, resultado;

    do{
        printf("Digite um numero para ser somado");
        scanf("%d", &numero);

        resultado += numero;

    }while(numero != 0);

    printf("O resultado foi de %d", resultado);

}
