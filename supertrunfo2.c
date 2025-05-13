#include <stdio.h>

int main()
{
    // Declaração de variáveis para o País Brasil
    char nomeBrasil[] = "Brasil";
    float densidadeBrasil = 23.86;
    float populacaoBrasil = 212583750;
    float areaBrasil = 8509379.576;
    float pibBrasil = 2.1;
    int pontosTuristicosBrasil = 75;

    // Declaração de variáveis para o País Argentina
    char nomeArgentina[] = "Argentina";
    float densidadeArgentina = 14.5;
    float populacaoArgentina = 45606000;
    float areaArgentina = 2796427;
    float pibArgentina = 0.483;
    int pontosTuristicosArgentina = 75;

    // Os dados acima foram coletados do site do IBGE, exceto os pontos turísticos que são fictícios.

    int escolha;

    // Exibe o menu de opções
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    printf("5 - Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    printf("\nComparação entre Brasil e Argentina:\n");

    // Usando switch e if-else para comparar
    switch (escolha)
    {
    case 1:
        printf("População:\n");
        printf("Brasil: %ld habitantes\n", populacaoBrasil);
        printf("Argentina: %ld habitantes\n", populacaoArgentina);
        if (populacaoBrasil > populacaoArgentina)
        {
            printf("Brasil tem maior população!\n");
        }
        else if (populacaoBrasil < populacaoArgentina)
        {
            printf("Argentina tem maior população!\n");
        }
        else
        {
            printf("Empate! Ambos têm a mesma população.\n");
        }
        break;

    case 2:
        printf("Área:\n");
        printf("Brasil: %.2f km²\n", areaBrasil);
        printf("Argentina: %.2f km²\n", areaArgentina);
        if (areaBrasil > areaArgentina)
        {
            printf("Brasil tem maior área!\n");
        }
        else if (areaBrasil < areaArgentina)
        {
            printf("Argentina tem maior área!\n");
        }
        else
        {
            printf("Empate! Ambos têm a mesma área.\n");
        }
        break;

    case 3:
        printf("PIB:\n");
        printf("Brasil: %.2f trilhões de dólares\n", pibBrasil);
        printf("Argentina: %.2f bilhões de dólares\n", pibArgentina);
        if (pibBrasil > pibArgentina)
        {
            printf("Brasil tem maior PIB!\n");
        }
        else if (pibBrasil < pibArgentina)
        {
            printf("Argentina tem maior PIB!\n");
        }
        else
        {
            printf("Empate! Ambos têm o mesmo PIB.\n");
        }
        break;

    case 4:
        printf("Densidade Demográfica:\n");
        printf("Brasil: %.2f hab/km²\n", densidadeBrasil);
        printf("Argentina: %.2f hab/km²\n", densidadeArgentina);
        if (densidadeBrasil > densidadeArgentina)
        {
            printf("Brasil tem maior densidade demográfica!\n");
        }
        else if (densidadeBrasil < densidadeArgentina)
        {
            printf("Argentina tem maior densidade demográfica!\n");
        }
        else
        {
            printf("Empate! Ambos têm a mesma densidade demográfica.\n");
        }
        break;

    case 5:
        printf("Número de pontos turísticos relevantes:\n");
        printf("Brasil: %d\n", pontosTuristicosBrasil);
        printf("Argentina: %d\n", pontosTuristicosArgentina);
        if (pontosTuristicosBrasil > pontosTuristicosArgentina)
        {
            printf("Brasil tem mais pontos turísticos relevantes!\n");
        }
        else if (pontosTuristicosBrasil < pontosTuristicosArgentina)
        {
            printf("Argentina tem mais pontos turísticos relevantes!\n");
        }
        else
        {
            printf("Empate! Ambos têm o mesmo número de pontos turísticos.\n");
        }
        break;

    default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
    }

    return 0;
}