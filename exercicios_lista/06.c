/*
	06 - Receba a base e a altura de um triângulo e devolva sua área.
*/

#include <stdio.h>

int main(){
	float base, altura;
	
	printf("Qual a base do triangulo?\n");
	scanf("%f", &base);
	
	printf("Qual a altura do triangulo?\n");
	scanf("%f", &altura);
	
	printf("%.2fm^2 eh o valor da sua area!", base * altura / 2);
	
	
	return 0;
}
