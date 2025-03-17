/*
	09 - Receber um número e calcular o valor de sua raiz quadrada e sua oitava
potência. Utilize as funções pow(base,expoente) e sqrt(num) da biblioteca
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
	//pow e sqrt só retornam DOUBLE. tava colocando int e n ia kkkkkkkkk
	
	
	return 0;
}
