#include <stdio.h>

int main()
{
    printf("BEM VINDOS AO HIPER TRUNFO, HDSPM!\n");

    char estado1[20], estado2[20], cod1[20], cod2[20], cidade1[20], cidade2[20]; 
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1, pib2;

    printf("INSIRA DADOS DA CARTA 01\n");

    printf("INSIRA NOME DO ESTADO 01\n");
    scanf("%s", estado1);
    printf("INSIRA CÓDIGO DA CARTA 01\n");
    scanf("%s", &cod1);
    printf("INSIRA CIDADE DO ESTADO 01\n");
    scanf("%s", &cidade1);
    printf("INSIRA POPULACAO DO ESTADO 01\n");
    scanf("%d", &populacao1);
    printf("INSIRA ÁREA DO ESTADO 01\n");
    scanf("%f", &area1);
    printf("INSIRA PIB DO ESTADO 01\n");
    scanf("%f", pib1);
    printf("INSIRA PONTOS TURISTICOS DO ESTADO 01\n");
    scanf("%d", &turismo1);

    printf("AGORA VAMOS AOS RESULTADOS, CABRONES!\n");

    printf("ESTADO 01: %s\n", estado1);
    printf("CÓDIGO 01: %S", cod1);
    printf("CIDADE 01: %S", cidade1);
    printf("POPULACAO 01: %d", populacao1);
    printf("AREA 01: %f", area1);
    printf("PIB 01: %f", pib1);
    printf("PONTOS TURISTICOS 01: %d", turismo1);

    




    return 0;
}

