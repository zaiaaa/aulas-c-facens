#include <stdio.h>
#include <string.h>


int main(){
    char palavra[10];

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    if(strlen(palavra) > 10){
        printf("\nPalavra mt grande\n");
        printf("%d", strlen(palavra));
    }else if(strlen(palavra) < 3){
        printf("\nPalavra mt pequena\n");
        printf("%d", strlen(palavra));
    }else{
        printf("\nPalavra correta\n");
        printf("%d", strlen(palavra));
    }


}
