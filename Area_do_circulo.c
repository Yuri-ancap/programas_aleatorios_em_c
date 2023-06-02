#include <stdio.h>
#include <math.h>
int main(void){
    float raio, area;
    printf("raio:");
    scanf("%f",&raio);
    area = M_PI * pow(raio,2);
    printf("area:%f",area);
}