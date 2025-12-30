#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado1[50];
  char codigo1[10];
  char cidade1[50];
  int populaçao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  // Carta 2
  char estado2[50];
  char codigo2[10];
  char cidade2[50];
  int populaçao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  // Área para entrada de dados
  printf("+-------------------------+\n");
  printf("|-- Cadastro da Carta 1 --|\n");
  printf("+-------------------------+\n");

  printf("Estado: ");
  scanf("%s", estado1);
  printf("Codigo: ");
  scanf("%s", codigo1);
  printf("Cidade: ");
  scanf("%s", cidade1);
  printf("Populaçao: ");
  scanf("%d", &populaçao1);
  printf("Area: ");
  scanf("%f", &area1);
  printf("Pib: ");
  scanf("%f", &pib1);
  printf("Pontos Turisticos: ");
  scanf("%d", &pontosturisticos1);

  printf("\n\n");

  printf("+-------------------------+\n");
  printf("|-- Cadastro da Carta 2 --|\n");
  printf("+-------------------------+\n");

  printf("Estado: ");
  scanf("%s", estado2);
  printf("Codigo: ");
  scanf("%s", codigo2);
  printf("Cidade: ");
  scanf("%s", cidade2);
  printf("Populaçao: ");
  scanf("%d", &populaçao2);
  printf("Area: ");
  scanf("%f", &area2);
  printf("Pib: ");
  scanf("%f", &pib2);
  printf("Pontos Turisticos: ");
  scanf("%d", &pontosturisticos2);

  
  return 0;
}
