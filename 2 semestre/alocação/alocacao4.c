#include <stdio.h>
#include <stdlib.h>
void aloca(int **p, int tam); //passa o endereço do ponteiro declarado na main
main( )
{
    int *ptr=NULL;
    printf("\nAloca memoria na Funcao e na Main\n");
    printf("\nChamada por Referencia - passa ENDERECO do ponteiro\n");
    printf("\nFuncao main - antes de alocar");
    printf("\nEndereco ptr = %u \nConteudo %u = %u",&ptr,&ptr,ptr);
    aloca(&ptr, 1); //chamada por referencia
    printf("\n\nFuncao main - depois de alocar");
    printf("\nEndereco ptr = %u \nConteudo %u = %u\n\n\n",&ptr,&ptr,ptr);
    system("pause");
}//main
void aloca(int **p, int tam)
{
    printf("\n\nFuncao aloca - antes de alocar");
    printf("\nEndereco p = %u \tConteudo p = %u (Endereco ptr)",&p,p);
    printf("\nConteudo %u = %u\n",p,*p);
    if((*p=(int*)realloc(*p, tam*sizeof(int)))== NULL)
    {
        printf("Erro de alocacao");
        exit(1);
    }
    printf("\n\nFuncao aloca - depois de alocar");
    printf("\nEndereco p = %u \tConteudo p = %u (Endereco ptr)",&p,p);
    printf("\nConteudo %u = %u\n",p,*p);
}//aloca
