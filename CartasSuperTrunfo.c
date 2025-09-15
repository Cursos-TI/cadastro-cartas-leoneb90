#include <stdio.h>

    int main(){
        //carta 1 
    char Estado1[3];  // EX: RJ , SP
    char CodigodaCarta1 [20];
    char NomedaCidade1 [40];
    int Populacao1;
    float AreaemKm1;
    float Pib1;
    int PontosTuristicos1;

     //carta 2
    char Estado2[3];  // EX: RJ , SP
    char CodigodaCarta2 [20];
    char NomedaCidade2 [40];
    int Populacao2;
    float AreaemKm2;
    float Pib2;
    int PontosTuristicos2;
    
    // carta 1
    printf("\n - Cadastro - Carta 1 - \n");
    printf("Digite o Estado: \n");
    scanf("%s", Estado1);
    printf("Digite o Codigo da Carta: \n");
    scanf("%s", CodigodaCarta1);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomedaCidade1);
    printf("Digite a quantidade Populacional:\n");
    scanf("%d", &Populacao1);
    printf("Digite a Area \n");
    scanf("%f", &AreaemKm1);
    printf("Digite o Pib: \n");
    scanf("%f", &Pib1);
    printf("Digite o Pontosturisticos: \n");
    scanf("%d", &PontosTuristicos1);
        
    /*carta 2 */
    printf("\n - Cadastro - Carta 2 - \n");
    printf("Digite o Estado: \n");
    scanf("%s", Estado2);
    printf("Digite o Codigo da Carta: \n");
    scanf("%s", CodigodaCarta2);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomedaCidade2);
    printf("Digite a quantidade Populacional:\n");
    scanf("%d", &Populacao2);
    printf("Digite a Area \n");
    scanf("%f", &AreaemKm2);
    printf("Digite o Pib: \n");
    scanf("%f", &Pib2);
    printf("Digite o Pontosturisticos: \n");
    scanf("%d", &PontosTuristicos2);

    printf("\n Dados da Carta 1 \n");
    printf("Nome do Estado: %s\n", Estado1);
    printf("Codigo da Carta: %s\n", CodigodaCarta1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Pib: %.2f\n", Pib1);
    printf("Area: %.2f\n", AreaemKm1);
    printf("pontos Turisticos: %d\n", PontosTuristicos1);
    

    printf("\n Dados da Carta 2 \n");
    printf("Nome do Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", CodigodaCarta2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Pib: %.2f\n", Pib2);
    printf("Area: %.2f\n", AreaemKm2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);


    return 0;

}
