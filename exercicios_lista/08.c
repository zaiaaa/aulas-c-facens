/*
	08 - Calcular e exibir o per�metro de uma circunfer�ncia recebendo seu raio. A
f�rmula para o c�lculo � C = 2 * * r (utilizar = 3.14)
*/

#include <stdio.h>

int main(){
	#define PI 3.14
	int raio;
	float perimetro;
	
	printf("Qual o raio da circunfer�ncia?");
	scanf("%d", &raio);
	
	perimetro = (float)2*PI*raio;
	
	printf("%.2f", perimetro);
	return 0;
}
