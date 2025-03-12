/*
	05 - Criar um programa em Linguagem C que receba dois números inteiros e
retorne: o valor da divisão e o resto da divisão.

Autor: Gustavo Zaia
Ultima modificação> 11/03/2025
*/

#include <stdio.h>

int main(){
	int a, b, res;
	printf("Informe 2 numeros: ");
	scanf("%d%d", &a, &b);

	printf("%f, %f", a / b, a % b)	;
}
                                                               