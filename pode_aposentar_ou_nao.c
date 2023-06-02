#include <stdio.h>
#include <time.h>
int main(void){
    int idade, ano, tempo_trabalho, ano_atual;
    
    printf("ano de nascimento:");
    scanf("%d", &ano);
    
    printf("tempo de trabalho:");
    scanf("%d", &tempo_trabalho);

    time_t t = time(NULL);
    struct tm *data = localtime(&t);
    ano_atual = data->tm_year + 1900;

    idade = ano_atual - ano;

    if(idade - tempo_trabalho < 14){
        printf("Mentiroso!");
        return 0;
    }
    
    
    if(idade >= 65){
        printf("pode aposentar!");
        return 0;
    }
    if(tempo_trabalho >= 30){
        printf("pode aposentar!");
        return 0;
    }
    if(idade >=60  && tempo_trabalho >= 25){
        printf("pode aposentar!");
    }
    else{
        printf("não pode aposentar!");
    }
}