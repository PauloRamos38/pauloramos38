#include <stdio.h>

// Programa Super Trunfo - Cadastro de Cartas
// Esse programa cadastra duas cartas com dados de cidades
int main() {
      // =========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================

    // Dados da Carta 1
    char estado1;     // Letra do estado da primeira carta
    char codigo1[4];  // Código da carta (ex: A01)
    char cidade1[30]; // Nome da cidade
    int populacao1;   // População da cidade
    float area1;      // Área da cidade
    float pib1;       // PIB da cidade
    int pontos1;      // Pontos turísticos

    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

   // =========================
    // ENTRADA DE DADOS DA CARTA 1
    // =========================

    printf("Cadastro da Carta 1\n");
    printf("Estado (A a H): "); // Lê o estado da carta 1
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);       // Lê o código da carta 1

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê o nome da cidade

    printf("Populacao: ");
    scanf("%d", &populacao1); // Lê a população

    printf("Area: ");
    scanf("%f", &area1);      // Lê a área

    printf("PIB: ");
    scanf("%f", &pib1);      // Lê o PIB

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);   // Lê os pontos turísticos

     // =========================
    // ENTRADA DE DADOS DA CARTA 2
    // =========================

    printf("\nCadastro da Carta 2\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: "); 
    scanf("%d", &pontos2);

    // =========================
    // EXIBIÇÃO DOS DADOS
    // =========================

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0; // Finaliza o programa
}
