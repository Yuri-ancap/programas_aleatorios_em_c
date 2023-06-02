#include <stdio.h>
int main(void){
    float b, B, h, a;
    printf("Base menor:");
    scanf("%f", &b);

    printf("\nBase maior:");
    scanf("%f", &B);

    printf("\nAltura:");
    scanf("%f", &h);

    a = h*(b + B)/2;

    printf("\nArea:%f", a);

}