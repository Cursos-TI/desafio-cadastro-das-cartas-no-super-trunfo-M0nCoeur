#include <stdio.h>

// Desafio Super Trunfo
// Autor: Lucas Ferreira
// Data: 17/02/2025

// Função para calcular o "Super Poder" de uma carta, que é uma soma dos valores das propriedades da cidade
float calcularSuperPoder(int populacao, float area, float pib, int pontosTuristicos, float densidadePopulacional, float pibPerCapita) {
    return populacao + area + pib + pontosTuristicos + densidadePopulacional + pibPerCapita;
}

// Função que compara o "Super Poder" de duas cartas e também verifica qual delas tem a menor densidade populacional
void compararCartas(float superPoder1, float superPoder2, int densidadePopulacional1, int densidadePopulacional2) {
    // Comparando o Super Poder das cartas
    if (superPoder1 > superPoder2) {
        printf("A Carta 1 Venceu! (Super Poder maior)\n");
    } else if (superPoder2 > superPoder1) {
        printf("A Carta 2 Venceu! (Super Poder maior)\n");
    } else {
        printf("As Cartas são Empatadas! (Super Poder igual)\n");
    }

    // Comparando a Densidade Populacional (quanto menor a densidade, melhor)
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("A Carta 1 venceu na Densidade Populacional!\n");
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("A Carta 2 venceu na Densidade Populacional!\n");
    } else {
        printf("Empate na Densidade Populacional!\n");
    }
}

int main() {
    // Variáveis para armazenar os dados da cidade
    char estado; // Estado da cidade
    char codigo[4]; // Código da cidade
    char nome[50]; // Nome da cidade
    char continuar[3]; // Se o jogador deseja continuar cadastrando cartas
    int pontosTuristicos; // Quantidade de pontos turísticos
    int populacao; // População da cidade
    float area; // Área da cidade em Km²
    float pib; // PIB da cidade em bilhões de reais
    int numeroCarta; // Número da carta que está sendo cadastrada

    // Array para armazenar os "Super Poderes" das cartas cadastradas
    float superPoderes[100];
    int numCartas = 0; // Contador para o número de cartas cadastradas

    // Mensagem inicial
    printf("===== Super Trunfo - Cidades =====\n\n");

    numeroCarta = 1; // Começando a numeração das cartas a partir de 1

    do {
        // Começando o cadastro de uma nova carta
        printf("===== Cadastro da Carta %d =====\n", numeroCarta);

        // Coletando os dados da cidade
        printf("Digite o estado da cidade (Exemplo: A, B, C): ");
        scanf(" %c", &estado);

        printf("Digite o código da cidade (Exemplo: A01, B02, C03): ");
        scanf("%s", codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome);

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao);

        printf("Digite a área da cidade (em Km²): ");
        scanf("%f", &area);

        printf("Digite o PIB da cidade (em bilhões de reais): ");
        scanf("%f", &pib);

        printf("Digite a quantidade de pontos turísticos da cidade: ");
        scanf("%d", &pontosTuristicos);

        // Calculando a densidade populacional e o PIB per capita
        float densidadePopulacional = populacao / area;
        float pibPerCapita = pib * 1000000000 / populacao; // PIB per capita em reais

        // Calculando o "Super Poder" da carta
        float superPoder = calcularSuperPoder(populacao, area, pib, pontosTuristicos, densidadePopulacional, pibPerCapita);

        // Armazenando o Super Poder da carta no array
        superPoderes[numCartas] = superPoder;
        numCartas++;

        // Exibindo as informações da carta cadastrada
        printf("\n===== Carta %d =====\n", numeroCarta);
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", nome);
        printf("População: %d habitantes\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita);
        printf("Super Poder: %.2f\n", superPoder);


        // Determinando a classificação da cidade pela população
        if (populacao < 100000) {
            printf("Classificação: Cidade Pequena\n");
        } else if (populacao >= 100000 && populacao <= 1000000) {
            printf("Classificação: Cidade Média\n");
        } else if (populacao > 1000000) {
            printf("Classificação: Cidade Grande\n");
        }

        printf("============================\n\n");

        // Pergunta se o jogador quer continuar cadastrando mais cartas
        printf("Deseja cadastrar outra carta? (Sim/Não): ");
        scanf(" %[^\n]", continuar);
        printf("\n");

        // Incrementando mais um no número da carta
        numeroCarta++;

    } while (continuar[0] == 'S' || continuar[0] == 's'); // Continuar se a resposta for 'S' ou 's'

    // Verificando se há pelo menos 2 cartas cadastradas para poder fazer a comparação
    if (numCartas >= 2) {
        printf("\n===== Comparação de Cartas =====\n");
        printf("Comparando Carta 1 e Carta 2...\n");
        compararCartas(superPoderes[0], superPoderes[1], 1, 1);  // Comparação entre a Carta 1 e a Carta 2
    } else {
        printf("Não há cartas suficientes para comparar.\n");
    }

    // Finalizando o jogo
    printf("Jogo finalizado. Obrigado por jogar!\n");

    return 0;
}
