/*
	01 - print_scan - Este código é um exemplo que imprime 3 valores na tela. Os
		valores são do tipo int, float e char.
	
	Autor: Gustavo Zaia
	Data da última modificação: 11/03/2025


*/

#include <stdio.h>
#include <locale.h>

void main(){
	
	int idade = 20;
	float altura = 1.75;
	char inicial = 'A';
	
	
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	printf("Inicial do nome: %c\n", inicial);
	
	/*printf("Entre com a inicial: ");
	scanf("%c", &inicial);*/

	printf("Entre com a idade: ");
	scanf("%d", &idade);	
	
	printf("Entre com a altura: ");
	scanf("%f", &altura);	
	
	printf("Entre com a inicial: ");
	scanf("%*c%c", &inicial);
	
	printf("Sua nova idade e de: %d\n", idade);
	printf("Sua nova altura e de: %.2f\n", altura);
	printf("Sua nova inicial e de: %c\n", inicial);


}