#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaração de variáveis para a Carta 1
  char estado1[3];                  //Estado
  char codigo_carta1[4];            //Código da carta
  char cidade1[50];                 //Nome da Cidade
  unsigned long int populacao1;     //População 
  float area1;                      //Área em Km²
  float pib1;                       //PIB
  int pontos_turisticos1;           //Número de Pontos Turísticos
  float densidade_populacional1;    //Densidade Populacional
  float pib_per_capita1;            //PIB per capita
  float super_poder1;                //Super poder da carta


  // Declaração de variáveis para a Carta 2
  char estado2[3];
  char codigo_carta2[4];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;    
  float pib_per_capita2;            
  float super_poder2;                

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
  densidade_populacional1 = populacao1 / area1;
  pib_per_capita1 = pib1 / populacao1; 
  super_poder1 = (float)populacao1 + pib1 + area1 + pontos_turisticos1 + 
                  pib_per_capita1 + (1.0f / densidade_populacional1);

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
  printf("Digite a quantidade de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos2);
  densidade_populacional2 = populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2; 
  super_poder2 = (float)populacao2 + pib2 + area2 + pontos_turisticos2 + 
                  pib_per_capita2 + (1.0f / densidade_populacional2);

  // Área para exibição dos dados da cidade

  // --- Exibição da Carta 1 ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código Carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);



  // --- Exibição da Carta 2 ---
    printf("\n---Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código Carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  // --- Compração das Cartas ---
  printf("\nComparação de Cartas:\n");
  printf("Populacão:              Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
  printf("Area:                   Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
  printf("PIB:                    Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
  printf("Pontos Turisticos:      Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
  printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2, (densidade_populacional1 < densidade_populacional2));
  printf("PIB per Capita:         Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
  printf("Super Poder:            Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

return 0;
} 
