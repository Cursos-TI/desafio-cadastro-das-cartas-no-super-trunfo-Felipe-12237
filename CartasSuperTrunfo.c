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

int calcular_super_poder(Cartas carta) {
    return carta.populacao + carta.pontos_turisticos + (int)carta.pib + (int)carta.area;
}

void comparar_cartas(Cartas carta1, Cartas carta2) {
    int super_poder1 = calcular_super_poder(carta1);
    int super_poder2 = calcular_super_poder(carta2);

    printf("\n--- Resultado da Comparação ---\n");
    printf("Super Poder de %s: %d\n", carta1.nome, super_poder1);
    printf("Super Poder de %s: %d\n", carta2.nome, super_poder2);

    if (super_poder1 > super_poder2) {
        printf("%s vence!\n", carta1.nome);
    } else if (super_poder2 > super_poder1) {
        printf("%s vence!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }
}

int main() {
    Cartas carta1, carta2;

    //dados da carta1
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

    //Dados da carta2
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

    comparar_cartas(carta1, carta2);

    return 0;
}