/*
	09 - Receber um n�mero e calcular o valor de sua raiz quadrada e sua oitava
pot�ncia. Utilize as fun��es pow(base,expoente) e sqrt(num) da biblioteca
<math.h>. Mostrar os valores obtidos
*/

#include <stdio.h>
#include <math.h>

int main(){
	int number, powValue, sqrtValue;
	
	printf("Tell me a number: ");
	scanf("%d", &number);
	
//	powValue = pow(number, 8);
//	sqrtValue = sqrt(number);
	
	printf("%.2lf = pow and %.2lf = sqrt", pow(number, 8), sqrt(number));
	//pow e sqrt s� retornam DOUBLE. tava colocando int e n ia kkkkkkkkk
	
	
	return 0;
}
