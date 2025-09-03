#include <stdio.h>

int main (){
    char estado =  'P';
   char carta[20] = "PA1";
   char cidade[20] = "Belém";
   int população = 1303.389;
   float area = 1.059458;
   float PIB = 21.19147;
   int pontos = 23; 

   char estado2 = 'B';
   char carta2[20] = "BA2";
   char cidade2[20] = "Salvador";
   int população2 = 4.029910;
   float area2 = 693.442;
   float pib2 = 62.954;
   int pontos2 = 10;

    printf("Carta 1:\n");

   printf("Estado: %c\n", estado);
   printf("Código da Carta: %s\n", carta);
   printf("Nome da Cidade: %s\n", cidade);
   printf("População: %d\n", população);
   printf("Área em km: %f\n", area);
   printf("PIB: %f\n", PIB);
   printf("Número de Pontos Turísticos: %d\n\n", pontos);
   
   printf("Carta 2:");
   printf("Estado: %c\n", estado2);
   printf("Código da Carta: %s\n", carta2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %d\n", população2);
   printf("Área em km: %f\n", area2);
   printf("PIB: %f\n", pib2);
   printf("Número de Pontos Turísticos: %d\n\n", pontos2);

    return 0;
}
