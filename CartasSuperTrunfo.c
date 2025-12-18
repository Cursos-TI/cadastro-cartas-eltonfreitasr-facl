#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaração de variáveis para a Carta 1
  char estado1[2];                  //Estado
  char codigo_carta1[4];            //Código da carta
  char cidade1[50];                 //Nome da Cidade
  int populacao1;                   //População 
  float area1;                      //Área em Km²
  float pib1;                       //PIB
  int pontos_turisticos1;           //Número de Pontos Turísticos

  // Declaração de variáveis para a Carta 2
  char estado2[2];
  char codigo_carta2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
    
  // Área para entrada de dados carta 1
  printf("Cadastro da Carta 1:\n");
  printf("Digite o Estado: ");
  scanf("%s", estado1);
  printf("Digite o código da carta: ");
  scanf("%s", codigo_carta1);
  printf("Digite o nome da Cidade: ");
  scanf("%50s", cidade1);
  printf("Digite a população: ");
  scanf("%d", &populacao1);
  printf("Digite a Área em Km²: ");
  scanf("%f", &area1);
  printf("Digite o PIB da Cidade: ");
  scanf("%f", &pib1);
  printf("Digite a quantidade de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos1);


  // Área para entrada de dados carta 2
  printf("\n---Cadastro da Carta 2:---\n");
  printf("Digite o Estado: ");
  scanf("%s", estado2);
  printf("Digite o código da carta: ");
  scanf("%s", codigo_carta2);
  printf("Digite o nome da Cidade: ");
  scanf("%50s", cidade2);
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("Digite a Área em Km²: ");
  scanf("%f", &area2);
  printf("Digite o PIB da Cidade: ");
  scanf("%f", &pib2);
  printf("Digite q quantidade de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  // --- Exibição da Carta 1 ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código Carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

  // --- Exibição da Carta 2 ---
    printf("\n---Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código Carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

return 0;
} 
