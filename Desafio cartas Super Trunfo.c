#include <stdio.h>
#include <string.h>

int main() 
{
	char carta1, carta2;
	char estado1[20], estado2[20];
	char codigo_da_carta1[10], codigo_da_carta2[10];
	char nome_da_cidade1[20], nome_da_cidade2[20];
	int populacao1, populacao2;
	int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
	float area1, area2;
	float PIB1, PIB2;
	float densidade_populacional1, densidade_populacional2, inverso_densidade1, inverso_densidade2, densidade_populacional_inversa1, densidade_populacional_inversa2;
	float PIB_per_capita1, PIB_per_capita2;
	float Super_Poder1, Super_Poder2;

	//Informações da carta 1
	//Estado
	printf("Insira as informações da carta 1: \n");
	printf("Qual o nome do estado? (Ex.: Ceará, Minas Gerais, ...) \n");
	fgets(estado1, 20, stdin);
	estado1[strcspn(estado1, "\n")] = 0;
	printf(" \n");

	//Código da carta
	printf("Qual o código da carta? (Ex.: A01, A02, A03, ...) \n");
	scanf("%s", codigo_da_carta1);
	getchar(); // Limpa o buffer
	printf(" \n");

	//Nome da Cidade
	printf("Qual o nome da cidade? (Ex.: Fortaleza, Belo Horizonte, ...) \n");
	fgets(nome_da_cidade1, 20, stdin);
	nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0;
	printf(" \n");

	//População
	printf("Qual o número de habitantes? (Ex.: 2.000.000) \n");
	scanf("%d", &populacao1);
	getchar(); // Limpa o buffer
	printf(" \n");

	//Área (em km²)
	printf("Qual a área da cidade em quilômetros quadrados? (Ex.: 1500.00 km²) \n");
	scanf("%f", &area1);
	getchar(); // Limpa o buffer
	printf(" \n");

	//PIB
	printf("Qual o Produto Interno Bruto da cidade? (Ex.: 700 bilhões de reais) \n");
	scanf("%f", &PIB1);
	getchar(); // Limpa o buffer
	printf(" \n");

	//Número de Pontos Turísticos
	printf("Qual a quantidade de pontos turisticos na cidade? (Ex.:20, 40, 50) \n");
	scanf("%d", &numero_de_pontos_turisticos1);
	getchar();	// Limpa o buffer
	
	//Calculo Densidade populacional
	densidade_populacional1 = (float) populacao1 / area1;
	
	//Calculo PIB per Capita
	PIB_per_capita1 = (float) populacao1 / PIB1;
	
    //Calculo de densidade populacional inversa
	inverso_densidade1 = densidade_populacional1 / 1;
	densidade_populacional_inversa1 = densidade_populacional1 * inverso_densidade1;
	
	//Super Poder: soma de todas as características da carta 1, exceto estado, código e nome
	Super_Poder1 = (float) populacao1 + area1 + PIB1 + numero_de_pontos_turisticos1 + PIB_per_capita1 + densidade_populacional_inversa1;
	
	printf(" \n");
	printf("----------------------------------------------------------------------------\n");
	printf(" \n");

	/*----------------------------------------------------------------------------------------*/

	//Informações da carta 2
	//Estado
	printf("Insira as informações da carta 2: \n");
	printf("Qual o nome do estado? (Ex.: Ceará, Minas Gerais, ...) \n");
	fgets(estado2, 20, stdin);
	estado2[strcspn(estado2, "\n")] = 0;
	printf(" \n");

	//Código da carta
	printf("Qual o código da carta? (Ex.: B01, B02, B03, ...) \n");
	scanf("%s", codigo_da_carta2);
	getchar(); // Limpa o buffer
	printf(" \n");

	//Nome da Cidade
	printf("Qual o nome da cidade? (Ex.: Fortaleza, Belo Horizonte, ...) \n");
	fgets(nome_da_cidade2, 20, stdin);
	nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0;
	printf(" \n");

	//População
	printf("Qual o número de habitantes? (Ex.: 2.000.000) \n");
	scanf("%d", &populacao2);
	getchar(); // Limpa o buffer
	printf(" \n");

	//Área (em km²)
	printf("Qual a Área da cidade em quilômetros quadrados? (Ex.: 1500.00 km²) \n");
	scanf("%f", &area2);
	getchar(); // Limpa o buffer
	printf(" \n");

	//PIB
	printf("Qual o Produto Interno Bruto da cidade? (Ex.: 700 bilhões de reais) \n");
	scanf("%f", &PIB2);
	getchar(); // Limpa o buffer
	printf(" \n");

	//Número de Pontos Turísticos
	printf("Qual a quantidade de pontos turisticos na cidade? (Ex.:20, 40, 50) \n");
	scanf("%d", &numero_de_pontos_turisticos2);
	getchar(); // Limpa o buffer
	
	//Calculo Densidade populacional
	densidade_populacional2 = (float) populacao2 / area2;
	
	//Calculo PIB per Capita
	PIB_per_capita2 = (float) populacao2 / PIB2;
	
	//Calculo de densidade populacional inversa
	inverso_densidade2 = densidade_populacional2 / 1;
	densidade_populacional_inversa2 = densidade_populacional2 * inverso_densidade2;
	
	//Super Poder: soma de todas as características da carta 2, exceto estado, código e nome
	Super_Poder2 = (float) populacao2 + area2 + PIB2 + numero_de_pontos_turisticos2 + PIB_per_capita2 + densidade_populacional_inversa2;
	
	printf(" \n");
	printf("////////////////////////////////////////////////////////////////////\n");
	printf(" \n");

	/*----------------------------------------------------------------------------------------*/

	//SerC! demonstrado no terminal
	//InformaC'C5es da carta 1
	printf("Carta 1: \n");
	printf("Estado: %s \n", estado1);
	printf("Código: %s \n", codigo_da_carta1);
	printf("Nome da Cidade: %s \n", nome_da_cidade1);
	printf("População: %d \n", populacao1);
	printf("Área (em km²): %.2f \n", area1);
	printf("PIB: %.2f \n", PIB1);
	printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);
	printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);
	printf("PIB per Capita: %.2f reais \n", PIB_per_capita1);

	//EspaC'amento
	printf(" \n");
	printf("______________________________________________________________\n");
	printf(" \n");

	//InformaC'C5es da carta 2
	printf("Carta 2: \n");
	printf("Estado: %s \n", estado2);
	printf("Código: %s \n", codigo_da_carta2);
	printf("Nome da Cidade: %s \n", nome_da_cidade2);
	printf("População: %d \n", populacao2);
	printf("Área (em km²): %.2f \n", area2);
	printf("PIB: %.2f \n", PIB2);
	printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);
	printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
	printf("PIB per Capita: %.2f reais \n", PIB_per_capita2);
	printf(" \n");
	printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n");
	printf(" \n");
	
	/*----------------------------------------------------------------------------------------*/
	//Comparação das cartas
    /*
    1 - verdadeiro - carta 1

    0 - falso - carta 2
    */

    int populacao = populacao1 > populacao2;
    int area = area1 > area2;
    int PIB = PIB1 > PIB2;
    int pontos_turisticos = numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2;
    int densidade_populacional = densidade_populacional_inversa1 < densidade_populacional_inversa2;
    int PIB_per_Capita = PIB_per_capita1 > PIB_per_capita2;
    int Super_Poder = Super_Poder1 > Super_Poder2;

	//Exibir as características vencedoras das cartas
    printf("Características vencedoras das cartas:\n");
    printf("\n");
    printf("População: Carta %s venceu (%d)\n", populacao ? "1" : "2", populacao);
    printf("Área: Carta %s venceu (%d)\n", area ? "1" : "2", area);
    printf("PIB: Carta %s venceu (%d)\n", PIB ? "1" : "2", PIB);
    printf("Número de Pontos Turísticos: Carta %s venceu (%d)\n", pontos_turisticos ? "1" : "2", pontos_turisticos);
    printf("Densidade Populacional: Carta %s venceu (%d)\n", densidade_populacional ? "1" : "2", densidade_populacional);
    printf("PIB per Capita: Carta %s venceu (%d)\n", PIB_per_Capita ? "1" : "2", PIB_per_Capita);
    printf("Super Poder: Carta %s venceu (%d)\n", Super_Poder ? "1" : "2", Super_Poder);
    
	return 0;

}