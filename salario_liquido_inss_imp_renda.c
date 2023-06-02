#include <stdio.h>

int main() {
    float horasTrabalhadas, valorHoraTrabalhada;
    float salarioBruto, roubo1, roubo2, salarioLiquido;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHoraTrabalhada);

    salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
    roubo1 = salarioBruto * 0.11;

    float baseCalculoIR = salarioBruto - roubo1;
    float aliquota, valorDeduzir;

    if (baseCalculoIR <= 1903.98) {
        aliquota = 0;
        valorDeduzir = 0;
    } else if (baseCalculoIR <= 2826.65) {
        aliquota = 0.075;
        valorDeduzir = 142.80;
    } else if (baseCalculoIR <= 3751.05) {
        aliquota = 0.15;
        valorDeduzir = 354.80;
    } else if (baseCalculoIR <= 4664.68) {
        aliquota = 0.225;
        valorDeduzir = 636.13;
    } else {
        aliquota = 0.275;
        valorDeduzir = 869.36;
    }

    roubo2 = aliquota * baseCalculoIR - valorDeduzir;
    salarioLiquido = salarioBruto - roubo1 - roubo2;

    printf("Salário Bruto: R$ %.2f\n", salarioBruto);
    printf("INSS: R$ %.2f\n", roubo1);
    printf("Imposto de Renda: R$ %.2f\n", roubo2);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}