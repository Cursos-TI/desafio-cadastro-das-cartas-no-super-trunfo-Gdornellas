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

    

    char populacao [20]; 
    char area[20];
    char pib[20];
    char pontosturisticos[20];
    char cidade [50];
    char codigo [3];
    char pais [20];
    char estado [20];

    printf ("País: \n");
    fgets (pais, 20, stdin);

    printf ("Cadastre o estado: \n");
    fgets (estado, 20, stdin);

    printf ("Cadastre a cidade: \n");
    fgets (cidade, 20, stdin);

    printf ("Cadastre o código da carta: \n");
    fgets (codigo, 20, stdin);

    printf ("Cadastre a população da cidade: \n");
    fgets (populacao, 20, stdin);

    printf ("Cadastre a área da cidade: \n");
    fgets (area, 20, stdin);

    printf ("Cadastre o o PIB da cidade: \n");
    fgets (pib, 20, stdin);

    printf ("Cadastre a quantidade de pontos turísticos da cidade: \n");
    fgets (pontosturisticos, 20, stdin);

    printf ("Código da carta: %s \n", codigo);
    printf ("País: %s \n", pais);
    printf ("Estado: %s \n", estado);
    printf ("Cidade: %s \n", cidade);
    printf ("População: %d \n", populacao);
    printf ("Área da cidade: %d \n", area);
    printf ("PIB da cidade: %s \n", pib);
    printf ("Pontos turísticos: %d \n", pontosturisticos);


    return 0;
}