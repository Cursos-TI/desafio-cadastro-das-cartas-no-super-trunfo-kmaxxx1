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
    int pontos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;
    float inverso1;

   
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

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    inverso1 = 1.0 / densidade1;

    superpoder1 = (populacao1 + area1 + pib1 + pontos1 + inverso1 + pibpercapita1)/6;

    
    
    printf("\n--- Dados da Primeira Carta ---\n");

    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f m2\n", area1);    
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Superpoder: %.2f\n\n", superpoder1);


  
    //SEGUNDA CARTA
   
    char estado2[2];
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;
    float inverso2;
    


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
    
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    inverso2 = 1.0 / densidade2;

    superpoder2 = (populacao2 + area2 + pib2 + pontos2 + inverso2 + pibpercapita2)/6;
    
    printf("\n--- Dados da Segunda Carta ---\n");

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Superpoder: %.2f\n\n", superpoder2);

    printf("\n--- Comparativo de cartas ---\n");

    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = pib1 > pib2;
    resultado4 = pontos1 > pontos2;
    resultado5 = inverso1 > inverso2;
    resultado6 = pibpercapita1 > pibpercapita2;
    resultado7 = superpoder1 > superpoder2;

    printf("Populacao: %d > %d? %d\n", populacao1, populacao2, resultado1);
    printf("Area: %.2f > %.2f? %d\n", area1, area2, resultado2);
    printf("PIB: %.2f > %.2f? %d\n", pib1, pib2, resultado3);
    printf("Pontos turisticos: %d > %d? %d\n", pontos1, pontos2, resultado4);
    printf("Densidade: %.2f > %.2f? %d\n", inverso1, inverso2, resultado5);
    printf("PIB per capita: %.2f > %.2f? %d\n", pibpercapita1, pibpercapita2, resultado6);
    printf("Superpoder: %.2f > %.2f? %d\n\n", superpoder1, superpoder2, resultado7);

    
    return 0;
}