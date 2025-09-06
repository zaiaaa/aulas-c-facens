#include <stdio.h>
#include <string.h>

int main(){

    char caractere;
    int n;

    printf("Digite o caracter usado: \n");
    scanf(" %c", &caractere);

    printf("Digite o n de vezes q \"%c\" vai ser escrito: \n", caractere);
    scanf("%d", &n);

    char string[n];

    for(int i = 0; i <= n; i++){
        string[i] = caractere;
    }
    //marca o final da string.
    string[n] = '\0';

    if(n > 20){
        printf("n pode kkkkk");
    }else{
        printf("%s", string);
    }


}
