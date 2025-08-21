#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas


int main(){
    // 1 .Definição das variáveis para armazenar as propriedades das Paíss
    
    // País 1

   // Criando Variáveis
    char pais1[50];

    int pontos_turisticos1; 

    unsigned long int populacao1; // para acomodar numeros maiores

    float area1, Densi_Pop1;    
    
    double PIB1;

     //Calcular a Densidade Populacional:
    Densi_Pop1 = populacao1 / area1;


    // País 2 

    // Criando Variáveis
    char pais2[50];

    int pontos_turisticos2; 

    unsigned long int populacao2; // para acomodar numeros maiores

    float area2, Densi_Pop2;    

    double PIB2;

     //Calcular a Densidade Populacional:
    Densi_Pop2 = populacao2 / area2;


// -----------------------------------------------------------------------------------------------
    
    // 2 .Cadastro das Cartas:

    // Cadastro País 1

    printf("Nome do País: ");
    scanf(" %s", pais1); // OBS: não lê espaços

    printf("População: ");
    scanf(" %lu", &populacao1);

    printf("Área (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de R$): ");
    scanf(" %lf", &PIB1);  //LF para saída p/variaveis em DOUBLE

    PIB1 *= 1000000000; // Converte PIB para reais

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);


    // Cadastro País 2
    printf("\nNome do País: ");
    scanf(" %s", pais2); // OBS: não lê espaços

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

//3. Mostrar menu interativo

int opcao; // variavel para receber escolha do usuario

printf("\n\n*** Atributo para Comparação ***\n\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade demográfica\n");
printf("Qual atributo deseja comparar❔: ");
scanf("%d",&opcao);

//---------------------------------------------------------------
// Comparação e exibição

/* MOSTRAR 
O nome dos dois países.
O atributo usado na comparação.
Os valores do atributo para cada carta.
Qual carta venceu.
Em caso de empate, exibir a mensagem "Empate!".*/

switch(opcao){
    case 1:
        printf("\n\n%s 🆚 %s\n",pais1,pais2);
        printf("Atributo escolhido: %d População\n",opcao);
        printf("País1 - %s %lu 🆚 %lu %s - País2\n",pais1,populacao1,populacao2,pais2);

        if (populacao1 == populacao2)
            printf("Empate 🤝!!");
       else if (populacao1 > populacao2)
            printf("%s venceu 🏆",pais1);
        else
            printf(" %s venceu 🏆",pais2);
        break;

    case 2:
        printf("\n\n%s 🆚 %s\n",pais1,pais2);
        printf("Atributo escolhido: %d Área\n",opcao);
        printf("País1 - %s %f 🆚 %f %s - País2\n",pais1,area1,area2,pais2);

        if (area1 == area2)
            printf("Empate 🤝!!");
       else if (area1 > area2)
            printf(" %s venceu 🏆",pais1);
        else
            printf("%s venceu 🏆",pais2);
        break;  
    
    case 3:
        printf("\n\n%s 🆚 %s\n",pais1,pais2);
        printf("Atributo escolhido: %d PIB\n",opcao);
        printf("País1 - %s %f 🆚 %f %s - País2\n",pais1,PIB1,PIB2,pais2);

        if (PIB1 == PIB2)
            printf("Empate 🤝!!");
       else if (PIB1 > PIB2)
            printf("%s venceu 🏆",pais1);
        else
            printf("%s venceu 🏆",pais2);
        break;  
     
    case 4:
        printf("\n\n%s 🆚 %s\n",pais1,pais2);
        printf("Atributo escolhido: %d Pontos Turísticos\n",opcao);
        printf("País1 - %s %d 🆚 %d %s - País2\n",pais1,pontos_turisticos1,pontos_turisticos2,pais2);

        if (pontos_turisticos1 == pontos_turisticos2)
            printf("Empate 🤝!!");
       else if (pontos_turisticos1 > pontos_turisticos2)
            printf("%s venceu 🏆",pais1);
        else
            printf("%s venceu 🏆",pais2);
        break;  
        
    case 5:
        printf("\n\n%s 🆚 %s\n",pais1,pais2);
        printf("Atributo escolhido: %d Densidade demográfica\n",opcao);
        printf("País1 - %s %f 🆚 %f %s - País2\n",pais1,Densi_Pop1,Densi_Pop2,pais2);

        if (Densi_Pop1 == Densi_Pop2)
            printf("Empate 🤝!!");
       else if (Densi_Pop1 < Densi_Pop2)
            printf("%s venceu 🏆",pais1);
        else
            printf("%s venceu 🏆",pais2);
        break;

    default:
        printf("\n\n❌ Nenhuma opção disponível");
        break;  
    }
        
    return 0;
}
