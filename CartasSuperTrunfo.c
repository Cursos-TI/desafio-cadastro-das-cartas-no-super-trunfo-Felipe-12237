#include <stdio.h>
#include <string.h>

typedef struct super
{
    char estado[2];
    char codigo[10];
    char nome[50];
    int populacao, pontos_turisticos;
    double pib, area, densidade, pib_per_capita;
} Cartas;

double calcular_pib_per_capita(double pib, int populacao) {
    if (populacao <= 0) {
        return 0;
    }
    return pib / populacao;
}

double calcular_densidade_populacional(int populacao, double area) {
    if (area <= 0) {
        return 0;
    }
    return populacao / area;
}

int main() {
    Cartas carta1, carta2;

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", carta1.nome);
    printf("Digite o estado: \n");
    scanf("%s", carta1.estado);
    printf("Digite o codigo: \n");
    scanf("%s", carta1.codigo);
    printf("Digite a área: ");
    scanf("%lf", &carta1.area);
    printf("Digite a população: \n");
    scanf("%d", &carta1.populacao);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &carta1.pontos_turisticos);
    printf("Digite o PIB:");
    scanf("%lf", &carta1.pib);
  
    carta1.pib_per_capita = calcular_pib_per_capita(carta1.pib, carta1.populacao);
    carta1.densidade = calcular_densidade_populacional(carta1.populacao, carta1.area);

    while (getchar() != '\n'); 
   
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", carta2.nome);
    printf("Digite o estado: \n");
    scanf("%s", carta2.estado);
    printf("Digite o codigo: \n");
    scanf("%s", carta2.codigo);
    printf("Digite a área: ");
    scanf("%lf", &carta2.area);
    printf("Digite a população: \n");
    scanf("%d", &carta2.populacao);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &carta2.pontos_turisticos);
    printf("Digite o PIB:");
    scanf("%lf", &carta2.pib);

    carta2.pib_per_capita = calcular_pib_per_capita(carta2.pib, carta2.populacao);
    carta2.densidade = calcular_densidade_populacional(carta2.populacao, carta2.area);

    // Dados da carta 1
    printf("\nDados da primeira carta:\n");
    printf("Nome:%s \n", carta1.nome);
    printf("Estado:%s \n", carta1.estado);
    printf("Código:%s \n", carta1.codigo);
    printf("Área:%.1fKM² \n", carta1.area);
    printf("População:%d \n", carta1.populacao);
    printf("PIB:%.1f Milhões \n", carta1.pib);
    printf("Pontos turisticos:%d \n", carta1.pontos_turisticos);
    printf("PIB per capita: %.2lf\n", carta1.pib_per_capita);
    printf("Densidade populacional: %.2lf\n", carta1.densidade);

    //Dados da carta 2
    printf("\nDados da segunda carta:\n");
    printf("Nome:%s \n", carta2.nome);
    printf("Estado:%s \n", carta2.estado);
    printf("Código:%s \n", carta2.codigo);
    printf("Área:%.1fKM² \n", carta2.area);
    printf("População:%d \n", carta2.populacao);
    printf("PIB:%.1f Milhões \n", carta2.pib);
    printf("Pontos turisticos:%d \n", carta2.pontos_turisticos);
    printf("PIB per capita: %.2lf\n", carta2.pib_per_capita);
    printf("Densidade populacional: %.2lf\n", carta2.densidade);

    return 0;
}