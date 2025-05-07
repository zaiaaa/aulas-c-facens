#include <stdio.h>

int main(){

    float aresta;
    char resp;

    do{
        printf("Digite o valor de uma aresta do quadrado: \n");
        scanf("%f", &aresta);

        printf("\n\nArea = %.2fcm^2\nPerimetro = %.2f", aresta * aresta, aresta * 4);

        printf("\nDeseja continuar??\n");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's');

    printf("Programa finalizado!!!");
}
