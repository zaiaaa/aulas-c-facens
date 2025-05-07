#include <stdio.h>

int main(){

    float num1, num2, media;
    char resp;

    do{
        printf("Digite a primeira media: \n");
        scanf("%f", &num1);

        printf("Digite a segunda media: \n");
        scanf("%f", &num2);

        printf("\n\n\tO resultado foi de %.2f\n\n", (num1 + num2) / 2);

        printf("deseja calcular dnv? (1 - sim || 2 - nao\n");
        //fflush(stdin)
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's');

    printf("acabou");

}
