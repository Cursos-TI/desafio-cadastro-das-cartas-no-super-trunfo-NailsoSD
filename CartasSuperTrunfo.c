#include <stdio.h>

int main(){

    char estado1[20];
    char codigocarta1[10];
    char cidade1[20];
    int populacao1, npont1; //npont = Numero de ponto turistico
    float areakm1, pib1; 

    printf("CADASTRAMENTO DO 1º ESTADO \n");
    printf("\n");
    printf("Digite o codigo da Carta: ");
        scanf("%s", codigocarta1);
    printf("Digite o nome do Estado: ");
        scanf("%s", &estado1);
    printf("Digite o nome da Cidade: ");
        scanf("%s", &cidade1);
    printf("Digite a população: ");
        scanf("%d", &populacao1);
    printf("Digite a area em KM²: ");
        scanf("%f", &areakm1);
    printf("Digite o PIB: ");
        scanf("%f", &pib1);
    printf("Digite o numero de pontos Turisticos: ");
        scanf("%d", &npont1);

    char estado2[20];
    char codigocarta2[10];
    char cidade2[20];
    int populacao2, npont2; //npont = Numero de ponto turistico
    float areakm2, pib2; 

    printf("\n");
    printf("CADASTRAMENTO DO 2º ESTADO\n");
    printf("\n");
    printf("Digite o codigo da Carta: ");
        scanf("%s", codigocarta2);
    printf("Digite o nome do Estado: ");
        scanf("%s", &estado2);
    printf("Digite o nome da Cidade: ");
        scanf("%s", &cidade2);
    printf("Digite a população: ");
        scanf("%d", &populacao2);
    printf("Digite a area em KM²: ");
        scanf("%f", &areakm2);
    printf("Digite o PIB: ");
        scanf("%f", &pib2);
    printf("Digite o numero de pontos Turisticos: ");
        scanf("%d", &npont2); 

        printf("\n");
        printf("PRIMEIRA CIDADE\n");
        printf("\n");
        printf("Codigo da Carta do PRIMEIRO estado: %s\n", codigocarta1);
        printf("Nome do Estado: %s\n", estado1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("Numero da População: %d\n", populacao1);
        printf("Area em KM²: %f\n", areakm1);
        printf("PIB: %f\n", pib1);
        printf("Numero de ponto Turistico: %d\n", npont1);

        printf("\n");
        printf("SEGUNDA CIDADE\n");
        printf("\n");
        printf("Codigo da Carta do PRIMEIRO estado: %s\n", codigocarta2);
        printf("Nome do Estado: %s\n", estado2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("Numero da População: %d\n", populacao2);
        printf("Area em KM²: %f\n", areakm2);
        printf("PIB: %f\n", pib2);
        printf("Numero de ponto Turistico: %d\n", npont2);

        return 0;
}