#include <stdio.h>

int main(){
    char palavra[10];

    printf("Digite a palavra: \n");
    scanf("%s", palavra);

    for(int i = 0; i <= 5; i++){
        printf("%c\n", palavra[i]);
    }
}
