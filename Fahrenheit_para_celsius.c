#include<stdio.h>

int main(void){
    float ce, fr;
    
    printf("digite a temperatura(F):");
    scanf("%f",&fr);
    
    ce = (5*(fr-32))/9;
    
    printf("%f",ce);
}