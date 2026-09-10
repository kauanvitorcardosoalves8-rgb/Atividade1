#include <stdio.h>

#define VALOR_REFEICAO 12.50
#define VALOR_CAFE 4.00

int main(void) {
    int refeicoes;
    int cafes;
    float disponivel;
    float gastoRefeicoes;
    float gastoCafes;
    float gastoTotal;
    float saldo;

    printf("Quantidade de refeicoes: ");
    scanf("%d", &refeicoes);

    printf("Quantidade de cafes: ");
    scanf("%d", &cafes);

    printf("Valor disponivel no cartao: ");
    scanf("%f", &disponivel);

    gastoRefeicoes = refeicoes * VALOR_REFEICAO;
    gastoCafes = cafes * VALOR_CAFE;
    gastoTotal = gastoRefeicoes + gastoCafes;
    saldo = disponivel - gastoTotal;

    printf("\nGasto refeicoes: %.2f\n", gastoRefeicoes);
    printf("Gasto cafes: %.2f\n", gastoCafes);
    printf("Gasto total: %.2f\n", gastoTotal);
    printf("Saldo restante: %.2f\n", saldo);

    return 0;
}
