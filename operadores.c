/*
	02 - operadores - Este código recebe 2 números e soma, divide, multiplica e subtrai os números.
	Autor: Gustavo Zaia
	Última modificação: 11/03/2025
*/

int main(){
	int a, b;
	
	printf("Diga dois numeros: ");
	scanf("%d%d", &a, &b);
	
	printf("Soma -> %d\n", a + b);
	printf("multiplicacao -> %d\n", a * b);
	printf("subtracao -> %d\n", a - b);
	printf("Divisao -> %d\n", a / b);
	
	return 0;
}