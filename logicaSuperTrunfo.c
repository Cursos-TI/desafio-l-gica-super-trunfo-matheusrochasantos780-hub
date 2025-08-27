#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[30];
    int codigo;
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;
    int atributo;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Codigo: ");
    scanf("%d", &carta1.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Codigo: ");
    scanf("%d", &carta2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    printf("\n");

    // Escolha do atributo para comparação
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos turisticos\n");
    scanf("%d", &atributo);

    printf("\nResultado da comparacao:\n");

    if (atributo == 1) {
        // Populacao: menor valor vence
        if (carta1.populacao < carta2.populacao)
            printf("Carta 1 (%s) vence!\n", carta1.cidade);
        else if (carta2.populacao < carta1.populacao)
            printf("Carta 2 (%s) vence!\n", carta2.cidade);
        else
            printf("Empate!\n");
    } else if (atributo == 2) {
        if (carta1.area > carta2.area)
            printf("Carta 1 (%s) vence!\n", carta1.cidade);
        else if (carta2.area > carta1.area)
            printf("Carta 2 (%s) vence!\n", carta2.cidade);
        else
            printf("Empate!\n");
    } else if (atributo == 3) {
        if (carta1.pib > carta2.pib)
            printf("Carta 1 (%s) vence!\n", carta1.cidade);
        else if (carta2.pib > carta1.pib)
            printf("Carta 2 (%s) vence!\n", carta2.cidade);
        else
            printf("Empate!\n");
    } else if (atributo == 4) {
        if (carta1.pontos_turisticos > carta2.pontos_turisticos)
            printf("Carta 1 (%s) vence!\n", carta1.cidade);
        else if (carta2.pontos_turisticos > carta1.pontos_turisticos)
            printf("Carta 2 (%s) vence!\n", carta2.cidade);
        else
            printf("Empate!\n");
    } else {
        printf("Atributo invalido!\n");
    }

    return 0;
}
