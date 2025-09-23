
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Nivel Mestre
int main() {

int escolha1, escolha2, resultado1, resultado2;    
    //variaveis primeira carta
char estado1;
char carta1[8] = "Carta01";
char codigo1[4];
char cidade1[20];
int populacao1, turistico1, resultado_populacao, resultado_super_poder, resultado_densidade, resultado_pib_per_capita, resultado_pib, resultado_area, resultado_turistico, resultado_final;
float area1, pib1, densidade1,pib_per_capita1, super_poder1;
    
    //variaveis segnda carta
char estado2;
char carta2[8] = "Carta02";
char codigo2[4];
char cidade2[20];
int populacao2, turistico2;
float area2, pib2, densidade2, pib_per_capita2, super_poder2;
    
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
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n",turistico1);

        // calculo densidade demográfica e PIB per capita
    
        densidade1 = (float)populacao1 / area1;
        pib_per_capita1 = (float) pib1* 1000000000 / populacao1;
    
        //exibição dos calculos da primeira carta

    printf("Densidade Demográfica: %.2f hab/Km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    
    //exibição dos dados da segunda carta

    printf("%s\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n",turistico2);

        // calculo densidade demográfica e PIB per capita

        densidade2 = (float)populacao2 / area2;
        pib_per_capita2 = (float) pib2 * 1000000000 / populacao2;
    //exibição dos calculos da segunda carta

    printf("Densidade Demográfica: %.2f hab/Km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    
    // cálculo do super poder (densidade invertida)
    
    super_poder1 = populacao1 + area1 + pib1 + turistico1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + turistico2 + pib_per_capita2 + (1.0 / densidade2);

    printf("\nSuper Poder da Carta 1: %.2f\n", super_poder1);
    printf("Super Poder da Carta 2: %.2f\n", super_poder2);

 
   //Menu de Interativo:

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (invertida)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &escolha1);

     // Comparação do primeiro atributo escolhido:

     switch (escolha1){
     case 1:
       printf("Comparando População...\n");
       resultado1 = populacao1 > populacao2 ? 1 : 0; 
        break;
    case 2:
       printf("Comparando Área...\n");
       resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
         printf("Comparando PIB...\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
       printf("Comparando Pontos Turísticos...\n");
       resultado1 = turistico1 > turistico2 ? 1 : 0;
        break;
    case 5:
        printf("Comparando Densidade Demográfica (invertida)...\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Comparando PIB per capita...\n");
        resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
        break;
    case 7:
        printf("Comparando Super Poder...\n");
        resultado1 = super_poder1 > super_poder2 ? 1 : 0;
        break;    
     default:
        printf("Opção inválida.\n");
        break;
     }
 //Menu de Interativo escolha do segundo atributo de comparação:

    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (invertida)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &escolha2);

     // Comparação do segundo Atributo:

     if (escolha2 == escolha1) 
     {
        printf("Atributo já escolhido. Escolha outro.\n");
     }
     
     switch (escolha2){
     case 1:
       printf("Comparando População...\n");
       resultado2 = populacao1 > populacao2 ? 1 : 0; 
        break;
    case 2:
       printf("Comparando Área...\n");
       resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 3:
         printf("Comparando PIB...\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
       printf("Comparando Pontos Turísticos...\n");
       resultado2 = turistico1 > turistico2 ? 1 : 0;
        break;
    case 5:
        printf("Comparando Densidade Demográfica (invertida)...\n");
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Comparando PIB per capita...\n");
        resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
        break;
    case 7:
        printf("Comparando Super Poder...\n");
        resultado2 = super_poder1 > super_poder2 ? 1 : 0;
        break;    
     default:
        printf("Opção inválida.\n");
        break;
     }

     if (resultado1 && resultado2) {
        printf("Carta 1 vence!\n"); 
    } else if (!resultado1 != resultado2) {
        printf("Empate\n");
    } else {
        printf("Carta 2 vence!\n");

     }

    return 0;
}
