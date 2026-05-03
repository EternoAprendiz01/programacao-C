#include <stdio.h>

int main()
{

    // Carta 1
    char estado1;
    char codigocarta1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pibcidade1;
    int pontoturistico1;

    printf("Digite uma letra de A a H (representando um dos oito estados): \n");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 : \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pibcidade1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoturistico1);

    printf("Carta1\n");
    printf("Nome do Estado: %c - Código: %s \n", estado1, codigocarta1);
    printf("Nome da Cidade: %s - População: %d \n", nomecidade1, populacao1);
    printf("Área: %f - PIB: %f \n", area1, pibcidade1);
    printf("Número de pontos turísticos: %d \n", pontoturistico1);

    // Carta 2

    char estado2;
    char codigocarta2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pibcidade2;
    int pontoturistico2;

    printf("Digite uma letra de A a H (representando um dos oito estados): \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 : \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pibcidade2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoturistico2);

    printf("Carta2 \n");
    printf("Nome do Estado: %c - Código: %s \n", estado2, codigocarta2);
    printf("Nome da Cidade: %s - População: %d \n", nomecidade2, populacao2);
    printf("Área: %f - PIB: %f \n", area2, pibcidade2);
    printf("Número de pontos turísticos: %d \n", pontoturistico2);
}

// Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string) Nome da Cidade: O nome da cidade. Tipo: char[] (string) População: O número de habitantes da cidade. Tipo: int Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float PIB: O Produto Interno Bruto da cidade. Tipo: float Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int