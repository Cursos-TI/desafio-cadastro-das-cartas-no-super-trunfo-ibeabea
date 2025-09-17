#include <stdio.h>

int main (){

   // CARTA 1
   char estado[10];
   char carta[10];
   char cidade[20];
   int populacao;
   float area;
   float PIB;
   int pontos;
   float densidade;
   float percapita;

   // CARTA 2
   char estado2[10];
   char carta2[10];
   char cidade2[20];
   int populacao2;
   float area2;
   float pib2;
   int pontos2;
   float densidade2;
   float percapita2;

   // ENTRADA DA CARTA 1
   printf("Carta 1.\n");

   printf("Estado: \n");
   scanf("%s", estado);

   printf("Código da Carta: \n");
   scanf("%s", carta);

   printf("Nome da Cidade: \n");
   scanf("%s", cidade);

   printf("População: \n");
   scanf("%d", &populacao);

   printf("Área em km: \n");
   scanf("%f", &area);

   printf("PIB: \n");
   scanf("%f", &PIB);

   printf("Pontos Turísticos: \n");
   scanf("%d", &pontos);

   //divisão das cartas 1
   densidade = (float) populacao / area;
   percapita = PIB / populacao;

   //ENTRADA CARTA 2
   printf("\nCarta 2.\n");

   printf("Estado: \n");
   scanf("%s", estado2);

   printf("Código da Carta: \n");
   scanf("%s", carta2);

   printf("digite o nome da cidade: \n");
    scanf("%s", cidade2);

   printf("População: \n");
   scanf("%d", &populacao2);

   printf("Área em km: \n");
   scanf("%f", &area2);

   printf("PIB: \n");
   scanf("%f", &pib2);

   printf("Pontos Turísticos: \n");
   scanf("%d", &pontos2);

  //divisão das cartas 2
   densidade2 = (float) populacao2 / area2;
   percapita2 = pib2 / populacao2;
 
   // SAÍDA DA CARTA 1
   printf("Carta 1.\n");
   printf("Estado: %s\n", estado);
   printf("Código da Carta: %s\n", carta);
   printf("Nome da Cidade: %s\n", cidade);
   printf("População: %d\n", populacao);
   printf("Área em km: %.2f\n", area);
   printf("PIB: %.2f\n", PIB);
   printf("Pontos Turísticos: %d\n", pontos);
  printf("Densidade Populacional: %.2f km²\n",densidade);
   printf("PIB per Capita: %.2f reais\n", percapita);
   
   //SAÍDA DA CARTA 2
   printf("Carta 2.\n");
   printf("Estado: %s\n", estado2);
   printf("Código da Carta: %s\n", carta2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área em km: %.2f\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Pontos Turísticos: %d\n", pontos2);
   printf("Densidade Populacional: %.2f km²\n",densidade2);
   printf("PIB per Capita: %.2f reais\n", percapita2);

    return 0;
}