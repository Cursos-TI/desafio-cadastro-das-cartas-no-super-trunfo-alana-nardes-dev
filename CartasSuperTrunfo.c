#include <stdio.h>

int main() {
    //Variaveis das Cartas 1 e 2 juntas.
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; //Alterado para o Tipo de Dado Unsigned Long Int, para aceitar números maiores.
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibperCapita1, pibperCapita2;
    float superPoder1, superPoder2;
    float valorInvertido1, valorInvertido2;

    printf("*** Pronto para cadastrar as Cartas do Jogo? ***\n\n"); //2x "\n", para pular 2 linhas. 

    printf("• CARTA 1\n\n");
    printf("(CARTA 1) Digite uma Letra de A à H para representar o Estado: \n");
    scanf("%c", &estado1);

    printf("(CARTA 1) Digite a Letra escolhida mais o código numérico da carta (De 01 à 04): \n"); //Ex: A01; B02; etc;
    scanf("%s", codigo1);

    printf("(CARTA 1) Digite o Nome da Cidade: \n"); //Cidades apenas com 1 Nome. Ex: Santos; Fortaleza; etc;
    scanf("%s", cidade1);

    printf("(CARTA 1) Digite qual a População da Cidade: \n"); //Digitar sem pontos, apenas numeros. 
    scanf("%lu", &populacao1); //Alterado para o especificador de formato %lu (unsigned long int), para aceitar números maiores.

    printf("(CARTA 1) Digite a Area em km² da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &area1);

    printf("(CARTA 1) Digite o PIB da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &pib1);

    printf("(CARTA 1) Digite a quantidade de Pontos Turisticos da Cidade: \n"); //Apenas numeros.
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (float) populacao1 / area1; //Cálculo da Densidade Populacional (Numero de Pessoas / por km²), com conversão Explicita (Casting).
    pibperCapita1 = (float) pib1 / populacao1; //Cálculo do PIB per Capita (Valor do PIB / Nº de Pessoas), com conversão Explicita (Casting).
    valorInvertido1 = (float)(1 / densidadePopulacional1);  //Cálculo do Valor Inverso (1 / Densidade Populacional), com conversão Explicita (Casting).
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibperCapita1 + valorInvertido1; //Soma com conversão Explicita (Casting) de todas as variaveis de valores, inclusive do calculo inverso da Densidade Populacional.
    
    
    printf("\n");
 
    printf("- Cadastro da Carta 1:\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu Pessoas\n", populacao1); //Alterado para o especificador de formato %lu (unsigned long int), para impressão correta de valores.
    printf("Área em km²: %.2fkm²\n", area1); //%.2f = Identificação de 2 casas decimais.
    printf("PIB: R$%.2f\n", pib1); //%.2f = Identificação de 2 casas decimais.
    printf("Pontos Turisticos na Cidade: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1); //%.2f = Identificação de 2 casas decimais.
    printf("PIB per Capita: R$%.2f\n", pibperCapita1); //%.2f = Identificação de 2 casas decimais.
    //printf("Resultado Inverso: %.4f\n", valorInvertido1); //Valor Inverso não é necessário, pois o mesmo já foi adicionado ao Super Poder, comando utilizado apenas para teste do calculo inverso.
    printf("Super Poder: %.2f Pontos\n", superPoder1); //%.2f = Identificação de 2 casas decimais.
    

    printf("\n\n");

    printf("• CARTA 2\n\n");
    printf("(CARTA 2) Digite uma Letra de A à H para representar o Estado: \n");
    scanf(" %c", &estado2); //O espaço antes de %c, se faz necessário para que o programa funcione corretamente.
    
    printf("(CARTA 2) Digite a Letra escolhida mais o código numérico da carta (De 01 à 04): \n"); //Ex: A01; B02; etc;
    scanf("%s", codigo2);

    printf("(CARTA 2) Digite o Nome da Cidade: \n"); //Cidades apenas com 1 Nome. Ex: Santos; Fortaleza; etc;
    scanf("%s", cidade2);

    printf("(CARTA 2) Digite qual a População da Cidade: \n"); //Digitar sem pontos, apenas numeros.
    scanf("%lu", &populacao2); //Alterado para o especificador de formato %lu (unsigned long int), para aceitar números maiores.

    printf("(CARTA 2) Digite a Area em km² da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &area2);

    printf("(CARTA 2) Digite o PIB da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &pib2);

    printf("(CARTA 2) Digite a quantidade de Pontos Turisticos da Cidade: \n"); //Apenas numeros.
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float) populacao2 / area2; //Cálculo da Densidade Populacional (Nº de Pessoas / por km²), com conversão Explicita (Casting).
    pibperCapita2 = (float) pib2 / populacao2; //Cálculo do PIB per Capita (Valor do PIB / Nº de Pessoas), com conversão Explicita (Casting).
    valorInvertido2 = (float)(1 / densidadePopulacional2); //Cálculo do Valor Inverso (1 / Densidade Populacional), com conversão Explicita (Casting).
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibperCapita2 + valorInvertido2; //Soma com conversão Explicita (Casting) de todas as variaveis de valores, inclusive do calculo inverso da Densidade Populacional.

    printf("\n");
    
    printf("- Cadastro da Carta 2:\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu Pessoas\n", populacao2); //Alterado para o especificador de formato %lu (unsigned long int), para impressão correta de valores.
    printf("Área em km²: %.2fkm²\n", area2); //%.2f = Identificação de 2 casas decimais.
    printf("PIB: R$%.2f\n", pib2); //%.2f = Identificação de 2 casas decimais.
    printf("Pontos Turisticos na Cidade: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2); //%.2f = Identificação de 2 casas decimais.
    printf("PIB per Capita: R$%.2f\n", pibperCapita2); //%.2f = Identificação de 2 casas decimais.
    printf("Super Poder: %.2f Pontos\n", superPoder2); //%.2f = Identificação de 2 casas decimais.

    printf("\n*** Comparação das Cartas ***\n"); //Utilização de Operadores Relacionais para comparação das cartas.

    printf("\n- Qual foi a carta vencedora por Categoria?\n\n"); //Resultado em 1 (Verdadeiro) = Carta 1 e Resultado em 0 (Falso) = Carta 2.

    printf("Categoria POPULAÇÃO: Carta %d Venceu\n", populacao1 > populacao2);
    printf("Categoria ÁREA EM KM²: Carta %d Venceu\n", area1 > area2);
    printf("Categoria PIB: Carta %d Venceu\n", pib1 > pib2);
    printf("Categoria PONTOS TURÍSTICOS: Carta %d Venceu\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Categoria DENSIDADE POPULACIONAL: Carta %d Venceu\n", densidadePopulacional1 < densidadePopulacional2); //Densidade Populacional é inversamente proporcional, ou seja, quem tem o menor o valor, vence.
    printf("Categoria PIB PER CAPITA: Carta %d Venceu\n", pibperCapita1 > pibperCapita2);
    printf("Categoria SUPER PODER: Carta %d Venceu\n", superPoder1 > superPoder2);

    printf("\n\n"); //2x "\n" Para Encerramento do Programa.

    return 0;
}