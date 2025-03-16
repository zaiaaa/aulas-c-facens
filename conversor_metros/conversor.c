//Conversor de medidas. vem em metros e sai em decimetros, centimetros e milímetros.
#include <stdio.h>
#include <locale.h>
#include <windows.h>


int main(){
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    int resp;

    printf("Diga o número que será transformado (em metros!)");
    scanf("%d", &resp);

    printf("Em decímetros: %d \nEm centímetros: %d \nEm milímetros: %d", resp * 10, resp * 100, resp * 1000);

    return 0;
}