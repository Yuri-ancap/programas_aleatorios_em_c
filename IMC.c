#include <stdio.h>
int main(void){
    float peso, altura, m;
    printf("peso(kg):");
    scanf("%f",&peso);
    
    printf("\naltura(m):");
    scanf("%f",&altura);

    m = peso/(altura*altura);
    printf("imc:%2f",m);
}