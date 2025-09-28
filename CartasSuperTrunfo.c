#include <stdio.h>

int main (){

   // CARTA 1
   char estado[10];
   char carta[10];
   char cidade[20];
   unsigned long int populacao;
   float area;
   float pib;
   int pontos;
   float densidade;
   float percapita;
   float superpoder1;

   // CARTA 2
   char estado2[10];
   char carta2[10];
   char cidade2[20];
   unsigned long int populacao2;
   float area2;
   float pib2;
   int pontos2;
   float densidade2;
   float percapita2;
   float superpoder2;

   // ENTRADA DA CARTA 1
   printf("Carta 1.\n");

   printf("Estado: \n");
   scanf("%s", estado);

   printf("Código da Carta: \n");
   scanf("%s", carta);

   printf("Nome da Cidade: \n");
   scanf("%s", cidade);

   printf("População: \n");
   scanf("%lu", &populacao);

   printf("Área em km: \n");
   scanf("%f", &area);

   printf("PIB: \n");
   scanf("%f", &pib);

   printf("Pontos Turísticos: \n");
   scanf("%d", &pontos);

   //calculos das cartas 1
   densidade = (float) populacao / area;
   percapita = pib / populacao;
   superpoder1 = (float)populacao + area + pib + pontos + percapita + (1.0f / densidade);

   //ENTRADA CARTA 2
   printf("\nCarta 2.\n");

   printf("Estado: \n");
   scanf("%s", estado2);

   printf("Código da Carta: \n");
   scanf("%s", carta2);

   printf("digite o nome da cidade: \n");
    scanf("%s", cidade2);

   printf("População: \n");
   scanf("%lu", &populacao2);

   printf("Área em km: \n");
   scanf("%f", &area2);

   printf("PIB: \n");
   scanf("%f", &pib2);

   printf("Pontos Turísticos: \n");
   scanf("%d", &pontos2);

   //divisão das cartas 2
   densidade2 = (float) populacao2 / area2;
   percapita2 = pib2 / populacao2;
   superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + percapita2 + (1.0f / densidade2);

   // SAÍDA DA CARTA 1
   printf("\nCarta 1.\n");
   printf("Estado: %s\n", estado);
   printf("Código da Carta: %s\n", carta);
   printf("Nome da Cidade: %s\n", cidade);
   printf("População: %lu\n", populacao);
   printf("Área em km: %.2f\n", area);
   printf("PIB: %.2f\n", pib);
   printf("Pontos Turísticos: %d\n", pontos);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade);
   printf("PIB per Capita: %.2f reais\n", percapita);
   printf("Super Poder: %.2f\n", superpoder1);
   
   //SAÍDA DA CARTA 2
   printf("\nCarta 2.\n");
   printf("Estado: %s\n", estado2);
   printf("Código da Carta: %s\n", carta2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %lu\n", populacao2);
   printf("Área em km: %.2f\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Pontos Turísticos: %d\n", pontos2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
   printf("PIB per Capita: %.2f reais\n", percapita2);
   printf("Super Poder: %.2f\n", superpoder2);

   //COMPARAÇÕES
   printf("\n--- Comparação de Cartas ---\n");
   printf("População: Carta 1 venceu (%d)\n", populacao > populacao2 ? 1 : 0);
   printf("Área: Carta 1 venceu (%d)\n", area > area2 ? 1 : 0);
   printf("PIB: Carta 1 venceu (%d)\n", pib > pib2 ? 1 : 0);
   printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos > pontos2 ? 1 : 0);
   printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2 ? 1 : 0); 
   printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita > percapita2 ? 1 : 0);
   printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 0);
    
    return 0;
}