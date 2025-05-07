#include <stdio.h>

int main(){
    int resp = 1;

    while(resp > 0){
        printf("me manda um numero\n");
        scanf("%d", &resp);
    }

    printf("Seu numero eh igual ou inferior a 0!");

}
