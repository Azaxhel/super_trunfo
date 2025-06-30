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
    unsigned long int populacao;
    double area;
    double pib;
    int ponto_turistico;
    double densidade_populacional;
    double pib_per_capta;
    double super_poder;

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
    scanf("%lu", &populacao);

    // Leitura da area
     printf("Digite o tamanho da area:\n");
    scanf("%lf", &area);

    // Leitura do PIB
    printf("Digite o valor do pib:\n");
    scanf("%lf", &pib);

    // Leitura ponto turistico
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &ponto_turistico);

    // Calculo das variaveis
    densidade_populacional = populacao/area;
    pib_per_capta = (pib * 1e9)/populacao;

    // Calculo super poder carta 1
    super_poder = (double)populacao + (double)area + (double)pib + (double)ponto_turistico + (double)pib_per_capta + (double)(1 / densidade_populacional);

    
    // Carta 2

    // declaracao de variaveis Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int ponto_turistico2;
    double densidade_populacional2;
    double pib_per_capta2;
    double super_poder2;

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
    scanf("%lu", &populacao2);

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

    // Calculo super poder Carta 2
    super_poder2 = (double)populacao2 + (double)area2 + (double)pib2 + (double)ponto_turistico2 + (double)pib_per_capta2 + (double)(1 / densidade_populacional2);

    printf(
        "\n--- Carta 1 ---\n"
        "Estado: %c\n"
        "Codigo da Carta: %s\n"
        "Cidade: %s\n"
        "Tamanho da Populacao: %lu\n"
        "Area: %.2f Km quadrados\n"
        "PIB: %.2f Bilhoes de Reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f Hab/km\n"
        "PIB per Capita: %.2f reais\n"
        "Super Poder: %.2f\n",
        estado, codigo, nome_cidade, populacao, area, pib, ponto_turistico, densidade_populacional, pib_per_capta, super_poder
    );



    printf(
        "\n--- Carta 2 ---\n"
        "Estado: %c\n"
        "Codigo da Carta: %s\n"
        "Cidade: %s\n"
        "Tamanho da Populacao: %lu\n"
        "Area: %.2f Km quadrados\n"
        "PIB: %.2f Bilhoes de Reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f Hab/km\n"
        "PIB per Capita: %.2f reais\n"
        "Super Poder: %.2f\n",
        estado2, codigo2, nome_cidade2, populacao2, area2, pib2, ponto_turistico2, densidade_populacional2, pib_per_capta2, super_poder2
    );

    // Verifica qual carta tem a maior População
    int venceu_populacao = (populacao > populacao2) ? 1 : 0;
    int venceu_area = (area > area2) ? 1 : 0;
    int venceu_pib = (pib > pib2) ? 1 : 0;
    int venceu_ponto_turistico = (ponto_turistico > ponto_turistico2) ? 1 : 0;
    int venceu_densidade_populacional = (densidade_populacional > densidade_populacional2) ? 0 : 1;
    int venceu_pib_per_capta = (pib_per_capta > pib_per_capta2) ? 1 : 0;  
    int venceu_super_poder = (super_poder > super_poder2) ? 1 : 0;

    
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta %d venceu (%d)\n", venceu_populacao ? 1 : 2, venceu_populacao);
    printf("Area: Carta %d venceu (%d)\n", venceu_area ? 1 : 2, venceu_area);
    printf("PIB: Carta %d venceu (%d)\n", venceu_pib ? 1 : 2, venceu_pib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", venceu_ponto_turistico ? 1 : 2, venceu_ponto_turistico);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", venceu_densidade_populacional ? 1 : 2, venceu_densidade_populacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n", venceu_pib_per_capta ? 1 : 2, venceu_pib_per_capta);
    printf("Super Poder: Carta %d venceu (%d)\n", venceu_super_poder ? 1 : 2, venceu_super_poder);
   
    
    // comparação de um unico atributo (População)
    printf("\nComparacao de Populacao:\n\n");

    if (populacao > populacao2 ){
        printf("Carta 1 %s - %lu\nCarta 2 %s - %lu\n\"Resultado:Carta 1(%s) venceu na Populacao!\n\"", nome_cidade, populacao, nome_cidade2, populacao2, nome_cidade);
    } else if (populacao < populacao2) {
        printf("Carta 1 %s - %lu\n Carta 2 %s - %lu\n \"Resultado:Carta 2(%s) venceu na Populacao!\n\"", nome_cidade, populacao, nome_cidade2, populacao2, nome_cidade2);
    } else {
        printf("As cartas possuem a mesma Populacao!\n");
    }

    return 0;
}