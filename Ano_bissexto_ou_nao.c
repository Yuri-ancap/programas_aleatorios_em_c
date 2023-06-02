#include <stdio.h>

int main(void){
    int ano;
    printf("digite o ano: ");
    scanf("%d", &ano);

    if (ano%400 == 0){
        printf("nao e bissexto!");
        return 0;
    }
    if(ano%4 == 0 || ano%100 == 100){
        printf("\ne ano bissexto!");
    }else{
        printf("\nnao e bissexto!");
    }
}