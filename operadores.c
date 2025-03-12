/*
	02 - operadores - Este código recebe 2 números e soma, divide, multiplica e subtrai os números.
	Autor: Gustavo Zaia
	Última modificação: 11/03/2025
*/

int main(){
	float a, b;
	
	printf("Diga dois numeros: ");
	scanf("%f%f", &a, &b);
	
	printf("Soma -> %.2f\n", a + b);
	printf("multiplicacao -> %.2f\n", a * b);
	printf("subtracao -> %.2f\n", a - b);
	printf("Divisao -> %.2f\n", a / b);
	
	return 0;
}