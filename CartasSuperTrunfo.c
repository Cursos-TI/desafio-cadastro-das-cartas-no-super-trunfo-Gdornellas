#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    

    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    char cidade [50];
    char codigo [3];
    char pais [20];
    char estado [20];

    printf ("País: \n");
    scanf ("%s", &pais);

    printf ("Cadastre o estado: \n");
    scanf ("%s", &estado);

    printf ("Cadastre a cidade: \n");
    scanf ("%s", &cidade);

    printf ("Cadastre o código da carta: \n");
    scanf ("%s", &codigo);

    printf ("Cadastre a população da cidade: \n");
    scanf ("%d", &populacao);

    printf ("Cadastre a área da cidade: \n");
    scanf ("%f", &area);

    printf ("Cadastre o o PIB da cidade: \n");
    scanf ("%f", &pib);

    printf ("Cadastre a quantidade de pontos turísticos da cidade: \n");
    scanf ("%d", &pontosturisticos);

    printf ("Código da carta: %s\n", codigo);
    printf ("País: %s\n", pais);
    printf ("Estado: %s\n", estado);
    printf ("Cidade: %s\n", cidade);
    printf ("População: %d\n", populacao);
    printf ("Área da cidade: %d\n", area);
    printf ("PIB da cidade: %s\f", pib);
    printf ("Pontos turísticos: %d\n", pontosturisticos);


    return 0;
}