#include <stdio.h>

int main(){
	int i, filhos, salario, maior;
	float somaSalario, somaFilhos, salarioInf;
	
	for(i = 0; i < 5; i++){
		if(i == 0){
			maior = salario;
		}
		
		printf("Ola cidadao, digite seu salario\n");
		scanf("%d", &salario);
		
		printf("\nAgora o numero de filhos:\n");
		scanf("%d", &filhos);
		
		if(salario > maior){
			maior = salario;
		}
		
		if(salario < 500){
			salarioInf++;
		}
		
		somaSalario += salario;
		somaFilhos += filhos;
	
	}
	
	printf("A média do salario da populacao é de %.2f\n\nA media do número de filhos eh de %.2f\n\n O maior salario eh de %d\n\n O percentual de pessoas com menos de 500 eh de %.2f", somaSalario / 5, somaFilhos /5, maior, salarioInf / i);

}

