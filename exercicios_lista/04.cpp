/*

	04 - Aniversário. Receber o ano de nascimento de uma pessoa e mostrar aproximadamente
quantos dias de vida ela tem.

Autor: Gustavo Zaia
Ultima modificacao: 11/03/2025

*/
#include <stdio.h>

int main(){
	int idade;
	printf("Me informe sua idade: ");
	scanf("%d", &idade);
	
	printf("Voce tem %d dias de vida!", idade * 365);
}