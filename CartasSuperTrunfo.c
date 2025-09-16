#include <stdio.h>

int main (){

   // CARTA 1
   char estado[3];
   char carta[3];
   char cidade[20];
   int população;
   float area;
   float PIB;
   int pontos;
   float densidade;
   float percapita;

   // CARTA 2
   char estado2[3];
   char carta2[3];
   char cidade2[20];
   int população2;
   float area2;
   float pib2;
   int pontos2;
   float densidade2;
   float percapita2;

   // ENTRADA DA CARTA 1
   printf("Carta 1.\n");

   printf("Estado: \n");
   scanf("%c", &estado);

   printf("Código da Carta: \n");
   scanf("%s", &carta);

   printf("Nome da Cidade: \n");
   scanf("%s", &cidade);

   printf("População: \n");
   scanf("%d", &população);

   printf("Área em km: \n");
   scanf("%f", &area);

   printf("PIB: \n");
   scanf("%f", &PIB);

   printf("Pontos Turísticos: \n");
   scanf("%d", &pontos);

   //divisão das cartas 1
   densidade = população / area;
   percapita = PIB / população;

   //ENTRADA CARTA 2
   printf("Carta 2.\n");

   printf("Estado: \n");
   scanf("%s", &estado2);

   printf("Código da Carta: \n");
   scanf("%s", &carta2);

   printf("digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

   printf("População: \n");
   scanf("%d", &população2);

   printf("Área em km: \n");
   scanf("%f", &area2);

   printf("PIB: \n");
   scanf("%f", &pib2);

   printf("Pontos Turísticos: \n");
   scanf("%d", &pontos2);

  //divisão das cartas 2
   densidade = população2 / area2;
   percapita = pib2 / população2;
 
    return 0;
}