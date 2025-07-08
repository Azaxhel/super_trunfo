Super Trunfo em C



Implementação em C para cadastro e exibição de duas cartas do jogo Super Trunfo, focada em variáveis e operações de entrada/saída.

📑 Sumário

Funcionalidades

Pré-requisitos

Como compilar

Como executar

Autor

## Funcionalidades

O projeto implementa um jogo de batalha de cartas Super Trunfo com as seguintes características:

- **Cadastro de Cartas:** Permite ao usuário inserir via teclado os dados de duas cartas, incluindo:
  - Estado (char)
  - Código da Carta (string)
  - Nome da Cidade (string)
  - População (`unsigned long int`)
  - Área (em km²)
  - PIB (em bilhões de Reais)
  - Número de Pontos Turísticos

- **Cálculos Automáticos:** O programa calcula e exibe automaticamente dois atributos derivados para cada carta:
  - **Densidade Populacional:** Habitantes por km².
  - **PIB per Capita:** Riqueza média por habitante.

- **Batalha Interativa com Múltiplos Atributos:**
  - O jogador escolhe **dois atributos diferentes** para a comparação através de um menu dinâmico.
  - O sistema impede a escolha do mesmo atributo duas vezes.
  - A carta com o maior valor vence para a maioria dos atributos.
  - **Regra Especial:** Para a **Densidade Populacional**, a carta com o **menor** valor é considerada mais forte.

- **Determinação do Vencedor:**
  - O sistema soma os "poderes" dos dois atributos escolhidos para cada carta.
  - A carta com a **maior soma total** vence a rodada.
  - O resultado da batalha é exibido de forma detalhada, incluindo os valores de cada atributo, a soma e a carta vencedora.
  - O programa também trata corretamente os casos de **empate**.

Pré-requisitos

GCC ou outro compilador C compatível.

Como compilar

gcc cartasupertrunfo.c -o cartasupertrunfo.exe

Como executar

./cartasupertrunfo.exe

Siga as instruções exibidas no terminal para inserir os dados de cada carta.

Autor

Enrique Linhares Gomides

Data: 19/05/2025

Curso: Análise e Desenvolvimento de Sistemas