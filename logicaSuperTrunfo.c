#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
    // car 1 
    
   // Criando Variáveis
    char estado1, codigo_carta1[4], nome_cidade1[50];

    int pontos_turisticos1; 

    unsigned long int populacao1; // para acomodar numeros maiores

    float area1, Densi_Pop1;    
    
    double PIB1, PIB_perCapita1;

     //Calcular a Densidade Populacional:
    Densi_Pop1 = populacao1 / area1;

    //Calcular o PIB per Capita
    PIB_perCapita1 = PIB1 / populacao1;


    // Cidade 2 

    // Criando Variáveis
    char estado2, codigo_carta2[4], nome_cidade2[50];

    int pontos_turisticos2; 

    unsigned long int populacao2; // para acomodar numeros maiores

    float area2, Densi_Pop2;    

    double PIB2, PIB_perCapita2;

     //Calcular a Densidade Populacional:
    Densi_Pop2 = populacao2 / area2;

    //Calcular o PIB per Capita
    PIB_perCapita2 = PIB2 / populacao2;


// -----------------------------------------------------------------------------------------------
    
    // Cadastro das Cartas:

    // Cadastro Cidade 1
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf(" %s", codigo_carta1);

    printf("Nome da Cidade: ");
    scanf(" %s", nome_cidade1); // OBS: não lê espaços

    printf("População: ");
    scanf(" %lu", &populacao1);

    printf("Área (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de R$): ");
    scanf(" %lf", &PIB1);  //LF para saída p/variaveis em DOUBLE

    PIB1 *= 1000000000; // Converte PIB para reais

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // Cadastro Cidade 2
    printf("\nEstado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf(" %s", codigo_carta2);

    printf("Nome da Cidade: ");
    scanf(" %s", nome_cidade2); // OBS: não lê espaços

    printf("População: ");
    scanf(" %lu", &populacao2);

    printf("Área (km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de R$): ");
    scanf(" %lf", &PIB2);  // LF para variáveis DOUBLE

    PIB2 *= 1000000000; // Converte PIB para reais

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);
// ----------------------------------------------------------------------------------------

    // Comparação e Exibição de Cartas (População)
    printf("\n\n ** Comparacao de cartas - Atributo: Populacao\n\n");

    printf("Carta 1 - %s: %lu",nome_cidade1,populacao1);
    printf("\nCarta 2 - %s: %lu",nome_cidade2,populacao2);
    
    if (populacao1 > populacao2)
        printf("\nResultado: Carta 1 (%s) venceu!",nome_cidade1);
    else
        printf("\nResultado: Carta 2 (%s) venceu!",nome_cidade2);    


    // Comparação de Cartas (Area)
    printf("\n\n ** Comparacao de cartas - Atributo: Area\n\n");

    printf("Carta 1 - %s: %.2f",nome_cidade1,area1);
    printf("\nCarta 2 - %s: %.2f",nome_cidade2,area2);
    
    if (area1 > area2)
        printf("\nResultado: Carta 1 (%s) venceu!",nome_cidade1);
    else
        printf("\nResultado: Carta 2 (%s) venceu!",nome_cidade2);   
        
    
    // Comparação de Cartas (Pontos Turisticos)
    printf("\n\n ** Comparacao de cartas - Atributo: Pontos Turisticos\n\n");

    printf("Carta 1 - %s: %d",nome_cidade1,pontos_turisticos1);
    printf("\nCarta 2 - %s: %d",nome_cidade2,pontos_turisticos2);
    
    if (pontos_turisticos1 > pontos_turisticos2)
        printf("\nResultado: Carta 1 (%s) venceu!",nome_cidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!",nome_cidade2); 



    return 0;
}
