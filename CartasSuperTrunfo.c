#include <stdio.h>
#include <string.h>

typedef struct super
{
    char estado[2];
    char codigo[10];
    char nome[50];
    int populacao, pontos_turisticos;
    double pib, area;
} Cartas;

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

    // Dados da carta1
    printf("\nDados da primeira carta:\n");
    printf("Nome:%s \n", carta1.nome);
    printf("Estado:%s \n", carta1.estado);
    printf("Código:%s \n", carta1.codigo);
    printf("Área:%.1fKM² \n", carta1.area);
    printf("População:%d \n", carta1.populacao);
    printf("PIB:%.1f Milhões \n", carta1.pib);
    printf("Pontos turisticos:%d \n", carta1.pontos_turisticos);
    
    // Dados da carta2
    printf("\nDados da segunda carta:\n");
    printf("Nome:%s \n", carta2.nome);
    printf("Estado:%s \n", carta2.estado);
    printf("Código:%s \n", carta2.codigo);
    printf("Área:%.1fKM² \n", carta2.area);
    printf("População:%d \n", carta2.populacao);
    printf("PIB:%.1f Milhões \n", carta2.pib);
    printf("Pontos turisticos:%d \n", carta2.pontos_turisticos);

    return 0;
}