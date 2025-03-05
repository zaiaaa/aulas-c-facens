# include <stdio.h>

int main(){
    int n1, n2, res;
    
    printf("Digite o número 1: \n");
    //%i ou %d, mostra pro programa que será impresso na tela um numero
    //& significa q esse valor será armazenado (vem do usuario)
    scanf("%i", &n1);    
    
    printf("Digite o número 2: \n");
    scanf("%i", &n2);
    
    res = n1 * n2;
    
    printf("Resultado de %i * %i = %i", n1, n2, res);
    return 0;
}