#include <stdio.h>

// Declaração de variáveis com inicializacao em memoria
char LetraEstado1 = 'A', LetraEstado2 = 'A', CódigodaCarta1[4] = "0", CódigodaCarta2[4] = "0", NomedaCidade1[50] = "0", NomedaCidade2[50] = "0";
unsigned long int População1 = 0, População2 = 0;
int PontosTurísticos1 = 0, PontosTurísticos2 = 0, ComparaPopulacao = 0, ComparaÁrea = 0, ComparaPIB = 0, ComparaPontosTurísticos = 0, ComparaPIBperCapita = 0, ComparaDensidadePopulacional = 0, EscolhaUsuário = 0;
float ÁreadaCidade1 = 0, ÁreadaCidade2 = 0, PIB1 = 0, PIB2 = 0, DensidadePopulacional1 = 0, PIBperCapita1 = 0, DensidadePopulacional2 = 0, PIBperCapita2 = 0, SuperPoder1 = 0, SuperPoder2 = 0;

void EntradaDados() {
    // Carta 1: Leitura de dados do usuario
    printf("-----> Inserção de dados para a Carta 1\n");
    printf("Digite a Letra do Estado (de A a H): ");
    scanf("%c", &LetraEstado1);
    printf("Digite o código da carta (Letra do Estado seguido de dois números): ");
    scanf("%s", CódigodaCarta1);
    printf("Digite o nome da cidade (Sem espaços): ");
    scanf("%s", NomedaCidade1);
    printf("Digite o número de habitates: ");
    scanf("%d", &População1);
    printf("Digite a área da cidade (kilômetros quadrados): ");
    scanf("%f", &ÁreadaCidade1);
    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &PontosTurísticos1);

    // Carta 2: Leitura de dados do usuario
    printf("\n-----> Inserção de dados para a Carta 2\n");
    printf("Digite a Letra do Estado (de A a H): ");
    scanf("%c", &LetraEstado2);
    printf("Digite o código da carta (Letra do Estado seguido de dois números): ");
    scanf("%s", &CódigodaCarta2);
    printf("Digite o nome da cidade (Sem espaços): ");
    scanf("%s", NomedaCidade2);
    printf("Digite o número de habitates: ");
    scanf("%d", &População2);
    printf("Digite a área da cidade (kilômetros quadrados): ");
    scanf("%f", &ÁreadaCidade2);
    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &PontosTurísticos2);
    }

void RealizarCalculos(){
    DensidadePopulacional1 = (float) População1 / ÁreadaCidade1;
    DensidadePopulacional2 = (float) População2 / ÁreadaCidade2;
    PIBperCapita1 = PIB1 / (float) População1;

    DensidadePopulacional2 = (float) População2 / ÁreadaCidade2;
    DensidadePopulacional2 = (float) População2 / ÁreadaCidade2;
    PIBperCapita2 = PIB2 / (float) População2;

    SuperPoder1 = População1 + ÁreadaCidade1 + PIB1 + PontosTurísticos1 + PIBperCapita1 + (1 / DensidadePopulacional1);
    SuperPoder2 = População2 + ÁreadaCidade2 + PIB2 + PontosTurísticos2 + PIBperCapita2 + (1 / DensidadePopulacional2);
    }

void ExibirResultados(){
    //Exibição de dados da carta 1
    printf("\n-----> Dados da Carta 1\n");
    printf("Estado: %c\n", LetraEstado1);
    printf("Código: %s\n", CódigodaCarta1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("População: %d habitantes\n", População1);
    printf("Área: %.2f km²\n", ÁreadaCidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", PontosTurísticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    //Exibição de dados da carta 2
    printf("\n-----> Dados da Carta 2\n");
    printf("Estado: %c\n", LetraEstado2);
    printf("Código: %s\n", CódigodaCarta2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("População: %d habitantes\n", População2);
    printf("Área: %.2f km²\n", ÁreadaCidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", PontosTurísticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);
    }

void MenudeEscolhaeComparacao(){
    //Exibe menu de escolha de atributos a serem comparados, solicita entrada do usuario e exibe a comparacao das cartas
    printf("\n-----> Escolha um número que corresponda a uma opção do menu abaixo:\n");
    printf("1. Exibir nome das Cidades\n");
    printf("2. Comparar População\n");
    printf("3. Comparar Área\n");
    printf("4. Comparar PIB\n");
    printf("5. Comparar Número de pontos turísticos\n");
    printf("6. Comparar Densidade populacional\n");
    scanf("%d", & EscolhaUsuário);
    
    switch (EscolhaUsuário) {
        case 1:
        //Exibir nome das Cidades
            printf("\nNome da Cidade da carta 1: %s, Nome da Cidade da carta 2: %s", NomedaCidade1, NomedaCidade2);
            break;        
        case 2:
        //Comparacao de Habitantes
            if (População1 > População2){
                printf("\nPopulacao: Carta 1 %s venceu: %d habitantes\n", NomedaCidade1, População1);
                printf("Carta 2 %s tem %d habitantes", NomedaCidade2, População2);}
            else if (População1 < População2){
                printf("\nPopulacao: Carta 2 %s venceu: %d habitantes\n", NomedaCidade2, População2);
                printf("Carta 1 %s tem %d habitantes", NomedaCidade1, População1);}
            else{
                printf("\nEmpate! Populacao Carta 1 %d habitantes e Populacao Carta 2 %d habitantes\n", População1, População2);}
            break;
        case 3:
        //Comparacao de Área
            if (ÁreadaCidade1 > ÁreadaCidade2){
                printf("\nÁrea: Carta 1 %s venceu: %.2f km²\n", NomedaCidade1, ÁreadaCidade1);
                printf("Carta 2 %s tem %.2f km²", NomedaCidade2, ÁreadaCidade2);}
            else if (ÁreadaCidade1 < ÁreadaCidade2){
                printf("\nÁrea: Carta 2 %s venceu: %.2f km²\n", NomedaCidade2, ÁreadaCidade2);
                printf("Carta 1 %s tem %.2f km²", NomedaCidade1, ÁreadaCidade1);}
            else{
                printf("\nEmpate! Área Carta 1 %d km² e Área Carta 2 %d km²\n", ÁreadaCidade1, ÁreadaCidade2);}
            break;
        case 4:
        //Comparacao de PIB
            if (PIB1 > PIB2){
                printf("\nPIB: Carta 1 %s venceu: %.2f bilhões de reais\n", NomedaCidade1, PIB1);
                printf("Carta 2 %s tem %.2f bilhões de reais", NomedaCidade2, PIB2);}
            else if (PIB1 < PIB2){
                printf("\nPIB: Carta 2 %s venceu: %.2f bilhões de reais\n", NomedaCidade2, PIB2);
                printf("Carta 1 %s tem %.2f bilhões de reais", NomedaCidade1, PIB1);}
            else{
                printf("\nEmpate! PIB Carta 1 %.2f bilhões de reais e PIB Carta 2 %.2f bilhões de reais\n", PIB1, PIB2);}
            break;
        case 5:
        //Comparacao pontos turísticos
            if (PontosTurísticos1 > PontosTurísticos2){
                printf("\nPontos Turísticos: Carta 1 %s venceu: %d\n", NomedaCidade1, PontosTurísticos1);
                printf("Carta 2 %s tem %d Pontos Turísticos", NomedaCidade2, PontosTurísticos2);}
            else if (PontosTurísticos1 < PontosTurísticos2){
                printf("\nPontos Turísticos: Carta 2 %s venceu: %d\n", NomedaCidade2, PontosTurísticos2);
                printf("Carta 1 %s tem %d Pontos Turísticos", NomedaCidade1, PontosTurísticos1);}
            else{
                printf("\nEmpate! Pontos Turísticos Carta 1 %d e Pontos Turísticos Carta 2 %d\n", PontosTurísticos1, PontosTurísticos2);}
            break;
        case 6:
        //Comparacao de densidade populacional
            if (DensidadePopulacional1 > DensidadePopulacional2){
                printf("\nDensidade Populacional: Carta 1 %s venceu: %.2f hab/km²\n", NomedaCidade1, DensidadePopulacional1);
                printf("Carta 2 %s tem %.2f hab/km²", NomedaCidade2, DensidadePopulacional2);}
            else if (DensidadePopulacional1 < DensidadePopulacional2){
                printf("\nDensidade Populacional: Carta 2 %s venceu: %.2f hab/km²\n", NomedaCidade2, DensidadePopulacional2);
                printf("Carta 1 %s tem %.2f hab/km²", NomedaCidade1, DensidadePopulacional1);}
            else{
                printf("\nEmpate! Densidade Populacional Carta 1 %.2f e Densidade Populacional Carta 2 %.2f\n", DensidadePopulacional1, DensidadePopulacional2);}
            break;
        default:
            printf("Opção inválida");
        }
    }

int main(){
    EntradaDados();
    RealizarCalculos();
    ExibirResultados();
    MenudeEscolhaeComparacao();
    return 0;
    }