#include <stdio.h>
//#include <stdbool.h>


int theedigits(char senha1[], char senha2[]){
    for(int i = 0; i <= 2; i++){
        if(senha1[i] == senha2[i] && i == 2){
            return 1;
        }
    }
    return 0;
}


int main(){

    //No vetor, setamos a "quantidade de caracteres."
    char senha1[50], senha2[50];

    printf("Digite sua senha:\n");
    //lemos STRINGS SEM &.
    scanf("%s", senha1);
    printf(senha1);

    printf("\n\nDigite sua senha novamente:\n");
    //lemos STRINGS SEM &.
    scanf("%s", senha2);
    printf(senha2);

    //strcompare = COMPARA  AS STRINGS
    if(strcmp(senha1, senha2) == 0){
        printf("\nAs senhas coincidem!");
    }else{
        if(theedigits(senha1, senha2) == 1){
            printf("\nAs senhas NAO coincidem! Talvez por erro de digitação");
        }else{
            printf("\nAs senhas NAO coincidem!");
        }
    }

}

