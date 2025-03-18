#include <stdio.h>
#include <string.h>

int main()
{

     //PRIMEIRA CARTA

    char estado1[2];
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;

   
    printf("PRIMEIRA CARTA\n\n");


    printf("Digite o primeiro estado (de A a H): \n");
    scanf("%1s",estado1);

    printf("Digite o codigo do estado (ex: A01): \n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: \n");
    getchar(); // Limpa o \n do buffer
    scanf("%s", nomecidade1);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (m2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    

    printf("\n--- Dados da Primeira Carta ---\n");

    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f m2\n", area1);    
    printf("PIB: %.2f\n\n", pib1);
    
  
    //SEGUNDA CARTA
   
    char estado2[2];
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;

    printf("SEGUNDA CARTA\n\n");

    printf("Digite o segundo estado (de A a H): \n");
    scanf("%1s", estado2);

    printf("Digite o codigo do estado (ex: A01): \n");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade: \n");
    getchar(); // Limpa o \n do buffer
    scanf("%s", nomecidade2);
    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade (m2): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    
    printf("\n--- Dados da Segunda Carta ---\n");

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);

    return 0;
}