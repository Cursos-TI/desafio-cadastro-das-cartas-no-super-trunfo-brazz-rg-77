#include <stdio.h>
int main(){
    //DECLARAÇÃO DAS VARIÁVEIS DO PROJETO
    char letraEstado1 = 'A', letraEstado2 = 'A'; 
    char codCarta1[3], codCarta2[3], nome1[30], nome2[30];
    unsigned long int populacao1 = 0, populacao2 = 0;
    short int  pontosTur1 = 0, pontosTur2 = 0;
    float area1 = 0, area2 = 0, pib1 = 0, pib2 = 0, densidade1 = 0, densidade2 = 0, pibpcap1 = 0, pibpcap2 = 0, superPoder1 = 0, superPoder2 = 0;
    
    //LEITURA DOS DADOS DA PRIMEIRA CAARTA
    printf("Desafio Super Trunfo\n");
    printf("\nOlá, vamos cadastrar sua 1° carta\n");

    printf("Digite a letra que representa seu estado (A-H): \n");
    int c1;
    do {
        c1 = getchar();
    } while (c1 == '\n' || c1 == ' ');
    letraEstado1 = (char)c1; //UTILIZEI ESSE MÉTODO DE LEITURA POIS ESTAVA DANDO PROBLEMA NA HORA DE EXIBIR QUANDO UTILIZAVA O PRINTF.

    printf("Digite o código da sua carta (ex: A01, B03): \n");
    scanf("%s", codCarta1);

    printf("Informe da sua cidade: \n");
    scanf(" %[^\n]", nome1);

    printf("Informe a população da sua cidade: \n");
    scanf("%lu", &populacao1);

    printf("Informe a área da sua cidade: \n");
    scanf("%f", &area1);

    printf("Informe o pib da sua cidade: \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da sua cidade: \n");
    scanf("%i", &pontosTur1);

    //CALCULANDDO A DENSIDADE DAD PRIMEIRA CIDADE
    densidade1 = (float) populacao1 / area1;

    //CALCULANDO O PIB PER CAPTA DA PRIMEIRA CIDADE
    pibpcap1 = (float) pib1 / populacao1;

    //CALCULANDO O SUPER PODER DA PRIMERA CARTA;
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTur1 + pibpcap1 - densidade1;

    //EXIBIÇÃO DOS DADOS CADASTRADOS PELO USUÁRIO REFERENTES À 1° CARTA
    printf("\nCARTA 1 \n");
    printf("Estado: %c\n", letraEstado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %i\n", pontosTur1);
    printf("Densidade Populacional %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibpcap1);
    printf("O Super Poder da primeira carta vale: %f\n", superPoder1);

    //LEITURA DOS DADOS DA SEGUNDA CARTA
    printf("\nAgora repita o processo para sua 2° carta\n");

    printf("Digite a letra que representa seu estado (A-H): \n");
    int c2;
    do {
        c2 = getchar();
    } while (c2 == '\n' || c2 == ' ');
    letraEstado2 = (char)c2;

    printf("Digite o código da sua carta (ex: A01, B03): \n");
    scanf("%s", codCarta2);

    printf("Informe da sua cidade: \n");
    scanf(" %[^\n]", nome2);

    printf("Informe a população da sua cidade: \n");
    scanf("%lu", &populacao2);

    printf("Informe a área da sua cidade: \n");
    scanf("%f", &area2);

    printf("Informe o pib da sua cidade: \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da sua cidade: \n");
    scanf("%i", &pontosTur2);

    //CALCULANDO A DENSIDADE DA SEGUNDA CIDADE
    densidade2 = (float) populacao2 / area2;
    
    //CALCULANDO O PIB PER CAPTA DA SEGUNDA CIDADE
    pibpcap2 = (float) pib2 / populacao2;

     //CALCULANDO O SUPER PODER DA PRIMERA CARTA;
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTur2 + pibpcap2 - densidade2;

    //EXIBIÇÃO DOS DADOS CADASTRADOS PELO USUÁRIO REFERENTES À 2° CARTA
    printf("\nCARTA 2 \n");
    printf("Estado: %c\n", letraEstado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %i\n", pontosTur2);
    printf("Densidade Populacional %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibpcap2);
    printf("O Super Poder da segunda carta vale: %f\n", superPoder2);

    //COMPARANDO OS ATRIBUTOS
    int resultadoPopulação = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontosTur = pontosTur1 > pontosTur2;
    int resultadoDesnsidade = densidade1 < densidade2;
    int resultadoPIBpCapita = pibpcap1 > pibpcap2;
    int resultadoSuperPoder = superPoder1 > superPoder2;

    //MOSTRANDO O RESULTADO DA CARTA VENCEDORA
    printf("\nApós analisar as duas cartas segue abaixo a carta vencedora\n");
    printf("OBS: (1 para verdadeiro = Carta 1 vence e 0 para falso = Carta 2 vence)\n");
    printf("\nPopulação: Carta 1 venceu? (%i)\n", resultadoPopulação);
    printf("Área: Carta 1 venceu? (%i)\n", resultadoArea);
    printf("PIB: Carta 1 venceu? (%i)\n", resultadoPIB);
    printf("Pontos Turísticos: Carta 1 venceu? (%i)\n", resultadoPontosTur);
    printf("Densidade Populacional: Carta 1 venceu? (%i)\n", resultadoDesnsidade);
    printf("PIB per Capita: Carta 1 venceu? (%i)\n", resultadoPIBpCapita);
    printf("Super Poder: Carta 1 venceu? (%i)\n", resultadoSuperPoder);

    
    return 0;
}