#include<stdio.h>
int main(void){
    float area, h, lado;
    printf("altura:");
    scanf("%f",&h);
    printf("\nlado(perpendicular a altura):");
    scanf("%f",&lado);
    area = h * lado/2;

    printf("%f",area);
}