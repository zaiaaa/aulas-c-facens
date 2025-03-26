/*
Um triângulo pode ser classificado de acordo com as medidas de seus
lados:
- Um triângulo equilátero possui todos os lados de mesma medida.
- Um triângulo isósceles possui dois lados de mesma medida.
- Um triângulo escaleno possui as medidas dos três lados diferentes.

Receber os três lados de um triângulo em qualquer ordem (chame de lado1,
lado2 e lado3) e classificá-lo em equilátero, isósceles ou escaleno.
*/

#include <stdio.h>

void main(){

    float l1, l2, l3;

    printf("Insira as medidas dos lados do triângulo");
    scanf("%d %d %d", &l1, &l2, &l3);

    if(l1 != l2 && l2 != l3 && l1 != l3){
        printf("Esse triângulo é escaleno.");
    }else if(l1 == l2 && l2 == l3 && l1 == l3){
        printf("Esse triângulo é equilátero.");
    }else{
        printf("Esse triângulo eh isóceles.");
    }
}
