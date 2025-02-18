#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Novato
// Autor: Lucas Ferreira
// Data: 17/02/2025
// Usei o máximo de comentários possíveis para documentar o código

int main() {

// Declarando as variáveis para armazenar as informações das cartas
    char estado; // Essa variável armazena o estado da cidade
    char codigo[4]; // Essa variável armazena o código da carta
    char nome[50]; // Essa variável armazena o nome da cidade
    char continuar; // Variável para continuar cadastrando as cartas
    int pontosTuristicos; // Essa variável é responsável por armazenar a quantidade de pontos turísticos da cidade
    int populacao; // Essa variável armazena a quantidade de pessoas na cidade (população)
    float area; // Essa variável é responsável por armazenar o dado da área da cidade em Km²
    float pib; // Essa variável é responsável por armazenar o PIB da cidade em bilhões de reais
    int numeroCarta; // Essa variável é responsável por armazenar o número da carta

// Iniciando o jogo de cartas
    printf("===== Super Trunfo - Cidades =====\n\n");

    numeroCarta = 1; // Iniciando o número da carta em 1

do {
// Cadastro das cartas
    printf("===== Cadastro da Carta %d =====\n", numeroCarta);

// Pedindo o estado da cidade
    printf("Digite o estado da cidade (Exemplo: A, B, C): ");
    scanf(" %c", &estado);

// Pedindo o código da cidade
    printf("Digite o código da cidade (Exemplo: A01, B02, C03): ");
    scanf("%s", codigo);

// Pedindo o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);

// Pedindo a população da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

// Pedindo a área da cidade em Km²
    printf("Digite a área da cidade (em Km²): ");
    scanf("%f", &area);

// Pedindo o PIB da cidade (em bilhões de reais)
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib);

// Pedindo a quantidade de pontos turísticos da cidade
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

// Mostrando as informações das cartas cadastradas
    printf("\n===== Carta %d =====\n", numeroCarta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("============================\n\n");

// Pergunta ao jogador se ele quer seguir ou parar de cadastrar cartas
    printf("Deseja cadastrar outra carta? (S/N): ");
    scanf(" %c", &continuar);
    printf("\n");

// Somando +1 ao número da carta
    numeroCarta++;

// Continuando o cadastro das cartas
} while (continuar == 'S' || continuar == 's');

// Finalizando o cadastro
printf("Cadastro finalizado. Obrigado por jogar!\n");

// Finalizando o programa
    return 0;
}
