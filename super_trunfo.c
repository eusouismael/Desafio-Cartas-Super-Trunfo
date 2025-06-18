#include <stdio.h>

// Super Trunfo: Nível Mestre

int main() {
// Declaração de variáveis: carta 1
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

// Declaração de variáveis: carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

// Leitura de dados: carta 1
    printf("Estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Código da carta 1: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade da carta 1: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("População da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Área(em km²) da carta 1: ");
    scanf("%f", &area1);

    printf("PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

// Leitura de dados: carta 2
    printf("\nEstado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Código da carta 2: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade da carta 2: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("População da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Área(em km²) da carta 2: ");
    scanf("%f", &area2);

    printf("PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

// Cálculos: carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1; // Convertendo PIB de bilhões para reais
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

// Cálculos: carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2; // Convertendo PIB de bilhões para reais
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

// Exibição de dados: carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

// Exibição de dados: carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

// Comparação de cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade_populacional1 < densidade_populacional2 ? 1 : 2, densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2);

    return 0;
}