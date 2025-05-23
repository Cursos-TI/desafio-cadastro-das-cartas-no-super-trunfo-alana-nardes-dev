#include <stdio.h>

int main() {
    //Variaveis das Cartas 1 e 2 juntas.
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibperCapita1, pibperCapita2;

    printf("Pronto para cadastrar as Cartas do Jogo? \n\n"); //2x "\n", para pular 2 linhas. 

    printf("CARTA 1\n\n");
    printf("(CARTA 1) Digite uma Letra de A à H para representar o Estado: \n");
    scanf("%c", &estado1);

    printf("(CARTA 1) Digite a Letra escolhida mais o código numérico da carta (De 01 à 04): \n"); //Ex: A01; B02; etc;
    scanf("%s", codigo1);

    printf("(CARTA 1) Digite o Nome da Cidade: \n"); //Cidades apenas com 1 Nome. Ex: Santos; Fortaleza; etc;
    scanf("%s", cidade1);

    printf("(CARTA 1) Digite qual a População da Cidade: \n"); //Digitar sem pontos, apenas numeros.
    scanf("%d", &populacao1);

    printf("(CARTA 1) Digite a Area em km² da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &area1);

    printf("(CARTA 1) Digite o PIB da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &pib1);

    printf("(CARTA 1) Digite a quantidade de Pontos Turisticos da Cidade: \n"); //Apenas numeros.
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (float) populacao1 / area1; //Cálculo da Densidade Populacional (Numero de Pessoas / por km²), com conversão Explicita (Casting).
    pibperCapita1 = (float) pib1 / populacao1; //Cálculo do PIB per Capita (Valor do PIB / Nº de Pessoas), com conversão Explicita (Casting).

    printf("\n");

    printf("Cadastro da Carta 1:\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d Pessoas\n", populacao1);
    printf("Área em km²: %.2fkm²\n", area1); //%.2f = Indificação de 2 casas decimais.
    printf("PIB: R$%.2f\n", pib1); //%.2f = Indificação de 2 casas decimais.
    printf("Pontos Turisticos na Cidade: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$%.2F\n", pibperCapita1);
    

    printf("\n\n");

    printf("CARTA 2\n\n");
    printf("(CARTA 2) Digite uma Letra de A à H para representar o Estado: \n");
    scanf(" %c", &estado2); //O espaço antes de %c, se faz necessário para que o programa funcione corretamente.
    
    printf("(CARTA 2) Digite a Letra escolhida mais o código numérico da carta (De 01 à 04): \n"); //Ex: A01; B02; etc;
    scanf("%s", codigo2);

    printf("(CARTA 2) Digite o Nome da Cidade: \n"); //Cidades apenas com 1 Nome. Ex: Santos; Fortaleza; etc;
    scanf("%s", cidade2);

    printf("(CARTA 2) Digite qual a População da Cidade: \n"); //Digitar sem pontos, apenas numeros.
    scanf("%d", &populacao2);

    printf("(CARTA 2) Digite a Area em km² da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &area2);

    printf("(CARTA 2) Digite o PIB da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &pib2);

    printf("(CARTA 2) Digite a quantidade de Pontos Turisticos da Cidade: \n"); //Apenas numeros.
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float) populacao2 / area2; //Cálculo da Densidade Populacional (Nº de Pessoas / por km²), com conversão Explicita (Casting).
    pibperCapita2 = (float) pib2 / populacao2; //Cálculo do PIB per Capita (Valor do PIB / Nº de Pessoas), com conversão Explicita (Casting).

    printf("\n");
    
    printf("Cadastro da Carta 2:\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d Pessoas\n", populacao2);
    printf("Área em km²: %.2fkm²\n", area2); //%.2f = Indificação de 2 casas decimais.
    printf("PIB: R$%.2f\n", pib2); //%.2f = Indificação de 2 casas decimais.
    printf("Pontos Turisticos na Cidade: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$%.2F\n", pibperCapita2);

    printf("\n\n"); //2x "\n" Para Encerramento do Programa.

    return 0;
}