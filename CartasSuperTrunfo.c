#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Este código também vai calcular a Densidade Populacional e o PIB per Capita

int main() {
    
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[15], cidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    //Dados da Carta 1

    printf("Dados da Carta 1:\n");
   
    printf("Insira o Estado:\n");
    scanf(" %c", &estado1);

    printf("Insira o código:\n");
    scanf(" %s", codigo1);

    printf("Insira a cidade:\n");
    scanf(" %s", cidade1);

    printf("Insira a população:\n");
    scanf("%d", &populacao1);

    printf("Insira a área:\n");
    scanf("%f", &area1);

    printf("Insira o PIB:\n");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    //Dados da Carta 2

    printf("Dados da Carta 2:\n");
   
    printf("Insira o Estado:\n");
    scanf(" %c", &estado2);

    printf("Insira o código:\n");
    scanf(" %s", codigo2);

    printf("Insira a cidade:\n");
    scanf(" %s", cidade2);

    printf("Insira a população:\n");
    scanf("%d", &populacao2);

    printf("Insira a área:\n");
    scanf("%f", &area2);

    printf("Insira o PIB:\n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    // Cálculo da densidade populacional e pib percapita

    densidade1 = populacao1/area1
    densidade2 = populacao2/area2
    pibpercapita1 = pib1/popoulacao1
    pibpercapita2 = pib2/popoulacao2
    
    // Impressão dos dados das cartas:

    printf("Dados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n\n", pib1);

    printf("Dados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n\n", pib2);

    return 0;
}
