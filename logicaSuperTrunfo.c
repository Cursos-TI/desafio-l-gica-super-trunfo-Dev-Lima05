#include<stdio.h>
int main(){

    // 1. Criar variaveis

    // PAÍS 1
    char pais1[50];
    int pontos_turisticos1; 
    unsigned long int populacao1; // para acomodar numeros maiores
    float area1, Densi_Pop1;    
    double PIB1;

    // PAÍS 2 

    char pais2[50];
    int pontos_turisticos2; 
    unsigned long int populacao2; // para acomodar numeros maiores
    float area2, Densi_Pop2;    
    double PIB2;


   // 2. Receber dados do usuário 

    // CADASTRO PAÍS 1

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

    //Calcular a Densidade Populacional:
    Densi_Pop1 = (float)populacao1 / area1;


    // CADASTRO PAÍS 2
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

    //Calcular a Densidade Populacional:
    Densi_Pop2 = (float)populacao2 / area2;


     // 3. Menu interativo

    // OPÇÕES - PAÍS 1
    int opcao1; // variavel para receber escolha do usuario

    // variavel booleana para receber o maior ou menor atributo
    int atributo1;

    printf("\n\n*** 1° Atributo para Comparação ***\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Qual atributo deseja comparar❔: ");
    scanf("%d",&opcao1);

    switch (opcao1)
    {
    case 1:
        printf("\nVocê escolheu %d - População",opcao1);
        printf("\nCarta 1 - População: %lu || Carta 2 - População: %lu",populacao1,populacao2);
        // 1 = Carta 1 venceu (população maior)
        // 2 = Carta 2 venceu (população maior)
        // 0 = Empate (populações iguais)
        atributo1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2 ? 2 : 0);
        break;
    case 2:
        printf("\nVocê escolheu %d - Área",opcao1);
        printf("\nCarta 1 - Área: %.2f || Carta 2 - Área: %.2f",area1,area2);
        atributo1 = (area1 > area2) ? 1 : (area1 < area2 ? 2 : 0);
        break;
    case 3:
        printf("\nVocê escolheu %d - PIB",opcao1);
        printf("\nCarta 1 - PIB: %.2lf || Carta 2 - PIB: %.2lf",PIB1,PIB2);
        atributo1 = (PIB1 > PIB2) ? 1 : (PIB1 < PIB2 ? 2 : 0);
        break; 
    case 4:
        printf("\nVocê escolheu %d - Pontos Turisticos",opcao1);
        printf("\nCarta 1 - Pontos Turísticos: %d || Carta 2 - Pontos Turísticos: %d",pontos_turisticos1,pontos_turisticos2);
        atributo1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos1 < pontos_turisticos2 ? 2 : 0);
        break;
    case 5:
        printf("\nVocê escolheu %d - Densidade demográfica",opcao1);
        printf("\nCarta 1 -  Densidade demográfica: %.2f || Carta 2 -  Densidade demográfica: %.2f",Densi_Pop1,Densi_Pop2);
        atributo1 = (Densi_Pop1 < Densi_Pop2) ? 1 : (Densi_Pop1 > Densi_Pop2 ? 2 : 0);
        break;         
    default:
        printf("\n\nOpção inválida ❌");
        break;
    }

    // OPÇÕES - PAÍS 2
    int opcao2; // variavel para receber escolha do usuario

    // variavel booleana para receber o maior ou menor atributo
    int atributo2;

    printf("\n\n*** 2° Atributo para Comparação ***\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Qual atributo deseja comparar❔: ");
    scanf("%d",&opcao2);

    if (opcao1 == opcao2){
        printf("\n Você escolheu o mesmo atributo ⚠️");
    }
    else{
        switch (opcao2)
        {
        case 1:
            printf("\nVocê escolheu %d - População",opcao2);
            printf("\nCarta 1 - População: %lu ||  Carta 2 - População: %lu",populacao1,populacao2);
            atributo2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2 ? 2 : 0);
            break;
        case 2:
            printf("\nVocê escolheu %d - Área",opcao2);
            printf("\nCarta 1 - Área: %.2f || Carta 2 - Área: %.2f",area1,area2);
            atributo2 = (area1 > area2) ? 1 : (area1 < area2 ? 2 : 0);
            break;
        case 3:
            printf("\nVocê escolheu %d PIB",opcao2);
            printf("\nCarta 1 - PIB: %lf || Carta 2 - PIB: %lf",PIB1,PIB2);
            atributo2 = (PIB1 > PIB2) ? 1 : (PIB1 < PIB2 ? 2 : 0);
            break; 
        case 4:
            printf("\nVocê escolheu %d - Pontos Turisticos",opcao2);
            printf("\nCarta 1 - Pontos Turísticos: %d || Carta 2 - Pontos Turísticos: %d",pontos_turisticos1,pontos_turisticos2);
            atributo2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos1 < pontos_turisticos2 ? 2 : 0);
            break;
        case 5:
            printf("\nVocê escolheu %d - Densidade demográfica",opcao2);
            printf("\nCarta 1 -  Densidade demográfica: %.2f || Carta 2 -  Densidade demográfica: %.2f",Densi_Pop1,Densi_Pop2);
            atributo2 = (Densi_Pop1 < Densi_Pop2) ? 1 : (Densi_Pop1 > Densi_Pop2 ? 2 : 0);
            break;         
        default:
            printf("\n\nOpção inválida ❌");
            break;
        }

        /* 4. Comparar atributos e Mostrar resultado
        - O jogador que vencer nas duas comparações vence
        - Ganhar uma e perdar outra comparação - Empata
        - Perdeu as duas comparações - carta 2 venceu*/

        // Exibir resultado
        printf("\n\n%s 🆚 %s",pais1,pais2);
        printf("\n1° Opção de atributo escolhido: %d || ",opcao1);
        printf("2° Opção de atributo escolhido: %d\n ",opcao2);
        

        // Compara "VITÓRIAS"
        if (atributo1 == 1 && atributo2 == 1)
            printf("\n --- CARTA 1️⃣  VENCEU 🏆 ---");
        else if (atributo1 == 2 && atributo2 == 2)
            printf("\n--- CARTA 2️⃣  VENCEU 🏆 ---");
        else if ((atributo1 == 0 && atributo2 == 0) || (atributo1 != atributo2))
            printf("\n --- EMPATE 🤝 ---");   

        }
        
        return 0;
    }