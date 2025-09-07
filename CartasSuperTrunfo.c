#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado = 'A';
    char estado2 = 'B';
    char codigo1[3] = "01";
    char codigo2[3] = "02";
    char cidade[50];
    char cidade2[50];
    int população, pontos;
    int população2, pontos2;
    float área, PIB;
    float área2, PIB2;

    printf("Olá, usuário. Preencha os dados da primeira carta!\n\n");
    
    printf("Digite o nome da cidade: "); //Campo para o usuário digitar o nome da cidade
    scanf("%s", cidade); //Leitura da cidade
    
    printf("Digite a quantidade de pessoas da cidade: "); //Campo para o usuário digitar a população
    scanf("%d", &população); //Leitura população

    printf("Digite a área da cidade: "); //Campo para o usuário digitar o tamanho da cidade
    scanf("%f", &área); //Leitura do tamanho da cidade

    printf("Digite o valor de PIB (Use apenas valores inteiros): "); //Campo para o usuário digitar o PIB
    scanf("%f", &PIB); //Leitura PIB

    printf("Digite a quantidade de pontos turísticos da cidade: "); //Campo para o usuário digitar a qtde de pontos turísticos
    scanf("%d", &pontos); //Leitura pontos turísticos
    
    printf("\n\nAgora preencha os dados da segunda carta!\n\n");
    
    printf("Digite o nome da cidade: "); //Campo para o usuário digitar o nome da cidade
    scanf("%s", cidade2); //Leitura da cidade
    
    printf("Digite a quantidade de pessoas da cidade: "); //Campo para o usuário digitar a população
    scanf("%d", &população2); //Leitura população

    printf("Digite a área da cidade: "); //Campo para o usuário digitar o tamanho da cidade
    scanf("%f", &área2); //Leitura do tamanho da cidade

    printf("Digite o valor de PIB (Use apenas valores inteiros): "); //Campo para o usuário digitar o PIB
    scanf("%f", &PIB2); //Leitura PIB

    printf("Digite a quantidade de pontos turísticos da cidade: "); //Campo para o usuário digitar a qtde de pontos turísticos
    scanf("%d", &pontos2); //Leitura pontos turísticos

    printf("\n\n\nDesafio Super Triunfo!\n\n"); //Nome do jogo
    printf("Carta 1:\n"); //Titulo da primeira carta
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo1);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %.2f km²\n", área);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n\n", pontos);

    printf("Carta 2:\n"); //Titulo da segunda carta
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", área2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n\n", pontos2);


    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
