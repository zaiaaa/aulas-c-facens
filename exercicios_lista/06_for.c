#include <stdio.h>

int main(){
	int i, numHomens = 0, maisAlto, sexo, numMulheres;
	float somaAltMulh, altura, menorAlt = 10, maiorAlt = 0;
	
	for(i = 0; i < 5; i++){
		printf("Voce eh homi (1) ou mulhe (2)??\n\n");
		scanf("%d", &sexo);
		
		printf("Sua altura: ");
		scanf("%f", &altura);

		
		if(sexo == 1){
			numHomens++;
		}else{
			somaAltMulh += altura;
			numMulheres++;
		}
		
		if(altura < menorAlt){
			menorAlt = altura;
		}
		
		if(altura > maiorAlt){
			maisAlto = sexo;
		}
		
	}
	
	printf("a menor altura do grupo eh %.2f\n\n a media de altura das mulheres eh de %.2f\n\n o numero de homens eh de %d\n\n o sexo da pessoa mais alta eh de %d", menorAlt, somaAltMulh / numMulheres, numHomens, maisAlto);
	
	
}
