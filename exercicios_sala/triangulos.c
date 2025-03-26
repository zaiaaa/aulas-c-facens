/*
Um tri�ngulo pode ser classificado de acordo com as medidas de seus
lados:
- Um tri�ngulo equil�tero possui todos os lados de mesma medida.
- Um tri�ngulo is�sceles possui dois lados de mesma medida.
- Um tri�ngulo escaleno possui as medidas dos tr�s lados diferentes.

Receber os tr�s lados de um tri�ngulo em qualquer ordem (chame de lado1,
lado2 e lado3) e classific�-lo em equil�tero, is�sceles ou escaleno.
*/

#include <stdio.h>

void main(){

    float l1, l2, l3;

    printf("Insira as medidas dos lados do tri�ngulo");
    scanf("%d %d %d", &l1, &l2, &l3);

    if(l1 != l2 && l2 != l3 && l1 != l3){
        printf("Esse tri�ngulo � escaleno.");
    }else if(l1 == l2 && l2 == l3 && l1 == l3){
        printf("Esse tri�ngulo � equil�tero.");
    }else{
        printf("Esse tri�ngulo eh is�celes.");
    }
}
