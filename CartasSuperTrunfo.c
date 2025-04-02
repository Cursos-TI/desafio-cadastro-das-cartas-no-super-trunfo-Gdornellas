#include <stdio.h>
#include <string.h>

int main() {
    char cartas[2][4][20];  // matriz para armazenar 2 cartas com 4 campos de 20 caracteres cada
    unsigned long int cartasnum[2][4];    // matriz para armazenar dados numéricos
    float denpop, pibper, superpoder;
    float denpop1, pibper1, superpoder1;

    for (int l = 0; l < 2; l++) {
        printf("País: \n");
        fgets(cartas[l][0], 20, stdin);

        printf("Cadastre o estado: \n");
        fgets(cartas[l][1], 20, stdin);

        printf("Cadastre a cidade: \n");
        fgets(cartas[l][2], 20, stdin);

        printf("Cadastre o código da carta: \n");
        fgets(cartas[l][3], 20, stdin);

        printf("Cadastre a população da cidade: \n");
        scanf("%d", &cartasnum[l][0]);

        printf("Cadastre a área da cidade: \n");
        scanf("%d", &cartasnum[l][1]);

        printf("Cadastre o PIB da cidade: \n");
        scanf("%d", &cartasnum[l][2]);

        printf("Cadastre a quantidade de pontos turísticos da cidade: \n");
        scanf("%d", &cartasnum[l][3]);
        getchar(); // Limpa o buffer do stdin
    }

    for (int n = 0; n < 2; n++) {
        // Remover o caractere de nova linha
        for (int m = 0; m < 4; m++) {
            size_t len = strlen(cartas[n][m]);
            if (len > 0 && cartas[n][m][len - 1] == '\n') {
                cartas[n][m][len - 1] = '\0';
            }
        }
    }

    // Adicionar Densidade populacional (população / área) e PIB per capita (PIB / população)
    int pop = cartasnum[0][0];
    int pib = cartasnum[0][2];
    int area = cartasnum[0][1];
    denpop = (float)pop / area;
    pibper = (float)pib / pop;

    int pop1 = cartasnum[1][0];
    int pib1 = cartasnum[1][2];
    int area1 = cartasnum[1][1];
    denpop1 = (float)pop1 / area1;
    pibper1 = (float)pib1 / pop1;

    //Adicionar superpoder

    superpoder = cartasnum[0][0] + cartasnum[0][1] + cartasnum[0][2] + cartasnum[0][3] + pibper + (1.0 / denpop);
    superpoder1 = cartasnum[1][0] + cartasnum[1][1] + cartasnum[1][2] + cartasnum[1][3] + pibper1 + (1.0 / denpop1);

    printf("Código da carta: %s \n", cartas[0][3]);
    printf("País: %s \n", cartas[0][0]);
    printf("Estado: %s \n", cartas[0][1]);
    printf("Cidade: %s \n", cartas[0][2]);
    printf("População: %d \n", cartasnum[0][0]);
    printf("Área da cidade: %d Km² \n", cartasnum[0][1]);
    printf("PIB da cidade: %d \n", cartasnum[0][2]);
    printf("Pontos turísticos: %d \n", cartasnum[0][3]);
    printf("Densidade populacional: %.2f \n", denpop);
    printf("PIB per Capita: %.2f \n", pibper);
    printf("Super Poder: %.2f \n", superpoder);
    printf("\n");

    printf("Código da carta: %s \n", cartas[1][3]);
    printf("País: %s \n", cartas[1][0]);
    printf("Estado: %s \n", cartas[1][1]);
    printf("Cidade: %s \n", cartas[1][2]);
    printf("População: %d \n", cartasnum[1][0]);
    printf("Área da cidade: %d Km² \n", cartasnum[1][1]);
    printf("PIB da cidade: %d \n", cartasnum[1][2]);
    printf("Pontos turísticos: %d \n", cartasnum[1][3]);
    printf("Densidade populacional: %.2f \n", denpop1);
    printf("PIB per Capita: %.2f \n", pibper1);
    printf("Super Poder: %.2f \n", superpoder1);
    printf("\n");

    //adicionar comparação das cartas

    printf("Comparação das cartas\n");
    printf("população: Carta 1 venceu? %d \n", cartasnum[0][0] > cartasnum [1][0]);
    printf("Área: Carta 1 venceu? %d \n", cartasnum[0][1] > cartasnum [1][1]);
    printf("PIB: Carta 1 venceu? %d \n", cartasnum[0][2] > cartasnum [1][2]);
    printf("Pontos Turísticos: Carta 1 venceu? %d \n", cartasnum[0][3] > cartasnum [1][3]);
    printf("Densidade Populacional: Carta 1 venceu? %d \n", denpop < denpop1);
    printf("PIB per Capita: Carta 1 venceu? %d \n", pibper > pibper1);
    printf("SUPER PODER: Carta 1 venceu? %d \n", superpoder > superpoder1);

    return 0; 

    
}