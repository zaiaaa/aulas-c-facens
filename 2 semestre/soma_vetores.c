#include <stdio.h>
int main(){
    //somar fator por fator e imprimir no vetor c.
    int a[5] = {1, 5, 2, 3, 5}, b[5] = {6, 2, 27, 9, 2}, c[5], *ptr_a, *ptr_b, *ptr_c, i;

    ptr_a = a;
    ptr_b = b;
    ptr_c = c;

    for(i = 0; i < 5; i++){
        //lógica de começo ta certa. *ptr_c é o valor que é apontado.
        *(ptr_c++) = *(ptr_a++) + *(ptr_b++);
    }

    ptr_c = c;

    for(i = 0; i < 5; i++){
        printf("%d\n", *(ptr_c++));
    }

}
