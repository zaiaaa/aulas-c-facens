#include <stdio.h>
#include <string.h>

int main(){

    char sobrenome[40], nome[40];

    //EXEMPLO DO PQ NAO USAR &
    //char nome[40];
    //scanf("%s", nome);  // nome == &nome[0]
    //o nome da vari�vel j� � seu endere�o.


    printf("Digite seu sobrenome:");
    scanf("%s", sobrenome);
    //lembrando que aqui n�o reescrevemos o endere�o da variavel. SEM &

    printf("Digite seu nome:");
    scanf("%s", nome);

    printf("Seu nome completo eh %s %s", nome, sobrenome);

    int qtdLetras = strlen(nome) + strlen(sobrenome) + 1; //esse +1 eh o espa�o

    printf("\n\n\n\tqtd letras: %d", qtdLetras);
    //Correto!!!
}
