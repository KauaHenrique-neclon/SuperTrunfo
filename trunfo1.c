#include <stdio.h>

int main(){
    char nome[30],cidade[30];
    int turistico;
    float area,PIB, populacao;
    float SuperPoderCartaA, SuperPoderCartaB;
    

    printf("Digite o nome\n");
    scanf("%s", &nome);
    printf("Digite a cidade\n");
    scanf("%s", &cidade);
    printf("Digite a populacao\n");
    scanf("%f", &populacao);
    printf("Digite a area\n");
    scanf("%f", &area);
    printf("Digite o PIB\n");
    scanf("%f", &PIB);
    printf("Digite quantos ponto turistico\n");
    scanf("%d", &turistico);
  
   
    float densidade, pibPerCapita;
 
    densidade = populacao / area;
    pibPerCapita = PIB / populacao;

    printf("Nome: %s\nCidade: %s\nPopulaçao: %.2f\nArea: %.2f\nPIB: %.2f\nPonto Turismo: %d\nDensidade: %.2f\nPib Per Capita: %.2f\n",nome,cidade,populacao,area, PIB, turistico, densidade,pibPerCapita);

    char bnome[30],bcidade[30];
    int bturistico;
    float barea,bPIB, bpopulacao;


    printf("Digite o nome da segunda carta\n");
    scanf("%s", &bnome);
    printf("Digite a cidade da segunda carta \n");
    scanf("%s", &bcidade);
    printf("Digite a populacao da segunda carta\n");
    scanf("%f", &bpopulacao);
    printf("Digite a area da segunda carta\n");
    scanf("%f", &barea);
    printf("Digite o PIB da segunda carta\n");
    scanf("%f", &bPIB);
    printf("Digite quantos ponto turistico da segunda carta\n");
    scanf("%d", &bturistico);


    float bdensidade, bpibPerCapita;
 
    bdensidade = bpopulacao / barea;
    bpibPerCapita = bPIB / bpopulacao;

    //Print segunda carta
    printf("info segunda cartas\nNome: %s\nCidade: %s\nPopulaçao: %.2f\nArea: %.2f\nPIB: %.2f\nPonto Turismo: %d\nDensidade: %.2f\nPib Per Capita:%.2f",bnome,bcidade,bpopulacao,barea, bPIB, bturistico, bdensidade,bpibPerCapita);

    printf("Comparação das cartas\n");
    printf("Nome das cartas\n");
    printf("Carta A: %s - Carta B: %s\n",nome , bnome);
    printf("Nome das cidades\n");
    printf("Carta A: %s - Carta B: %s\n", cidade, bcidade);
    printf("Turismo das cartas\n");
    printf("Carta A: %d - Carta B: %d\n", turistico, bturistico);
    printf("Area das cartas\n");
    printf("Carta A: %f - Carta B: %f\n", area, barea);
    printf("Pib das cartas\n");
    printf("Carta A: %f - Carta B: %f\n", PIB, bPIB);
    printf("Populaçao das cartas\n");
    printf("Carta A: %f - Carta B: %f\n", populacao, bpopulacao);
    printf("Densidade das cartas\n");
    printf("Carta A: %f - Carta B: %f\n", densidade, bdensidade);
    printf("Pib per capita das cartas\n");
    printf("Carta A: %f Carta B: %f\n", pibPerCapita, bpibPerCapita);

    SuperPoderCartaA = turistico + area + PIB + populacao;

    SuperPoderCartaB = bturistico + barea + bPIB + bpopulacao;

    printf("Super Poderes das Cartas\n");
    printf("Carta A: %f - Carta B: %f\n", SuperPoderCartaA, SuperPoderCartaB);


    if(densidade < bdensidade){
        print("Densidade da Carta A é menor");
        printf("Portanto, Carta A venceu");
    }else{
        printf("Densidade da Carta B é menor");
        printf("Portanto, Carta B venceu");
    };

    return 0;
}