#include <stdio.h>

int main() {

    // ==============================
    // DECLARACAO DOS DADOS DA CARTA 1
    // ==============================
    char estado1[3];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // ==============================
    // DECLARACAO DOS DADOS DA CARTA 2
    // ==============================
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // ==============================
    // LEITURA DOS DADOS DA CARTA 1
    // ==============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (ex: PE): ");
    scanf("%s", estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê texto com espaços

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // ==============================
    // LEITURA DOS DADOS DA CARTA 2
    // ==============================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (ex: BA): ");
    scanf("%s", estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ==============================
    // CALCULO DA DENSIDADE POPULACIONAL
    // Formula: populacao / area
    // ==============================
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    // ==============================
    // CALCULO DO PIB PER CAPITA
    // Formula: pib / populacao
    // ==============================
    float pibPerCapita1 = pib1 / (float) populacao1;
    float pibPerCapita2 = pib2 / (float) populacao2;

    // ==============================
    // COMPARACAO FIXA NO CODIGO
    // ATRIBUTO: DENSIDADE POPULACIONAL
    // REGRA: MENOR DENSIDADE VENCE
    // ==============================
    printf("\nComparacao de Cartas (Atributo: Densidade Populacional)\n\n");

    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, densidade2);

    // ==============================
    // ESTRUTURA IF / ELSE
    // ==============================
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    // ==============================
    // EXIBICAO DOS CALCULOS EXTRAS
    // ==============================
    printf("\n--- Calculos Extras ---\n");

    printf("\n%s:\n", cidade1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.4f\n", pibPerCapita1);

    printf("\n%s:\n", cidade2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.4f\n", pibPerCapita2);

    return 0;
}
