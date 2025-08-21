#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    char codigo[20];
    char cidade[50];
    long long populacao;
    double area, pib, densidade, ppc, super;
    int turismo;
} Carta;

// Função para ler dados da carta
void lerCarta(Carta *c) {
    printf("Estado: ");
    scanf(" %[^\n]", c->estado);
    printf("Código: ");
    scanf(" %s", c->codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", c->cidade);
    printf("População: ");
    scanf("%lld", &c->populacao);
    printf("Área: ");
    scanf("%lf", &c->area);
    printf("PIB: ");
    scanf("%lf", &c->pib);
    printf("Turismo: ");
    scanf("%d", &c->turismo);

    // Calcula derivados
    c->densidade = (double)c->populacao / c->area;
    c->ppc = c->pib / c->populacao;
    c->super = (double)c->populacao + c->area + c->pib +
               c->turismo + c->ppc + (1.0 / c->densidade);
}

// Função para exibir menu e retornar atributo escolhido
int escolherAtributo(int jaEscolhido) {
    int opcao;
    printf("\nEscolha um atributo:\n");
    if (jaEscolhido != 1) printf("1 - População\n");
    if (jaEscolhido != 2) printf("2 - Área\n");
    if (jaEscolhido != 3) printf("3 - PIB\n");
    if (jaEscolhido != 4) printf("4 - Turismo\n");
    if (jaEscolhido != 5) printf("5 - Densidade Populacional (menor vence)\n");
    if (jaEscolhido != 6) printf("6 - PIB per Capita\n");

    printf("Opção: ");
    scanf("%d", &opcao);

    // Se repetir o já escolhido, pede de novo
    if (opcao == jaEscolhido) {
        printf("Atributo já escolhido, tente novamente.\n");
        return escolherAtributo(jaEscolhido);
    }
    return opcao;
}

// Função para pegar valor do atributo
double valorAtributo(Carta c, int atributo) {
    switch (atributo) {
        case 1: return (double)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (double)c.turismo;
        case 5: return c.densidade; // exceção no critério
        case 6: return c.ppc;
        default: return 0;
    }
}

// Função para comparar um atributo
int compararAtributo(double v1, double v2, int atributo) {
    if (atributo == 5) { // densidade: menor vence
        if (v1 < v2) return 1;
        else if (v2 < v1) return 2;
        else return 0;
    } else {
        if (v1 > v2) return 1;
        else if (v2 > v1) return 2;
        else return 0;
    }
}

int main() {
    Carta c1, c2;

    printf("=== HIPER TRUNFO HDSPM ===\n");

    printf("\n--- Insira dados da Carta 01 ---\n");
    lerCarta(&c1);
    printf("\n--- Insira dados da Carta 02 ---\n");
    lerCarta(&c2);

    // Escolha dos dois atributos
    printf("\nAgora escolha os atributos para comparação!\n");
    int attr1 = escolherAtributo(0);
    int attr2 = escolherAtributo(attr1);

    double v1_attr1 = valorAtributo(c1, attr1);
    double v2_attr1 = valorAtributo(c2, attr1);

    double v1_attr2 = valorAtributo(c1, attr2);
    double v2_attr2 = valorAtributo(c2, attr2);

    // Comparação individual
    int r1 = compararAtributo(v1_attr1, v2_attr1, attr1);
    int r2 = compararAtributo(v1_attr2, v2_attr2, attr2);

    // Soma final
    double soma1 = v1_attr1 + v1_attr2;
    double soma2 = v2_attr1 + v2_attr2;

    printf("\n=== RESULTADOS ===\n");

    // Resultado do primeiro atributo
    printf("Atributo 1: ");
    if (r1 == 1) printf("Carta 01 venceu!\n");
    else if (r1 == 2) printf("Carta 02 venceu!\n");
    else printf("Empate!\n");

    // Resultado do segundo atributo
    printf("Atributo 2: ");
    if (r2 == 1) printf("Carta 01 venceu!\n");
    else if (r2 == 2) printf("Carta 02 venceu!\n");
    else printf("Empate!\n");

    // Resultado final pela soma
    printf("\nSoma dos atributos:\n");
    printf("Carta 01 = %.2f | Carta 02 = %.2f\n", soma1, soma2);

    if (soma1 > soma2) printf(">>> Carta 01 venceu a rodada!\n");
    else if (soma2 > soma1) printf(">>> Carta 02 venceu a rodada!\n");
    else printf(">>> Empate!\n");

    return 0;
}