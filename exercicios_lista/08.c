/*
	08 - Calcular e exibir o perímetro de uma circunferência recebendo seu raio. A
fórmula para o cálculo é C = 2 * * r (utilizar = 3.14)
*/

#include <stdio.h>

int main(){
	#define PI 3.14
	int raio;
	float perimetro;
	
	printf("Qual o raio da circunferência?");
	scanf("%d", &raio);
	
	perimetro = (float)2*PI*raio;
	
	printf("%.2f", perimetro);
	return 0;
}
