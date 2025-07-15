#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas (Nível Aventureiro)

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
    
    
    // Solicita ao jogador qual atributo ele deseja comparar.
    int escolhaDoAtributo;
    printf("\nEscolha um atributo para comparação das cartas: \n");
    printf(" 1 - Para População\n 2 - Para Área\n 3 - Para PIB\n 4 - Para Pontos Turísticos\n 5 - Para Densidade Populacional\n 6 - Para PIB Per Capta\n 7 - Para Super Poder\n");
    scanf("%d", &escolhaDoAtributo);
   
    // Exibe o resultado de quem venceu, usando menu switch
    printf("\n***** Resultado Comparando Atributos Individuais *****\n");

    // Menu interativo de escolha dos atributos
    switch (escolhaDoAtributo)
    {
    case 1:
        printf("### Comparando População ###\n");
        if(populacao > populacao2){
            printf("Carta 1 %s: --População: %ld\n", nomeDaCidade, populacao);
            printf("Carta 2 %s: --População: %ld\n", nomeDaCidade2, populacao2);
            printf("População: ## %s ## venceu!\n", nomeDaCidade);
        }else if(populacao == populacao2){
            printf("População: Empatou! Vamos comparar o Super Poder para desempate!\n### Comparando Super Poder ###\n"); // Compara o Super Poder para desempate
            if(superPoder > superPoder2){
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade);
            }else if(superPoder == superPoder2){
                printf("Super Poder: Empatou!\n");
            }else {
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade2);
            };
        }else {
            printf("Carta 1 %s: --População: %ld\n", nomeDaCidade, populacao);
            printf("Carta 2 %s: --População: %ld\n", nomeDaCidade2, populacao2);
            printf("População: ## %s ## venceu!\n", nomeDaCidade2);
        };
        break;
    case 2:
        printf("### Comparando Área ###\n");
        if(area > area2){
            printf("Carta 1 %s: --Área: %.2f km²\n", nomeDaCidade, area);
            printf("Carta 2 %s: --Área: %.2f km²\n", nomeDaCidade2, area2);
            printf("Área: ## %s ## venceu!\n", nomeDaCidade);
        }else if(area == area2){
            printf("Área: Empatou! Vamos comparar o Super Poder para desempate!\n### Comparando Super Poder ###\n"); // Compara o Super Poder para desempate
            if(superPoder > superPoder2){
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade);
            }else if(superPoder == superPoder2){
                printf("Super Poder: Empatou!\n");
            }else {
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade2);
            };
        }else {
            printf("Carta 1 %s: --Área: %.2f km²\n", nomeDaCidade, area);
            printf("Carta 2 %s: --Área: %.2f km²\n", nomeDaCidade2, area2);
            printf("Área: ## %s ## venceu!\n", nomeDaCidade2);
        };
        break;
    case 3:
        printf("### Comparando PIB ###\n");
        if(pib > pib2){
            printf("Carta 1 %s: --PIB: %.2f Bilhões de Reais\n", nomeDaCidade, pib);
            printf("Carta 2 %s: --PIB: %.2f Bilhões de Reais\n", nomeDaCidade2, pib2);
            printf("PIB: ## %s ## venceu!\n", nomeDaCidade);
        }else if(pib == pib2){
            printf("PIB: Empatou! Vamos comparar o Super Poder para desempate!\n### Comparando Super Poder ###\n"); // Compara o Super Poder para desempate
            if(superPoder > superPoder2){
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade);
            }else if(superPoder == superPoder2){
                printf("Super Poder: Empatou!\n");
            }else {
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade2);
            };
        }else {
            printf("Carta 1 %s: --PIB: %.2f Bilhões de Reais\n", nomeDaCidade, pib);
            printf("Carta 2 %s: --PIB: %.2f Bilhões de Reais\n", nomeDaCidade2, pib2);
            printf("PIB: ## %s ## venceu!\n", nomeDaCidade2);
        };
        break;
    case 4:
        printf("### Comparando Pontos Turisticos ###\n");
        if(pontosTuristicos > pontosTuristicos2){
            printf("Carta 1 %s: --Pontos Turisticos: %d\n", nomeDaCidade, pontosTuristicos);
            printf("Carta 2 %s: --Pontos Turisticos: %d\n", nomeDaCidade2, pontosTuristicos2);
            printf("Pontos Turisticos: ## %s ## venceu!\n", nomeDaCidade);
        }else if(pontosTuristicos == pontosTuristicos2){
            printf("Pontos Turisticos: Empatou! Vamos comparar o Super Poder para desempate!\n### Comparando Super Poder ###\n"); // Compara o Super Poder para desempate
            if(superPoder > superPoder2){
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade);
            }else if(superPoder == superPoder2){
                printf("Super Poder: Empatou!\n");
            }else {
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade2);
            };
        }else {
            printf("Carta 1 %s: --Pontos Turisticos: %d\n", nomeDaCidade, pontosTuristicos);
            printf("Carta 2 %s: --Pontos Turisticos: %d\n", nomeDaCidade2, pontosTuristicos2);
            printf("Pontos Turisticos: ## %s ## venceu!\n", nomeDaCidade2);
        };
        break;
    case 5:
        printf("### Comparando Densidade Populacional ###\n");
        if(densidadePopulacional < densidadePopulacional2){
            printf("Carta 1 %s: --Densidade Populacional: %.2f\n", nomeDaCidade, densidadePopulacional);
            printf("Carta 2 %s: --Densidade Populacional: %.2f\n", nomeDaCidade2, densidadePopulacional2);
            printf("Densidade Populacional: ## %s ## venceu!\n", nomeDaCidade);
        }else if(densidadePopulacional == densidadePopulacional2){
            printf("Densidade Populacional: Empatou! Vamos comparar o Super Poder para desempate!\n### Comparando Super Poder ###\n"); // Compara o Super Poder para desempate
            if(superPoder > superPoder2){
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade);
            }else if(superPoder == superPoder2){
                printf("Super Poder: Empatou!\n");
            }else {
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade2);
            };
        }else {
            printf("Carta 1 %s: --Densidade Populacional: %.2f\n", nomeDaCidade, densidadePopulacional);
            printf("Carta 2 %s: --Densidade Populacional: %.2f\n", nomeDaCidade2, densidadePopulacional2);
            printf("Densidade Populacional: ## %s ## venceu!\n", nomeDaCidade2);
        };
        break;
    case 6:
        printf("### Comparando PIB per capita ###\n");
        if(pibPerCapita > pibPerCapita2){
            printf("Carta 1 %s: --PIB per capita: %.2f\n", nomeDaCidade, pibPerCapita);
            printf("Carta 2 %s: --PIB per capita: %.2f\n", nomeDaCidade2, pibPerCapita2);
            printf("PIB per capita: ## %s ## venceu!\n", nomeDaCidade);
        }else if(pibPerCapita == pibPerCapita2){
            printf("PIB per capita: Empatou! Vamos comparar o Super Poder para desempate!\n### Comparando Super Poder ###\n"); // Compara o Super Poder para desempate
            if(superPoder > superPoder2){
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade);
            }else if(superPoder == superPoder2){
                printf("Super Poder: Empatou!\n");
            }else {
                printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
                printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
                printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade2);
            };
        }else {
            printf("Carta 1 %s: --PIB per capita: %.2f\n", nomeDaCidade, pibPerCapita);
            printf("Carta 2 %s: --PIB per capita: %.2f\n", nomeDaCidade2, pibPerCapita2);
            printf("PIB per capita: ## %s ## venceu!\n", nomeDaCidade2);
        };
        break;
    case 7:
        printf("### Comparando Super Poder ###\n");
        if(superPoder > superPoder2){
            printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
            printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
            printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade);
        }else if(superPoder == superPoder2){
            printf("Super Poder: Empatou!\n");
        }else {
            printf("Carta 1 %s: --Super Poder: %.2f\n", nomeDaCidade, superPoder);
            printf("Carta 2 %s: --Super Poder: %.2f\n", nomeDaCidade2, superPoder2);
            printf("Super Poder: ## %s ## venceu!\n", nomeDaCidade2);
        };
        break;
    default:
        printf("Opção invalida!");
        break;
    }


    return 0;
}