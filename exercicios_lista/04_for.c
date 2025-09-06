#include <stdio.h>

int main(){
	int numero, maior, menor, i;
	
	for(i = 0; i < 10; i++){
		printf("Diga um numero");
		scanf("%d", &numero);
		
		if(i == 0){
			menor = numero;
			maior = numero;
		}
		
		if(numero > maior){
			maior = numero;
		}
		
		if(numero < menor){
			menor = numero;
		}
	}
	
	printf("%d eh o maior \n\n %d eh o menor", maior, menor);
}
