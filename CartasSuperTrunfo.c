#include <stdio.h>
int main(){
    //DECLARAÇÃO DAS VARIÁVEIAS DE PROJETO
    char letraEstado1 = 'A', letraEstado2 = 'A'; 
    char codCarta1[3], codCarta2[3], nome1[30], nome2[30];
    int populacao1 = 0, populacao2 = 0, pontosTur1 = 0, pontosTur2 = 0;
    float area1 = 0, area2 = 0, pib1 = 0, pib2 = 0;
    
    //LEITURA DOS DADOS DA PRIMEIRA CARTA
    printf("Desafio Super Trunfo\n");
    printf("\nOlá, vamos cadastrar sua 1° carta\n");

    printf("Digite a letra que representa o estado (A-H): \n");

    int c1;
    do {
        c1 = getchar();
    } while (c1 == '\n' || c1 == ' ');
    letraEstado1 = (char)c1; //UTILIZEI ESSE MÉTODO DE LEITURA POIS ESTAVA DANDO PROBLEMA NA HORA DE EXIBIR QUANDO UTILIZAVA O PRINTF.

    printf("Digite o código da sua carta (ex: A01, B03): \n");
    scanf("%s", codCarta1);

    printf("Informe nome da cidade: \n");
    scanf(" %[^\n]", nome1);

    printf("Informe a população da cidade: \n");
    scanf("%i", &populacao1);

    printf("Informe a área da cidade: \n");
    scanf("%f", &area1);

    printf("Informe o pib da cidade: \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontosTur1);

    //EXIBÇÃO DOS DADOS CADASTRADOS PELO USUÁRIO REFERENTES À 1° CARTA
    printf("\nCARTA 1 \n");
    printf("Estado: %c\n", letraEstado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome: %s\n", nome1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %i\n", pontosTur1);

    //LEITURA DOS DADOS DA SEGUNDA CARTA
    printf("\nAgora repita o processo para sua 2° carta\n");

    printf("Digite a letra que representa o estado (A-H): \n");
    int c2;
    do {
        c2 = getchar();
    } while (c2 == '\n' || c2 == ' ');
    letraEstado2 = (char)c2; 

    printf("Digite o código da sua carta (ex: A01, B03): \n");
    scanf("%s", codCarta2);

    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", nome2);

    printf("Informe a população da cidade: \n");
    scanf("%i", &populacao2);

    printf("Informe a área da cidade: \n");
    scanf("%f", &area2);

    printf("Informe o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontosTur2);

    //EXIBÇÃO DOS DADOS CADASTRADOS PELO USUÁRIO REFERENTES À 2° CARTA
    printf("\nCARTA 2 \n");
    printf("Estado: %c\n", letraEstado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome: %s\n", nome2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %i\n", pontosTur2);

    
    return 0;
}