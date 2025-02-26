# include <stdio.h>

int main(){
    int n1, n2, res;
    
    printf("Digite o número 1: \n");
    scanf("%i", &n1);
    
    printf("Digite o número 2: \n");
    scanf("%i", &n2);
    
    res = n1 * n2;
    
    printf("Resultado: %i", res);
    return 0;
}