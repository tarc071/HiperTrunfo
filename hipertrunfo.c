#include <stdio.h>

int main()
{
    printf("BEM VINDOS AO HIPER TRUNFO, HDSPM!\n");
    printf("_________________\n");
    

    char estado1[20], estado2[20], cod1[20], cod2[20], cidade1[20], cidade2[20]; 
    long long int populacao1, populacao2;
    int turismo1, turismo2;
    double area1, area2, pib1, pib2, densidade1, densidade2, ppc1, ppc2;
    double super1, super2;

 // CARTA 01   

    printf("INSIRA DADOS DA CARTA 01\n");

    printf("INSIRA NOME DO ESTADO 01\n");
    scanf("%s", estado1);
    printf("INSIRA CÓDIGO DA CARTA 01\n");
    scanf("%s", cod1);
    printf("INSIRA CIDADE DO ESTADO 01\n");
    scanf("%s", cidade1);
    printf("INSIRA POPULACAO DO ESTADO 01\n");
    scanf("%lld", &populacao1);
    printf("INSIRA ÁREA DO ESTADO 01\n");
    scanf("%lf", &area1);
    printf("INSIRA PIB DO ESTADO 01\n");
    scanf("%lf", &pib1);
    printf("INSIRA PONTOS TURISTICOS DO ESTADO 01\n");
    scanf("%d", &turismo1);

    // CALCULA DERIVADOS DA CARTA 01

    densidade1 = populacao1 / area1;
    ppc1 = pib1 / populacao1;

    // SUPER PODER CARTA 01
    super1 = (double)populacao1 + area1 + pib1 + (double)turismo1 + ppc1 + (1.0 / densidade1);

// CARTA DOIS 

    printf("INSIRA DADOS DA CARTA 02\n");

    printf("INSIRA NOME DO ESTADO 02\n");
    scanf("%s", estado2);
    printf("INSIRA CÓDIGO DA CARTA 02\n");
    scanf("%s", cod2);
    printf("INSIRA CIDADE DO ESTADO 02\n");
    scanf("%s", cidade2);
    printf("INSIRA POPULACAO DO ESTADO 02\n");
    scanf("%lld", &populacao2);
    printf("INSIRA ÁREA DO ESTADO 02\n");
    scanf("%lf", &area2);
    printf("INSIRA PIB DO ESTADO 02\n");
    scanf("%lf", &pib2);
    printf("INSIRA PONTOS TURISTICOS DO ESTADO 02\n");
    scanf("%d", &turismo2);

// CALCULA DERIVADOS DA CARTA 02

densidade2 = populacao2 / area2;
ppc2 = pib2 / populacao2;

    // SUPER PODER CARTA 02
    super2 = (double)populacao2 + area2 + pib2 + (double)turismo2 + ppc2 + (1.0 / densidade2);

 // --- RESULTADOS    

    printf("==_-_== RESULTADOS ==_-_==\n");

    printf("AGORA VAMOS AOS RESULTADOS, CABRONES!\n");

// RESULTADOS CARTA 01    

    printf("ESTADO 01: %s\n", estado1);
    printf("CÓDIGO 01: %s\n", cod1);
    printf("CIDADE 01: %s\n", cidade1);
    printf("POPULACAO 01: %lld\n", populacao1);
    printf("AREA 01: %.2f\n", area1);
    printf("PIB 01: %.2f\n", pib1);
    printf("PONTOS TURISTICOS 01: %d\n", turismo1);
    printf("DENSIDADE POPULACIONAL 01: %.2f\n", densidade1);
    printf("PIB PER CAPITA 01: %.2f\n", ppc1);

 // RESULTADOS CARTA 02

    printf("ESTADO 02: %s\n", estado2);
    printf("CÓDIGO 02: %s\n", cod2);
    printf("CIDADE 02: %s\n", cidade2);
    printf("POPULACAO 02: %lld\n", populacao2);
    printf("AREA 02: %.2f\n", area2);
    printf("PIB 02: %.2f\n", pib2);
    printf("PONTOS TURISTICOS 02: %d\n", turismo2);
    printf("DENSIDADE POPULACIONAL 02: %.2f\n", densidade2);
    printf("PIB PER CAPITA 02: %.2f\n", ppc2);

 // --- COMPARAÇÕES
    printf("\n== COMPARAÇÃO ENTRE CARTAS ==\n");

    // População
    if (populacao1 > populacao2) printf("População: Carta 01 venceu!\n");
    else if (populacao2 > populacao1) printf("População: Carta 02 venceu!\n");
    else printf("População: Empate!\n");

    // Área
    if (area1 > area2) printf("Área: Carta 01 venceu!\n");
    else if (area2 > area1) printf("Área: Carta 02 venceu!\n");
    else printf("Área: Empate!\n");

    // PIB
    if (pib1 > pib2) printf("PIB: Carta 01 venceu!\n");
    else if (pib2 > pib1) printf("PIB: Carta 02 venceu!\n");
    else printf("PIB: Empate!\n");

    // Turismo
    if (turismo1 > turismo2) printf("Turismo: Carta 01 venceu!\n");
    else if (turismo2 > turismo1) printf("Turismo: Carta 02 venceu!\n");
    else printf("Turismo: Empate!\n");

    // Densidade (menor vence)
    if (densidade1 < densidade2) printf("Densidade: Carta 01 venceu!\n");
    else if (densidade2 < densidade1) printf("Densidade: Carta 02 venceu!\n");
    else printf("Densidade: Empate!\n");

    // PIB per capita
    if (ppc1 > ppc2) printf("PIB per capita: Carta 01 venceu!\n");
    else if (ppc2 > ppc1) printf("PIB per capita: Carta 02 venceu!\n");
    else printf("PIB per capita: Empate!\n");

    // Super Poder
    if (super1 > super2) printf("SUPER PODER: Carta 01 venceu!\n");
    else if (super2 > super1) printf("SUPER PODER: Carta 02 venceu!\n");
    else printf("SUPER PODER: Empate!\n");





    return 0;
}

