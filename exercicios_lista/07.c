/*
	07 - Receber uma temperatura em Fahrenheit e convert�-la para Celsius
atrav�s da seguinte f�rmula: Celsius = (Fahrenheit - 32) / 1.8. Exibir o valor
em Celsius.

*/

int main(){
	
	float temperatura, celsius;
	
	printf("Qual a temperatura em Farenheit?");
	scanf("%f", &temperatura);

	celsius = (temperatura - 32) / 1.8;
	
	printf("%.2f�C", celsius);
		
	
	return 0;
}
