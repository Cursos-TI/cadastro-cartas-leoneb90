#include <stdio.h>
#include <stdlib.h>

int main() {

    float carta1;
    float carta2;
    char comparacao;

    // Carta 1 
    char Estado1[3];  
    char CodigodaCarta1[10];
    char NomedaCidade1[30];
    int Populacao1;
    float AreaKm1;
    float Pib1;
    int PontosTuristicos1;
    float DensidadePopulacional1;
    float PIBperCapita1;
    
    // Carta 2
    char Estado2[3];  
    char CodigodaCarta2[10];
    char NomedaCidade2[30];
    int Populacao2;
    float AreaKm2;
    float Pib2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float PIBperCapita2;
        
    // Cadastro carta 1
    printf("\n - Cadastro - Carta 1 - \n");
    printf("Digite o Estado (Ex de: A-H): ");
    scanf("%s", Estado1);
    printf("Digite o Codigo da Carta (Ex: A01): ");
    scanf("%s", CodigodaCarta1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomedaCidade1); 
    printf("Digite a quantidade Populacional: ");
    scanf("%d", &Populacao1);
    printf("Digite a Area: ");
    scanf("%f", &AreaKm1);
    printf("Digite o Pib: ");
    scanf("%f", &Pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);
       
    DensidadePopulacional1 = Populacao1 / AreaKm1;
    PIBperCapita1 = Pib1 / Populacao1;
    carta1 = Populacao1 + AreaKm1 + Pib1 + PontosTuristicos1;

    // Cadastro carta 2
    printf("\n - Cadastro - Carta 2 - \n");
    printf("Digite o Estado (Ex de: A-H): ");
    scanf("%s", Estado2);
    printf("Digite o Codigo da Carta (Ex: B02): ");
    scanf("%s", CodigodaCarta2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomedaCidade2);
    printf("Digite a quantidade Populacional: ");
    scanf("%d", &Populacao2);
    printf("Digite a Area: ");
    scanf("%f", &AreaKm2);
    printf("Digite o Pib: ");
    scanf("%f", &Pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos2);

    DensidadePopulacional2 = Populacao2 / AreaKm2; 
    PIBperCapita2 = Pib2 / Populacao2;
    carta2 = Populacao2 + AreaKm2 + Pib2 + PontosTuristicos2;

    //saida carta1
    printf("\n Dados da Carta 1 \n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da Carta: %s\n", CodigodaCarta1);
    printf("Cidade: %s\n", NomedaCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.0f km2\n", AreaKm1);
    printf("Pib: %.0f bilhoes de reias\n", Pib1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %f reais\n", PIBperCapita1);
    printf("Poder da carta1: %.2f\n", carta1 =(Populacao1 + AreaKm1 + Pib1 + PontosTuristicos1)); carta1 = Populacao1 + AreaKm1 + Pib1 + PontosTuristicos1; 
    //saida carta 2
    printf("\n Dados da Carta 2 \n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", CodigodaCarta2);
    printf("Cidade: %s\n", NomedaCidade2);
    printf("Populacao: %d\n", Populacao2); 
    printf("Area: %.0f km2\n", AreaKm2); 
    printf("Pib: %.0f bilhoes de reais\n", Pib2); 
    printf("Pontos Turisticos: %d\n", PontosTuristicos2); 
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2); 
    printf("PIB per Capita: %f reais\n", PIBperCapita2);
    printf("Poder da carta2: %.2f\n", carta2 =(Populacao2 + AreaKm2 + Pib2 + PontosTuristicos2));

    // Início do Jogo - menu interativo
    printf("\n    Bem-vindo ao Super Trunfo!   \n");
    printf("\n Você deve escolher um atributo para comparação.\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("B. PIB\n"); 
    printf("T. Pontos Turisticos\n");
    printf("D. Densidade Populacional\n");
    printf("C. PIB per Capita\n");

    //digitar a opção para ser comparada
    printf("\n Escolha uma opção: ");
    scanf(" %c", &comparacao); 

     //Usando a logica para comparar os atributos escolhidos 
     //Escolher  a letra, tanto faz maiuscula ou minuscula, para executar o comando buscando os atributos.
    switch (comparacao)
    {
     case 'P':
     case 'p':
     printf("Você escolheu População!\n");
     if(Populacao1 > Populacao2){
     printf(" Carta 1 venceu na comparação de População! \n,");
     } else if(Populacao2 > Populacao1){
     printf("Carta 2 venceu na comparação de População!\n");
     } else {
     printf("Empate na comparação de População!\n");
        }
        break;
     case 'A':
     case 'a':
     printf("Você escolheu Área!\n");
     if(AreaKm1 > AreaKm2){
     printf("Área: Carta 1 venceu!\n");
     } else if (AreaKm2 > AreaKm1){
     printf("Área: Carta 2 venceu!\n");
     }
        break;
     case 'B':
     case 'b':
     printf("Você escolheu PIB!\n");
     if(Pib1 > Pib2){
     printf("PIB: Carta 1 venceu!\n");
     } else if (Pib2 < Pib1){
     printf("PIB: Carta 2 venceu!\n");
     }
        break;
     case 'T':
     case 't':
     printf("Você escolheu Pontos Turisticos!\n");
     if(PontosTuristicos1 > PontosTuristicos2){
     printf("Pontos Turísticos: Carta 1 venceu!\n");
     } else if (PontosTuristicos2 < PontosTuristicos1){
     printf("Pontos Turísticos: Carta 2 venceu!\n");
     }
        break;
     case 'D':
     case 'd':
     printf("Você escolheu Densidade Populacional!\n");
     if(DensidadePopulacional1 < DensidadePopulacional2){
     printf("Densidade Populacional: Carta 1 venceu!\n");
     } else if (DensidadePopulacional2 > DensidadePopulacional1){
     printf("Densidade Populacional: Carta 2 venceu!\n");
     }
        break;
     case 'C':
     case 'c':
     printf("Você escolheu PIB per Capita!\n");
     if(PIBperCapita1 > PIBperCapita2){
     printf("PIB per Capita: Carta 1 venceu!\n");
     } else if (PIBperCapita2 < PIBperCapita1){
     printf("PIB per Capita: Carta 2 venceu!\n");
     }
        break;
     default:
     printf("Opção inválida!\n");
     break;
    }

    if (carta1 > carta2){
        printf("\nSuper Poder: Carta 1 venceu!\n");
    } else if (carta2 > carta1){
        printf("\nSuper Poder: Carta 2 venceu!\n");
    } else {
        printf("\nSuper Poder: Deu empate!\n");
    }

     // Exibição estilizada do resultado final
    printf("\n   Resultado Final   \n");
    printf("Carta 1 - %s (%s): %d\n", NomedaCidade1, Estado1, Populacao1);
    printf("Carta 2 - %s (%s): %d\n", NomedaCidade2, Estado2, Populacao2);
    
    if (carta1 > carta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomedaCidade1);
    } else if (carta2 > carta1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", NomedaCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
