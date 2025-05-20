/*
    Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta,
    o usuário deverá fornecer as seguintes informações:

        Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
        
        Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
        
        Nome da Cidade: O nome da cidade. Tipo: char[] (string)
        
        População: O número de habitantes da cidade. Tipo: int
        
        Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
        
        PIB: O Produto Interno Bruto da cidade. Tipo: float
        
        Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

#include <stdio.h>
#include <string.h>

int main(void){
    // declaracao de variaveis
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    double area;
    double pib;
    int ponto_turistico;
    double densidade_populacional;
    double pib_per_capta;

    // Leitura do estado
    printf("Digite a letra do Estado correspondente a carta:\n");
    scanf(" %c", &estado);

    // Leitura codigo da carta
    printf("Digite o Codigo da Carta:\n");
    scanf("%3s", codigo);

    getchar();

    // Leitura nome da cidade
    printf("Digite o nome da Cidade:\n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    // Remove o '\n' que o fgets deixa
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';

    // Leitura da população
    printf("Digite o Tamanho da Populacao:\n");
    scanf("%d", &populacao);

    // Leitura da area
     printf("Digite o tamanho da area:\n");
    scanf("%lf", &area);

    // Leitura do PIB
    printf("Digite o valor do pib:\n");
    scanf("%lf", &pib);

    // Leitura ponto turistico
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &ponto_turistico);

    // Definindo o calculo das variaveis
    densidade_populacional = populacao/area;
    pib_per_capta = (pib * 1e9)/populacao;

    printf(
        "\n--- Carta 1 ---\n"
        "Estado: %c\n"
        "Codigo da Carta: %s\n"
        "Cidade: %s\n"
        "Tamanho da Populacao: %d\n"
        "Area: %.2f Km quadrados\n"
        "PIB: %.2f Bilhoes de Reais\n"
        "Nmero de Pontos Tursticos: %d\n"
        "Densidade Populacional: %.2f Hab/km\n"
        "PIB per Capita: %.2f reais\n",

        estado, codigo, nome_cidade, populacao, area, pib, ponto_turistico, densidade_populacional, pib_per_capta
    );

    // Carta 2

    // declaracao de variaveis Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    double area2;
    double pib2;
    int ponto_turistico2;
    double densidade_populacional2;
    double pib_per_capta2;

    // Leitura do estado Carta 2
    printf("Digite a letra do Estado correspondente a carta:\n");
    scanf(" %c", &estado2);

    // Leitura codigo da carta 2
    printf("Digite o Codigo da Carta:\n");
    scanf("%3s", codigo2);

    getchar();

    // Leitura nome da cidade Carta 2
    printf("Digite o nome da Cidade:\n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    // Remove o '\n' que o fgets deixa
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    // Leitura da população Carta 2
    printf("Digite o Tamanho da Populacao:\n");
    scanf("%d", &populacao2);

    // Leitura da area Carta 2
     printf("Digite o tamanho da area:\n");
    scanf("%lf", &area2);

    // Leitura do PIB Carta 2
    printf("Digite o valor do pib:\n");
    scanf("%lf", &pib2);

    // Leitura ponto turistico Carta 2
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &ponto_turistico2);

    // Definindo o calculo das variaveis
    densidade_populacional2 = populacao2/area2;
    pib_per_capta2 = (pib2 * 1e9)/populacao2;

    printf(
        "\n--- Carta 2 ---\n"
        "Estado: %c\n"
        "Codigo da Carta: %s\n"
        "Cidade: %s\n"
        "Tamanho da Populacao: %d\n"
        "Area: %.2f Km quadrados\n"
        "PIB: %.2f Bilhoes de Reais\n"
        "Nmero de Pontos Tursticos: %d\n""Densidade Populacional: %.2f Hab/km\n"
        "PIB per Capita: %.2f reais\n",

        estado2, codigo2, nome_cidade2, populacao2, area2, pib2, ponto_turistico2, densidade_populacional2, pib_per_capta2
    );

    return 0;


}