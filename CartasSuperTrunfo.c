#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Área para entrada de dados
  // Área para exibição dos dados da cidade

    char estadoUm; 
    char estadoDois;
    char CodCardUm[3];
    char CodCardDois[3];
    char nomeCidadeUm[50];
    char nomeCidadeDois[50];
    unsigned long int habitantesUm;
    unsigned long int habitantesDois;
    float areaUm;
    float areaDois;
    float pibUm;
    float pibDois;
    int pontosTuristicosUm;
    int pontosTuristicosDois;
    float densidadePopUm;
    float densidadePopDois;
    float pibPerCapitaUm;
    float pibPerCapitaDois;
    float superPoderUm;
    float superPoderDois;


    printf("Carta 1 \n"); // número da carta
    printf("Digite uma letra de 'A' a 'H' para representar o estado escolhido:\n");
    scanf("%s", &estadoUm);

    printf("Digite um número de 01 a 04 (ex.: D02):\n");
    scanf("%s", &CodCardUm);

    printf("Digite o nome da cidade: \n");
    getchar(); // limpa buffer do teclado
    fgets(nomeCidadeUm, sizeof(nomeCidadeUm), stdin); // pega o nome da cidade via input
    nomeCidadeUm[strcspn(nomeCidadeUm, "\n")] = 0; // procura o \n e o transforma em 0

    printf("Digite a quantidade de habitantes na cidade, sem pontos ou vírgulas (ex.: 100000): \n");
    scanf("%d", &habitantesUm);

    printf("Digite a área da cidade em km²:\n"); 
    scanf("%f", &areaUm);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pibUm);

    printf("Digite a quantidade de pontos turísticos que existem na cidade: \n"); 
    scanf("%d", &pontosTuristicosUm);

    densidadePopUm = (float) habitantesUm / areaUm;
    pibPerCapitaUm = (pibUm * 1000000000.0) / (float) habitantesUm;

    printf("\nCarta 2 \n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado escolhido:\n");
    getchar();
    scanf("%c", &estadoDois);

    printf("Digite um número de 01 a 04 (ex.: D02):\n");
    scanf("%s", &CodCardDois);

    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(nomeCidadeDois, sizeof(nomeCidadeDois), stdin);
    nomeCidadeDois[strcspn(nomeCidadeDois, "\n")] = 0;

    printf("Digite a quantidade de habitantes na cidade, sem pontos ou vírgulas (ex.: 100000): \n");
    scanf("%d", &habitantesDois);

    printf("Digite a área da cidade em km²:\n"); 
    scanf("%f", &areaDois);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pibDois);

    printf("Digite a quantidade de pontos turísticos que existem na cidade: \n"); 
    scanf("%d", &pontosTuristicosDois);

    densidadePopDois = (float) habitantesDois / areaDois;
    pibPerCapitaDois = (pibDois * 1000000000.0) / (float) habitantesDois;

    // printf("\n\n");
    // printf("Carta 1:\n");
    // printf("Estado: %c\n", estadoUm);
    // printf("Código: %c%s\n", estadoUm, CodCardUm); // mostra a saída estado + código juntas, ex.: B01
    // printf("Nome da Cidade: %s\n", nomeCidadeUm);
    // printf("População: %d\n", habitantesUm);
    // printf("Área: %.2f km²\n", areaUm);
    // printf("PIB: %.2f bilhões de reais\n", pibUm);
    // printf("Número de Pontos Turísticos: %d\n", pontosTuristicosUm); 
    // printf("Densidade Populacional: %.2f hab/km²\n", densidadePopUm);
    // printf("PIB per Capita: %.2f reais\n", pibPerCapitaUm);

    // printf("\n");
    // printf("Carta 2:\n");
    // printf("Estado: %c\n", estadoDois);
    // printf("Código: %c%s\n", estadoDois, CodCardDois);
    // printf("Nome da Cidade: %s\n", nomeCidadeDois);
    // printf("População: %d\n", habitantesDois);
    // printf("Área: %.2f km²\n", areaDois);
    // printf("PIB: %.2f bilhões de reais\n", pibDois);
    // printf("Número de Pontos Turísticos: %d\n", pontosTuristicosDois);
    // printf("Densidade Populacional: %.2f hab/km²\n", densidadePopDois);
    // printf("PIB per Capita: %.2f reais\n", pibPerCapitaDois);


    // cálculo do super poder 

    superPoderUm = (float) habitantesUm + areaUm + pibUm + pontosTuristicosUm + pibPerCapitaUm - densidadePopUm;

    superPoderDois = (float) habitantesDois + areaDois + pibDois + pontosTuristicosDois + pibPerCapitaDois - densidadePopDois;

    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", habitantesUm > habitantesDois);
    printf("Área: Carta 1 venceu (%d)\n", areaUm > areaDois);
    printf("PIB: Carta 1 venceu (%d)\n", pibUm > pibDois);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicosUm > pontosTuristicosDois);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopDois > densidadePopUm);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapitaUm > pibPerCapitaDois);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderUm > superPoderDois);

  
  return 0;
} 
