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

    // Exibe os dados das cartas para o jogador
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
        "PIB per Capita: %.2f reais\n",
        estado, codigo, nome_cidade, populacao, area, pib, ponto_turistico, densidade_populacional, pib_per_capta
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
        "PIB per Capita: %.2f reais\n",
        estado2, codigo2, nome_cidade2, populacao2, area2, pib2, ponto_turistico2, densidade_populacional2, pib_per_capta2
    );

    // --- Nível Mestre: Batalha com Dois Atributos ---

    int escolha1, escolha2;
    char nome_attr1[30], nome_attr2[30];
    double val1_c1, val1_c2, val2_c1, val2_c2;
    double soma_c1, soma_c2;

    // --- Escolha do primeiro atributo ---
    printf("\n--- Batalha Super Trunfo ---\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional (menor vence)\n");
    printf("6. PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    // --- Escolha do segundo atributo (Menu Dinâmico) ---
    do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        if (escolha1 != 1) printf("1. Populacao\n");
        if (escolha1 != 2) printf("2. Area\n");
        if (escolha1 != 3) printf("3. PIB\n");
        if (escolha1 != 4) printf("4. Pontos Turisticos\n");
        if (escolha1 != 5) printf("5. Densidade Populacional (menor vence)\n");
        if (escolha1 != 6) printf("6. PIB per Capita\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha2);

        if (escolha1 == escolha2) {
            printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
        }
        if (escolha2 < 1 || escolha2 > 6) {
             printf("\nErro: Opcao invalida. Tente novamente.\n");
        }

    } while (escolha1 == escolha2 || escolha2 < 1 || escolha2 > 6);

    // Armazena valores do ATRIBUTO 1
    switch (escolha1) {
        case 1: strcpy(nome_attr1, "Populacao"); val1_c1 = (double)populacao; val1_c2 = (double)populacao2; break;
        case 2: strcpy(nome_attr1, "Area"); val1_c1 = area; val1_c2 = area2; break;
        case 3: strcpy(nome_attr1, "PIB"); val1_c1 = pib; val1_c2 = pib2; break;
        case 4: strcpy(nome_attr1, "Pontos Turisticos"); val1_c1 = (double)ponto_turistico; val1_c2 = (double)ponto_turistico2; break;
        case 5: strcpy(nome_attr1, "Densidade Pop."); val1_c1 = 1.0 / densidade_populacional; val1_c2 = 1.0 / densidade_populacional2; break;
        case 6: strcpy(nome_attr1, "PIB per Capita"); val1_c1 = pib_per_capta; val1_c2 = pib_per_capta2; break;
    }

    // Armazena valores do ATRIBUTO 2
    switch (escolha2) {
        case 1: strcpy(nome_attr2, "Populacao"); val2_c1 = (double)populacao; val2_c2 = (double)populacao2; break;
        case 2: strcpy(nome_attr2, "Area"); val2_c1 = area; val2_c2 = area2; break;
        case 3: strcpy(nome_attr2, "PIB"); val2_c1 = pib; val2_c2 = pib2; break;
        case 4: strcpy(nome_attr2, "Pontos Turisticos"); val2_c1 = (double)ponto_turistico; val2_c2 = (double)ponto_turistico2; break;
        case 5: strcpy(nome_attr2, "Densidade Pop."); val2_c1 = 1.0 / densidade_populacional; val2_c2 = 1.0 / densidade_populacional2; break;
        case 6: strcpy(nome_attr2, "PIB per Capita"); val2_c1 = pib_per_capta; val2_c2 = pib_per_capta2; break;
    }

    // Calcula a soma dos "poderes" de cada atributo
    soma_c1 = val1_c1 + val2_c1;
    soma_c2 = val1_c2 + val2_c2;

    // --- Exibicao dos Resultados ---
    printf("\n--- RESULTADO DA BATALHA ---\n");
    printf("Atributos escolhidos: %s e %s\n\n", nome_attr1, nome_attr2);

    // Detalhes da Carta 1
    printf("--- Carta 1: %s ---\n", nome_cidade);
    printf("Valor (%s): %.2f\n", nome_attr1, val1_c1);
    printf("Valor (%s): %.2f\n", nome_attr2, val2_c1);
    printf("Soma dos Poderes: %.2f\n\n", soma_c1);

    // Detalhes da Carta 2
    printf("--- Carta 2: %s ---\n", nome_cidade2);
    printf("Valor (%s): %.2f\n", nome_attr1, val1_c2);
    printf("Valor (%s): %.2f\n", nome_attr2, val2_c2);
    printf("Soma dos Poderes: %.2f\n\n", soma_c2);

    // Determina o vencedor
    if (soma_c1 > soma_c2) {
        printf("VENCEDOR: Carta 1 (%s) com maior soma de poderes!\n", nome_cidade);
    } else if (soma_c2 > soma_c1) {
        printf("VENCEDOR: Carta 2 (%s) com maior soma de poderes!\n", nome_c2);
    } else {
        printf("RESULTADO: EMPATE! As cartas tem a mesma soma de poderes.\n");
    }

    return 0;
}