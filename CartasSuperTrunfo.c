#include <stdio.h>

int main (){
    char estado =  'P';
   char carta[20] = "PB1";
   char cidade[20] = "Belém";
   int população = 1303.389;
   float area = 1.059458;
   float PIB = 21.19147;
   int pontos = 23; 

   printf("Estado: %c\n", estado);
   printf("Código da Carta: %s\n", carta);
   printf("Nome da Cidade: %s\n", cidade);
   printf("População: %d\n", população);
   printf("Área em km: %f\n", area);
   printf("PIB: %f\n", PIB);
   printf(" Número de Pontos Turísticos: %d\n", pontos);

    return 0;
}
