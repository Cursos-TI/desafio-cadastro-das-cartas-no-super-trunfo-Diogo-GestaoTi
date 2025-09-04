#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1
int main() {
    //variaveis primeira carta
char estado1;
char carta1[8] = "Carta01";
char codigo1[4];
char cidade1[20];
int populacao1, turistico1;
float area1, pib1, densidade1;
    
    
//variaveis segnda carta
char estado2;
char carta2[8] = "Carta02";
char codigo2[4];
char cidade2[20];
int populacao2, turistico2;
float area2, pib2, densidade2;
    
    // Cadastro das Cartas:
    // Implementando a lógica para solicitar ao usuário que insira os dados das cidades

    //Carta 1

    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade: ");
    scanf("%3s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%19s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos da cidade: ");
    scanf("%d", &turistico1);

     //Carta 2

    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade: ");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%19s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos da cidade: ");
    scanf("%d", &turistico2);

    //exibição dos dados da primeira carta

    printf("%s\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n",turistico1);
    
    //exibição dos dados da segunda carta

    printf("%s\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n",turistico2);
