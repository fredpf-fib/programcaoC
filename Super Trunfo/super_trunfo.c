#include <stdio.h>

int main(){

    char estado[30], codigo[3], cidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

//Obter informações da carta 1
    printf("Por favor, digitar as informações da Carta 1: \n\n");

    printf("Digite o Estado: \n");
    scanf("%s",&estado);

    printf("Digite o código da carta: \n");
    scanf("%s",&codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s" ,&cidade);

    printf("Digite a população: \n");
    scanf("%d",&populacao);

    printf("Digite a área: \n");
    scanf("%f",&area);

    printf("Digite o PIB: \n");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d",&pontosTuristicos);
    printf("\n");
 
//Exibir informações da carta 1
    printf("=================================================\n");
    printf("==========           Carta 1           ==========\n");
    printf("=================================================\n\n");
    printf("Estado: %s \n",estado);
    printf("Código: %s \n",codigo);
    printf("Nome da Cidade: %s \n",cidade);
    printf("População: %d \n",populacao);
    printf("Área: %f \n",area);
    printf("PIB: %f \n",pib);
    printf("Número de Pontos Turísticos: %d \n\n",pontosTuristicos);
    printf("=================================================\n\n");
    
//Obter informações da carta 2
    printf("Por favor digitar as informações da Carta 2: \n\n");

    printf("Digite o Estado: \n");
    scanf("%s",&estado);

    printf("Digite o código da carta: \n");
    scanf("%s",&codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s" ,&cidade);

    printf("Digite a população: \n");
    scanf("%d",&populacao);

    printf("Digite a área: \n");
    scanf("%f",&area);

    printf("Digite o PIB: \n");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d",&pontosTuristicos);
    printf("\n");

//Exibir informações da carta 2
    printf("=================================================\n");
    printf("==========           Carta 2           ==========\n");
    printf("=================================================\n\n");
    printf("Estado: %s \n",estado);
    printf("Código: %s \n",codigo);
    printf("Nome da Cidade: %s \n",cidade);
    printf("População: %d \n",populacao);
    printf("Área: %f \n",area);
    printf("PIB: %f \n",pib);
    printf("Número de Pontos Turísticos: %d \n\n",pontosTuristicos);
    printf("=================================================\n");


    return 0;

}
