#include <stdio.h>

// Declaração de variáveis com inicializacao em memoria
char LetraEstado1 = 'A', LetraEstado2 = 'A', CódigodaCarta1[4] = "0", CódigodaCarta2[4] = "0", NomedaCidade1[50] = "0", NomedaCidade2[50] = "0";
unsigned long int População1 = 0, População2 = 0;
int NúmeroPontosTurísticos1 = 0, NúmeroPontosTurísticos2 = 0, ComparaPopulacao = 0, ComparaÁrea = 0, ComparaPIB = 0, ComparaNúmeroPontosTurísticos = 0, ComparaPIBperCapita = 0, ComparaDensidadePopulacional = 0;
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
    scanf("%d", &NúmeroPontosTurísticos1);

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
    scanf("%d", &NúmeroPontosTurísticos2);
    }

void RealizarCalculos(){
    DensidadePopulacional1 = (float) População1 / ÁreadaCidade1;
    DensidadePopulacional2 = (float) População2 / ÁreadaCidade2;
    PIBperCapita1 = PIB1 / (float) População1;

    DensidadePopulacional2 = (float) População2 / ÁreadaCidade2;
    DensidadePopulacional2 = (float) População2 / ÁreadaCidade2;
    PIBperCapita2 = PIB2 / (float) População2;

    SuperPoder1 = População1 + ÁreadaCidade1 + PIB1 + NúmeroPontosTurísticos1 + PIBperCapita1 + (1 / DensidadePopulacional1);
    SuperPoder2 = População2 + ÁreadaCidade2 + PIB2 + NúmeroPontosTurísticos2 + PIBperCapita2 + (1 / DensidadePopulacional2);
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
    printf("Número de pontos turísticos: %d\n", NúmeroPontosTurísticos1);
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
    printf("Número de pontos turísticos: %d\n", NúmeroPontosTurísticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);
    }

void RealizarComparacoes(){
    //Compara e exibe resultados das comparcoes das cartas
    printf("\n-----> Comparações das Cartas\n");
    //Comparacao de Habitantes
    if (População1 > População2){
        printf("Populacao: Carta 1 %s venceu: %d habitantes\n", NomedaCidade1, População1);}
    else{
        printf("Populacao: Carta 2 %s venceu: %d habitantes\n", NomedaCidade2, População2);}
    
    //Comparacao de Area
    if (ÁreadaCidade1 > ÁreadaCidade2){
        printf("Área: Carta 1 %s venceu: %.2f km²\n", NomedaCidade1, ÁreadaCidade1);}
    else{
        printf("Área: Carta 2 %s venceu: %.2f km²\n", NomedaCidade2, ÁreadaCidade2);}

    //Comparacao de PIB
    if (PIB1 > PIB2){
        printf("PIB: Carta 1 %s venceu: %.2f bilhões de reais\n", NomedaCidade1, PIB1);}
    else{
        printf("PIB: Carta 2 %s venceu: %.2f bilhões de reais\n", NomedaCidade2, PIB2);}
    
    //Comparacao de PIB per Capita
    if (PIBperCapita1 > PIBperCapita2){
        printf("PIBperCapita: Carta 1 %s venceu: %.2f reais\n", NomedaCidade1, PIBperCapita1);}
    else{
        printf("PIBperCapita: Carta 2 %s venceu: %.2f reais\n", NomedaCidade2, PIBperCapita2);}

    //Comparacao de Densidade Populacional
    if (DensidadePopulacional1 < DensidadePopulacional2){
        printf("DensidadePopulacional: Carta 1 %s venceu: %.2f hab/km²\n", NomedaCidade1, DensidadePopulacional1);}
    else{
        printf("DensidadePopulacional: Carta 2 %s venceu: %.2f hab/km²\n", NomedaCidade2, DensidadePopulacional2);}

    //Comparacao de Super Poder
    if (SuperPoder1 < SuperPoder2){
        printf("SuperPoder: Carta 1 %s venceu: %d\n", NomedaCidade1, SuperPoder1);}
    else{
        printf("SuperPoder: Carta 2 %s venceu: %d\n", NomedaCidade2, SuperPoder2);}    
    }

int main(){
    EntradaDados();
    RealizarCalculos();
    ExibirResultados();
    RealizarComparacoes();
    return 0;
    }