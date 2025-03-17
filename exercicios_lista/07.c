/*
	07 - Receber uma temperatura em Fahrenheit e convertê-la para Celsius
através da seguinte fórmula: Celsius = (Fahrenheit - 32) / 1.8. Exibir o valor
em Celsius.

*/

int main(){
	
	float temperatura, celsius;
	
	printf("Qual a temperatura em Farenheit?");
	scanf("%f", &temperatura);

	celsius = (temperatura - 32) / 1.8;
	
	printf("%.2fºC", celsius);
		
	
	return 0;
}
