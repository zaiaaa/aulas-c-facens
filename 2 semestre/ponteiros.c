#include <stdio.h>
int main (){

    int mat[5] = {1, 2, 3, 4, 5};
    int *ptr_mat = mat;

                   //aponta para ra�z da matriz + 2 (mat[2]). Se nao houver o *, aponta para o endere�o
    printf("%d\n", *(mat + 2)); // VALOR (*).
    printf("%d\n", &mat[2]); //ENDERE�O (&).

    //Aqui temos um incremento no endere�o 0 da matriz, fazendo ele avan�ar para o pr�ximo conjunto de bytes, nos dando mat[1].
    ptr_mat++;
    //devemos declarar o incremento antes de usar num print, pois apenas ap�s o print ele incrementa.
    //obs: pode-se usar ++ptr_mat num print, pois ele incrementa e depois usa na express�o.
    printf("%d\n", *ptr_mat);

    //tamb�m podemos voltar (decrementar) ponteiros.
    ptr_mat--;
    printf("%d\n", *ptr_mat);

    //Tudo isso uilizando a l�gica de passos em vetores.



    int myAge = 43;     // An int variable
    int *ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    // Output the value of myAge by the pointer
    printf("%d\n", *ptr);

}
