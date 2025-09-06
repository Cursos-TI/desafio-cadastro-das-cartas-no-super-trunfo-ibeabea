#include <stdio.h>

int main (){
    
   char estado[1];
   char carta[3];
   char cidade[20];
   int população;
   float area;
   float PIB;
   int pontos; 

   char estado2;
   char carta2[3];
   char cidade2[20];
   int população2;
   float area2;
   float pib2;
   int pontos2;

   printf("Carta 1:\n");
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
   scanf("%f", &pib);

   printf("Pontos Turísticos: \n\n");
   scanf("%d", &pontos);
   
   printf("Carta 2: \n");
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

    return 0;
}
