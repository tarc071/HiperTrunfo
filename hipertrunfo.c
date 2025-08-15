#include <stdio.h>

int main()
{
    printf("BEM VINDOS AO HIPER TRUNFO, HDSPM!\n");
    printf("_________________\n");
    

    char estado1[20], estado2[20], cod1[20], cod2[20], cidade1[20], cidade2[20]; 
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1, pib2;

 // CARTA 01   

    printf("INSIRA DADOS DA CARTA 01\n");

    printf("INSIRA NOME DO ESTADO 01\n");
    scanf("%s", estado1);
    printf("INSIRA CÓDIGO DA CARTA 01\n");
    scanf("%s", cod1);
    printf("INSIRA CIDADE DO ESTADO 01\n");
    scanf("%s", cidade1);
    printf("INSIRA POPULACAO DO ESTADO 01\n");
    scanf("%d", &populacao1);
    printf("INSIRA ÁREA DO ESTADO 01\n");
    scanf("%f", &area1);
    printf("INSIRA PIB DO ESTADO 01\n");
    scanf("%f", &pib1);
    printf("INSIRA PONTOS TURISTICOS DO ESTADO 01\n");
    scanf("%d", &turismo1);

// CARTA DOIS 

    printf("INSIRA DADOS DA CARTA 02\n");

    printf("INSIRA NOME DO ESTADO 02\n");
    scanf("%s", estado2);
    printf("INSIRA CÓDIGO DA CARTA 02\n");
    scanf("%s", cod2);
    printf("INSIRA CIDADE DO ESTADO 02\n");
    scanf("%s", cidade2);
    printf("INSIRA POPULACAO DO ESTADO 02\n");
    scanf("%d", &populacao2);
    printf("INSIRA ÁREA DO ESTADO 02\n");
    scanf("%f", &area2);
    printf("INSIRA PIB DO ESTADO 02\n");
    scanf("%f", &pib2);
    printf("INSIRA PONTOS TURISTICOS DO ESTADO 02\n");
    scanf("%d", &turismo2);

 // --- RESULTADOS    

    printf("==_-_== RESULTADOS ==_-_==\n");

    printf("AGORA VAMOS AOS RESULTADOS, CABRONES!\n");

// RESULTADOS CARTA 01    

    printf("ESTADO 01: %s\n", estado1);
    printf("CÓDIGO 01: %s\n", cod1);
    printf("CIDADE 01: %s\n", cidade1);
    printf("POPULACAO 01: %d\n", populacao1);
    printf("AREA 01: %.3f\n", area1);
    printf("PIB 01: %.3f\n", pib1);
    printf("PONTOS TURISTICOS 01: %d\n", turismo1);

 // RESULTADOS CARTA 02

    printf("ESTADO 02: %s\n", estado2);
    printf("CÓDIGO 02: %s\n", cod2);
    printf("CIDADE 02: %s\n", cidade2);
    printf("POPULACAO 02: %d\n", populacao2);
    printf("AREA 02: %.3f\n", area2);
    printf("PIB 02: %.3f\n", pib2);
    printf("PONTOS TURISTICOS 02: %d\n", turismo2);



    return 0;
}

