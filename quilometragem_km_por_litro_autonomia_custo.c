#include <stdio.h>

int main(void){
    float odo_antes, odo_depois, litro, preco, capacidade, odo, km_litro, autonomia, custo;
    
    printf("Odometro antes:");
    scanf("%f", &odo_antes);

    printf("\nOdometro depois:");
    scanf("%f", &odo_depois);

    printf("\nLitro de combustivel gasto:");
    scanf("%f", &litro); 

    printf("\nPreço da gasolina:");
    scanf("%f", &preco);

    printf("\nCapacidade do carro:");
    scanf("%f", &capacidade);

    odo = odo_depois - odo_antes;
    km_litro = odo/litro;
    autonomia = km_litro*capacidade;
    custo = preco*litro;
    printf("\nkilometragem final:%f",odo);
    printf("\nquilômetro por litro:%f", km_litro);
    printf("\nautonomia do veiculo:%f", autonomia);
    printf("\ncusto da viagem:%f", custo);
}