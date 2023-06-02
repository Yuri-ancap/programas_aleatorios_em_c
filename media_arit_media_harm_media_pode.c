#include <stdio.h>
int main(void){
    float n1,n2,n3,media,media_p,media_h;
    printf("nota 1:");
    scanf("%f", &n1);

    printf("nota 2:");
    scanf("%f", &n2);

    printf("nota 2:");
    scanf("%f", &n3);
    media= (n1 + n2 + n3)/3;
    media_p = (3*n1 + 3*n2 + 4*n3)/10;
    media_h = 3/(1/n1 +1/n2 + 1/n3);

    printf("\n%f", media);
    printf("\n%f", media_p);
    printf("\n%f", media_h);
}