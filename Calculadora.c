#include <stdio.h>

int main(void){
    float n1, n2;
    printf("primeiro numero:");
    scanf("%2f",&n1);
    printf("segundo numero:");
    scanf("%2f",&n2);

    printf("soma:%2f\n",n1 + n2);
    printf("subtracao:%2f\n",n1 - n2);
    printf("multiplicacao:%2f\n",n1*n2);
    printf("divisao:%2f\n",n1/n2);

}