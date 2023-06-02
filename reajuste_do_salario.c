#include <stdio.h>
int main(void){
    float salario, novo_salario;
    printf("digite o salario:");
    scanf("%f", &salario);

    if (salario < 500){
        novo_salario = 1.15*salario;
    
    }
    else if (salario >= 500 && salario < 1000){
        novo_salario = 1.10*salario;
    
    }
    else{
        novo_salario = 1.05*salario;
    }
    printf("\nnovo salario:%f\n",novo_salario);
}