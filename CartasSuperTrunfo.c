#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.



int main() {
    printf ("desafiocartas!\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo1[5], codigo2[5];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a população da cidade (Carta 1): ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (Carta 1): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (Carta 1): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade (Carta 1): ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nDigite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a população da cidade (Carta 2): ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (Carta 2): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (Carta 2): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade (Carta 2): ");
    scanf("%d", &pontos_turisticos2);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nDados da Carta 1 (%s):\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    printf("\nDados da Carta 2 (%s):\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
