#include <stdio.h>

int main(void) {
        // Variáveis para armazenar o salário atual e o percentual de reajuste
    float salarioAtual, percentualReajuste;

    // Passo 1: Ler o salário atual
    printf("Digite o salario mensal atual: ");
    scanf("%f", &salarioAtual);

    // Passo 2: Ler o percentual de reajuste
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    // Passo 3: Calcular o valor do novo salário
    float novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);

    // Passo 4: Escrever o valor do novo salário
    printf("O novo salario sera: R$ %.2f\n", novoSalario);

    return 0;
}