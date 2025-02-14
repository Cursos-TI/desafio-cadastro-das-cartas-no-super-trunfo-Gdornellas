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

    
   
    char cartas [8][8][20]; // matriz para armazenar 8 cartas com 8 campos de 20 caracteres cada

    for (int l = 0; l < 8 ; l++)
    {
      
    printf ("País: \n");
    fgets (cartas[l][0], 20, stdin);

    printf ("Cadastre o estado: \n");
    fgets (cartas[l][1], 20, stdin);

    printf ("Cadastre a cidade: \n");
    fgets (cartas[l][2], 20, stdin);

    printf ("Cadastre o código da carta: \n");
    fgets (cartas[l][3], 20, stdin);

    printf ("Cadastre a população da cidade: \n");
    fgets (cartas[l][4], 20, stdin);

    printf ("Cadastre a área da cidade: \n");
    fgets (cartas[l][5], 20, stdin);

    printf ("Cadastre o o PIB da cidade: \n");
    fgets (cartas[l][6], 20, stdin);

    printf ("Cadastre a quantidade de pontos turísticos da cidade: \n");
    fgets (cartas[l][7], 20, stdin);
      

    }

    for (int n = 0; n < 8; n++) { 
        // Remover o caractere de nova linha
        for (int m = 0; m < 8; m++) {
            size_t len = strlen(cartas[n][m]);
            if (len > 0 && cartas[n][m][len - 1] == '\n') {
                cartas[n][m][len - 1] = '\0';
            }
        }
    
       
    
    printf ("Código da carta: %s \n", cartas [n][3]);
    printf ("País: %s \n", cartas [n][0]);
    printf ("Estado: %s \n", cartas [n][1]);
    printf ("Cidade: %s \n", cartas [n][2]);
    printf ("População: %s \n", cartas [n][4]);
    printf ("Área da cidade: %s \n", cartas [n][5]);
    printf ("PIB da cidade: %s \n", cartas [n][6]);
    printf ("Pontos turísticos: %s \n", cartas [n][7]);
    printf ("\n");
    
    }


    return 0;
}