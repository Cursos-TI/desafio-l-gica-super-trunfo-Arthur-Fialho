#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas (Nível Mestre)

int main() {
    // Variáveis da carta1.
    char estado;
    char codigoDaCarta[2];
    char nomeDaCidade[50];
    // Inicializando as variáveis abaixo para evitar erro de lixo na memoria
    unsigned long int populacao = 0; 
    float area = 0; 
    float pib = 0; 
    int pontosTuristicos = 0; 
    float densidadePopulacional = 0;
    float pibPerCapita = 0;
    float superPoder = 0;
    
    // Cadastro da Carta1:
    printf("Digite o Estado da carta entre A e H: ");
    scanf("%c", &estado);
    
    printf("Digite o Codigo da carta entre 1 e 4: ");
    scanf("%s", codigoDaCarta);
    
    printf("Digite o Nome da cidade: ");
    scanf(" %[^\n]%*c", nomeDaCidade); // Usando expressão regular para poder usar espaços no nome da cidade

    printf("Digite a população da cidade sem ponto e sem virgula: ");
    scanf("%ld", &populacao);

    printf("Digite area da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    // Calculos de densidade populacional e pib per capita da carta 1.
    densidadePopulacional = (float) populacao / area;
    pibPerCapita = (float) (pib * 1000000000) / populacao; // Aqui é utilizado o valor do (pib * 1_000_000_000) para transformar o valor que esta resumido em valor real em bilhões
    superPoder = (float) populacao + area + pib + pontosTuristicos + pibPerCapita + (1/densidadePopulacional);

    // Variáveis da carta2.
    char estado2;
    char codigoDaCarta2[2];
    char nomeDaCidade2[50];
    // Inicializando as variáveis abaixo para evitar erro de lixo na memoria
    unsigned long int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontosTuristicos2 = 0;
    float densidadePopulacional2 = 0;
    float pibPerCapita2 = 0;
    float superPoder2 = 0;

    // Cadastro da Carta2:
    printf("Digite o Estado da carta2 entre A e H: ");
    scanf(" %c", &estado2); // Adicionado um espaço antes de "%c" para ler o espaço em branco antes de ler a variável do estado2
    
    printf("Digite o Codigo da carta entre 1 e 4: ");
    scanf("%s", codigoDaCarta2);
    
    printf("Digite o Nome da cidade: ");
    scanf(" %[^\n]%*c", nomeDaCidade2); // Usando expressão regular para poder usar espaços no nome da cidade
    
    printf("Digite a população da cidade sem ponto e sem virgula: ");
    scanf("%ld", &populacao2);
    
    printf("Digite area da cidade em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos de densidade populacional e pib per capita da carta 2.
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) (pib2 * 1000000000) / populacao2; // Aqui é utilizado o valor do (pib2 * 1_000_000_000) para transformar o valor que esta resumido em valor real em bilhões
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2);
    

    // Exibição dos Dados da Carta 1:
    printf("\nCarta1:\n Estado: %c\n Código: %c0%s\n Nome da cidade: %s\n População: %ld\n Área: %.2f km²\n PIB: %.2f Bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder: %.2f\n", estado, estado, codigoDaCarta, nomeDaCidade, populacao, area, pib, pontosTuristicos, densidadePopulacional, pibPerCapita, superPoder);
    
    // Exibição dos Dados da Carta 2:
    printf("\nCarta2:\n Estado: %c\n Código: %c0%s\n Nome da cidade: %s\n População: %ld\n Área: %.2f km²\n PIB: %.2f Bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder2: %.2f\n", estado2, estado2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);
    
    // Variáveis de menus e soma
    int escolhaDoAtributo, escolhaDoAtributo2;
    float soma_carta1 = 0, soma_carta2 = 0;
    
    // Solicita ao jogador quais atributos ele deseja comparar.
    printf("\nEscolha um atributo para comparação das cartas: \n");
    printf(" 1 - Para População\n 2 - Para Área\n 3 - Para PIB\n 4 - Para Pontos Turísticos\n 5 - Para Densidade Populacional\n 6 - Para PIB Per Capta\n 7 - Para Super Poder\n");
    scanf("%d", &escolhaDoAtributo);

    printf("Agora escolha o segundo atributo, lembre-se que deve ser diferente do primeiro atributo escolhido\n");
    printf(" 1 - Para População\n 2 - Para Área\n 3 - Para PIB\n 4 - Para Pontos Turísticos\n 5 - Para Densidade Populacional\n 6 - Para PIB Per Capta\n 7 - Para Super Poder\n");
    scanf("%d", &escolhaDoAtributo2);

    if(escolhaDoAtributo2 == escolhaDoAtributo){
        printf("Erro: Você escolheu o mesmo atributo duas vezes, escolha novamente!");
        printf(" 1 - Para População\n 2 - Para Área\n 3 - Para PIB\n 4 - Para Pontos Turísticos\n 5 - Para Densidade Populacional\n 6 - Para PIB Per Capta\n 7 - Para Super Poder\n");
        scanf("%d", &escolhaDoAtributo2);
    }
   
    // Exibe o resultado de quem venceu, usando menu switch
    printf("\n***** Resultado Comparando Atributos Individuais *****\n");

    // Comparação dos atributos escolhidos
    switch (escolhaDoAtributo)
    {
    case 1:
        printf("### Comparando População ###\n");
        soma_carta1 += populacao;
        soma_carta2 += populacao2;
        printf("População de %s: %ld\n", nomeDaCidade, populacao);
        printf("População de %s: %ld\n", nomeDaCidade2, populacao2);
        break;
    case 2:
        printf("### Comparando Área ###\n");
        soma_carta1 += area;
        soma_carta2 += area2;
        printf("Área de %s: %.2f km²\n", nomeDaCidade, area);
        printf("Área de %s: %.2f km²\n", nomeDaCidade2, area2);
        break;
    case 3:
        printf("### Comparando PIB ###\n");
        soma_carta1 += pib;
        soma_carta2 += pib2;
        printf("PIB de %s: %.2f Bilhões de Reais\n", nomeDaCidade, pib);
        printf("PIB de %s: %.2f Bilhões de Reais\n", nomeDaCidade2, pib2);
        break;
    case 4:
        printf("### Comparando Pontos Turisticos ###\n");
        soma_carta1 += pontosTuristicos;
        soma_carta2 += pontosTuristicos2;
        printf("Pontos Turisticos de %s: %d\n", nomeDaCidade, pontosTuristicos);
        printf("Pontos Turisticos de %s: %d\n", nomeDaCidade2, pontosTuristicos2);
        break;
    case 5:
        printf("### Comparando Densidade Populacional ###\n");
        soma_carta1 -= densidadePopulacional;
        soma_carta2 -= densidadePopulacional2;
        printf("Densidade Populacional de %s: %.2f\n", nomeDaCidade, densidadePopulacional);
        printf("Densidade Populacional de %s: %.2f\n", nomeDaCidade2, densidadePopulacional2);
        break;
    case 6:
        printf("### Comparando PIB per capita ###\n");
        soma_carta1 += pibPerCapita;
        soma_carta2 += pibPerCapita2;
        printf("PIB per capita de %s: %.2f\n", nomeDaCidade, pibPerCapita);
        printf("PIB per capita de %s: %.2f\n", nomeDaCidade2, pibPerCapita2);
        break;
    case 7:
        printf("### Comparando Super Poder ###\n");
        soma_carta1 += superPoder;
        soma_carta2 += superPoder2;
        printf("Super Poder de %s: %.2f\n", nomeDaCidade, superPoder);
        printf("Super Poder de %s: %.2f\n", nomeDaCidade2, superPoder2);
        break;
    default:
        printf("Opção invalida!");
        break;
    }

    switch (escolhaDoAtributo2)
    {
    case 1:
        printf("### Comparando População ###\n");
        soma_carta1 += populacao;
        soma_carta2 += populacao2;
        printf("População de %s: %ld\n", nomeDaCidade, populacao);
        printf("População de %s: %ld\n", nomeDaCidade2, populacao2);
        break;
    case 2:
        printf("### Comparando Área ###\n");
        soma_carta1 += area;
        soma_carta2 += area2;
        printf("Área de %s: %.2f km²\n", nomeDaCidade, area);
        printf("Área de %s: %.2f km²\n", nomeDaCidade2, area2);
        break;
    case 3:
        printf("### Comparando PIB ###\n");
        soma_carta1 += pib;
        soma_carta2 += pib2;
        printf("PIB de %s: %.2f Bilhões de Reais\n", nomeDaCidade, pib);
        printf("PIB de %s: %.2f Bilhões de Reais\n", nomeDaCidade2, pib2);
        break;
    case 4:
        printf("### Comparando Pontos Turisticos ###\n");
        soma_carta1 += pontosTuristicos;
        soma_carta2 += pontosTuristicos2;
        printf("Pontos Turisticos de %s: %d\n", nomeDaCidade, pontosTuristicos);
        printf("Pontos Turisticos de %s: %d\n", nomeDaCidade2, pontosTuristicos2);
        break;
    case 5:
        printf("### Comparando Densidade Populacional ###\n");
        soma_carta1 -= densidadePopulacional;
        soma_carta2 -= densidadePopulacional2;
        printf("Densidade Populacional de %s: %.2f\n", nomeDaCidade, densidadePopulacional);
        printf("Densidade Populacional de %s: %.2f\n", nomeDaCidade2, densidadePopulacional2);
        break;
    case 6:
        printf("### Comparando PIB per capita ###\n");
        soma_carta1 += pibPerCapita;
        soma_carta2 += pibPerCapita2;
        printf("PIB per capita de %s: %.2f\n", nomeDaCidade, pibPerCapita);
        printf("PIB per capita de %s: %.2f\n", nomeDaCidade2, pibPerCapita2);
        break;
    case 7:
        printf("### Comparando Super Poder ###\n");
        soma_carta1 += superPoder;
        soma_carta2 += superPoder2;
        printf("Super Poder de %s: %.2f\n", nomeDaCidade, superPoder);
        printf("Super Poder de %s: %.2f\n", nomeDaCidade2, superPoder2);
        break;
    default:
        printf("Opção invalida!");
        break;
    }

    // Resultado final
    printf("### O Ganhador foi: ###\n");

    if(soma_carta1 > soma_carta2){
        printf("A soma de %s foi %.2f\n", nomeDaCidade, soma_carta1);
        printf("A soma de %s foi %.2f\n", nomeDaCidade2, soma_carta2);
        printf("Parabéns ## %s ## ganhou!!!\n", nomeDaCidade);
    } else if (soma_carta1 < soma_carta2){
        printf("A soma de %s foi %.2f\n", nomeDaCidade, soma_carta1);
        printf("A soma de %s foi %.2f\n", nomeDaCidade2, soma_carta2);
        printf("Parabéns ## %s ## ganhou!!!\n", nomeDaCidade2);
    }else {
        printf("A soma de %s foi %.2f\n", nomeDaCidade, soma_carta1);
        printf("A soma de %s foi %.2f\n", nomeDaCidade2, soma_carta2);
        printf("Cartas empataram!!!\n");
    }

    return 0;
}