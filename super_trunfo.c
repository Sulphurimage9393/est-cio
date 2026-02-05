#include <stdio.h>

int main() {
    // ==============================
    // Carta 1 - Paulínia
    // ==============================

    char cidade1[] = "Paulínia";
    char pais1[] = "Brasil";
    int populacao1 = 112000;
    float area1 = 139.3;
    float pib1 = 45000000000.0; // PIB aproximado
    int pontosTuristicos1 = 4;

    // ==============================
    // Carta 2 - Nova Odessa
    // ==============================

    char cidade2[] = "Nova Odessa";
    char pais2[] = "Brasil";
    int populacao2 = 62000;
    float area2 = 73.8;
    float pib2 = 6500000000.0; // PIB aproximado
    int pontosTuristicos2 = 3;

    // ==============================
    // Exibição das cartas
    // ==============================

    printf("=== CARTA 1 ===\n");
    printf("Cidade: %s\n", cidade1);
    printf("País: %s\n", pais1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos1);

    printf("=== CARTA 2 ===\n");
    printf("Cidade: %s\n", cidade2);
    printf("País: %s\n", pais2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

 
