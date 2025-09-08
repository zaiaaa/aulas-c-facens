#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char buf[80], *mensagem;

    puts("Digite uma linha de texto");
    //gets = scanf; Pego o texto digitado
    gets(buf);

    //mensagem é o ponteiro onde vai alocar a nossa memoria
    mensagem = (char *)realloc(NULL, strlen(buf)+1);
    //copiamos buf para mensagem e ela ser alocada.
    strcpy(mensagem, buf);
    //imprimindo a variavel na tela
    puts(mensagem);
    puts("Digite outra linha de texto:");
    gets(buf);
    //adicionando a outra linha de texto e alocando ela após nossa primeira mensagem.
    //end. de memoria ponteiro indica onde vamos substituir e adicionar a nova mensagem.
    //adicionando a mensagem e o buf no campo de bytes.
    mensagem = (char *)realloc(mensagem, (strlen(mensagem) + strlen(buf) + 1));
    //concatenando a mensagem
    strcat(mensagem, buf);
    //exibindo-a
    puts(mensagem);



}
