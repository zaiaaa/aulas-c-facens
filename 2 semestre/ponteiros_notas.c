#include <stdio.h>

int main(){

    int qtd_alunos = 3, notas = 2, i, j;

    float alunos[qtd_alunos][notas], *ptr, medias[qtd_alunos], *ptr_medias;


    ptr = alunos; //inicializando ponteiro

    //lendo matriz e aplicando as notas
    for (i = 0; i < qtd_alunos; i++){
        //lendo aluno
        printf("Aluno %d \n\n", i + 1);
        for(j = 0; j < notas; j++){
          //lendo notas
          printf("Digite a nota %i: \n", j);
          scanf("%f", ptr++);
        }
    }

    ptr = &alunos[0][0];
    ptr_medias = medias;

    for(i = 0; i < qtd_alunos; i++){
        //lendo aluno
        printf("Notas do Aluno %d \n\n", i + 1);
        float soma = 0;
        for(j=0; j < notas; j++){
            //adicioando média das notas de cada aluno na variavel soma.
            soma += *(ptr++);
        }
        //após adicionar as notas do aluno em soma , adicionamos ele ao seguinte ponteiro do aluno.
        //Como está no loop de alunos, ele adiciona 1 por aluno.
        //EX: passo 1 = soma / notas
        *ptr_medias++ = soma / notas;
    }

    //reinicializando o ptr_medias
    ptr_medias = medias;

    for(i = 0; i < qtd_alunos ; i++){
        //loop pra exibir as médias. (avança por aluno).
        printf("Aluno %d - > media: %.2f \n", i + 1, *(ptr_medias++));
    }
}
