#include <stdio.h>
int main(){
    //DECLARAÇÃO DAS VARIÁVEIS DO PROJETO
    char letraEstado1 = 'A', letraEstado2 = 'A'; 
    char codCarta1[3], codCarta2[3], nome1[30], nome2[30];
    unsigned long int populacao1 = 0, populacao2 = 0;
    int  pontosTur1 = 0, pontosTur2 = 0, escolha = 0;
    float area1 = 0, area2 = 0, pib1 = 0, pib2 = 0, densidade1 = 0, densidade2 = 0, pibpcap1 = 0, pibpcap2 = 0, superPoder1 = 0, superPoder2 = 0;
    
    //LEITURA DOS DADOS DA PRIMEIRA CAARTA
    printf("Seja bem vindo ao Desafio Super Trunfo\n");
    printf("\nOlá, vamos cadastrar sua 1° carta\n");

    printf("Digite a letra que representa seu estado (A-H): \n");
    int c1;
    do {
        c1 = getchar();
    } while (c1 == '\n' || c1 == ' ');
    letraEstado1 = (char)c1; //UTILIZEI ESSE MÉTODO DE LEITURA POIS ESTAVA DANDO PROBLEMA NA HORA DE EXIBIR QUANDO UTILIZAVA O PRINTF.

    printf("Digite o código da sua carta (ex: A01, B03): \n");
    scanf("%s", codCarta1);

    printf("Informe o nome da sua cidade: \n");
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

    printf("Informe o nome da sua cidade: \n");
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

    //COMPARANDO AS CARTAS USANDO SWITCH
    printf("\nAgora vamos ver qual carta é a vencedora \n");
    printf("Escolha qual atributo quer comparar: \n");
    printf("1- Nome do país (usado apenas para exibir informações, não para comparação direta)\n");
    printf("2- População\n");
    printf("3- Área\n");
    printf("4- PIB\n");
    printf("5- Número de pontos turísticos\n");
    printf("6- Densidade demográfica\n");
    scanf("%i", &escolha);

    switch (escolha)
    {
    case 1:
        printf ("As cidades que serão comparadas são %s e %s", nome1, nome2);
        break;
    case 2:
       if (populacao1 > populacao2)
    {
        printf("A Carta 1 (%s) tem população igual a %lu habitantes! \n", nome1, populacao1);    
        printf("A Carta 2 (%s) tem população igual a %lu habitantes! \n", nome2, populacao2);
        printf("Logo, a Carta 1 é a vencedora!");
    }else if (populacao1 < populacao2)
        {
        printf("A Carta 1 (%s) tem população igual a %lu habitantes! \n", nome1, populacao1);    
        printf("A Carta 2 (%s) tem população igual a %lu habitantes! \n", nome2, populacao2);
        printf("Logo, a Carta 2 é a vencedora!");
        }else{
        printf("A Carta 1 (%s) tem população igual a %lu habitantes! \n", nome1, populacao1);    
        printf("A Carta 2 (%s) tem população igual a %lu habitantes! \n", nome2, populacao2);
        printf("Logo, as Cartas estão empatadas!");
        }
        break;
    case 3:
        if (area1 > area2)
    {
        printf("A Carta 1 (%s) tem área igual a %.2f km²! \n", nome1, area1);    
        printf("A Carta 2 (%s) tem área igual a %.2f km²! \n", nome2, area2);
        printf("Logo, a Carta 1 é a vencedora!");
    }else if (area1 < area2)
        {
        printf("A Carta 1 (%s) tem área igual a %.2f km²! \n", nome1, area1);    
        printf("A Carta 2 (%s) tem área igual a %.2f km²! \n", nome2, area2);
        printf("Logo, a Carta 2 é a vencedora!");
        }else{
        printf("A Carta 1 (%s) tem área igual a %.2f km²! \n", nome1, area1);    
        printf("A Carta 2 (%s) tem área igual a %.2f km²! \n", nome2, area2);
        printf("Logo, as Cartas estão empatadas!");
        }
        break;
    case 4:
        if (pib1 > pib2)
    {
        printf("A Carta 1 (%s) tem PIB igual a R$ %.2f! \n", nome1, pib1);    
        printf("A Carta 2 (%s) tem PIB igual a R$ %.2f! \n", nome2, pib2);
        printf("Logo, a Carta 1 é a vencedora!");
    }else if (pib1 < pib2)
        {
        printf("A Carta 1 (%s) tem PIB igual a R$ %.2f! \n", nome1, pib1);    
        printf("A Carta 2 (%s) tem PIB igual a R$ %.2f! \n", nome2, pib2);
        printf("Logo, a Carta 2 é a vencedora!");
        }else{
        printf("A Carta 1 (%s) tem PIB igual a R$ %.2f! \n", nome1, pib1);    
        printf("A Carta 2 (%s) tem PIB igual a R$ %.2f! \n", nome2, pib2);
        printf("Logo, as Cartas estão empatadas!");
        }
        break;
    case 5:
         if (pontosTur1 > pontosTur2)
    {
        printf("A Carta 1 (%s) tem %i pontos turísticos! \n", nome1, pontosTur1);    
        printf("A Carta 2 (%s) tem %i pontos turísticos! \n", nome2, pontosTur2);
        printf("Logo, a Carta 1 é a vencedora!");
    }else if (pontosTur1 < pontosTur2)
        {
        printf("A Carta 1 (%s) tem %i pontos turísticos! \n", nome1, pontosTur1);    
        printf("A Carta 2 (%s) tem %i pontos turísticos! \n", nome2, pontosTur2);
        printf("Logo, a Carta 2 é a vencedora!");
        }else{
        printf("A Carta 1 (%s) tem %i pontos turísticos! \n", nome1, pontosTur1);    
        printf("A Carta 2 (%s) tem %i pontos turísticos! \n", nome2, pontosTur2);
        printf("Logo, as Cartas estão empatadas!");
        }
        break;
    case 6:
         if (densidade1 < densidade2)
    {
        printf("A Carta 1 (%s) tem densidade demográfica igual a: %.2f hab/km²! \n", nome1, densidade1);    
        printf("A Carta 2 (%s) tem densidade demográfica igual a: %.2f hab/km²! \n", nome2, densidade2);
        printf("Logo, a Carta 1 é a vencedora!");
    }else if (densidade1 > densidade2)
        {
        printf("A Carta 1 (%s) tem densidade demográfica igual a: %.2f hab/km²! \n", nome1, densidade1);    
        printf("A Carta 2 (%s) tem densidade demográfica igual a: %.2f hab/km²! \n", nome2, densidade2);
        printf("Logo, a Carta 2 é a vencedora!");
        }else{
        printf("A Carta 1 (%s) tem densidade demográfica igual a: %.2f hab/km²! \n", nome1, densidade1);    
        printf("A Carta 2 (%s) tem densidade demográfica igual a: %.2f hab/km²! \n", nome2, densidade2);
        printf("Logo, as Cartas estão empatadas!");
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }    
    return 0;
}