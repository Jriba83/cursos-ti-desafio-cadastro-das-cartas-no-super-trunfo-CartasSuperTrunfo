#include <stdio.h>

int main() {
    
    char estado1; 
    char estado2;
    char codigo1[5]; 
    char codigo2[5];
    char nomedacidade1[50];
    char nomedacidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int numerodepontosturisticos1;
    int numerodepontosturisticos2;
    int carta;

    printf("Digite o estado1: \n");
    scanf("%c", &estado1);

    printf("Digite o codigo1: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da cidade1: \n");
    scanf("%s", &nomedacidade1);

    printf("Digite a populacao1: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a area1: \n");
    scanf("%f", &area1);

    printf("Digite o pib1: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos1: \n");
    scanf("%d", &numerodepontosturisticos1);

    printf("Digite o estado2: \n");
    scanf("%s", &estado2);

    printf("Digite o Codigo2: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade2: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite a populacao2: \n");
    scanf("%d", &populacao2);

    printf("Digite a area2: \n");
    scanf("%f", &area2);

    printf("Digite o pib2: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos tursticos2: \n");
    scanf("%d", &numerodepontosturisticos2);
    
    printf("Carta1:%d 1 \n", carta);
    printf("Estado1:%c \nCodigo1:%s \n", estado1, codigo1);
    printf("Nome da Cidade1:%s \nPopulacao1:%d \n",nomedacidade1, populacao1);
    printf("Area1:%f Km² \nPib1:%f \n", area1, pib1);
    printf("Numero de Pontos Turisticos1:%d \n", numerodepontosturisticos1);
    printf("Carta2:%d 2 \n", carta);
    printf("Estado2:%c \nCodigo2:%s \n", estado2, codigo2);
    printf("Nome da cidade2:%s \nPopulacao:%d \n", nomedacidade2, populacao2);
    printf("Area:%f Km² \nPib:%f \n", area2, pib2);
    printf("Digite o Numero de Pontos Turisticos:%d \n", numerodepontosturisticos2);

    return 0;
}
