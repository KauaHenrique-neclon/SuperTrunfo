#include <stdio.h>


// struct para guardar os dados da cartas
// nome e cidade são char, enquanto PIB, populacao e area são float 
struct Carta{
    char nome[30];
    char cidade[30];
    float populacao;
    float area;
    float PIB;
    int turistico;
};


// criando uma struct para receber dados da primeira carta
// ele herda da struct Carta para acionar dados nela
struct Carta Carta1() {
    struct Carta carta;

    printf("Digite o nome\n");
    scanf("%s", &carta.nome);
    printf("Digite a cidade\n");
    scanf("%s", &carta.cidade);
    printf("Digite a populacao\n");
    scanf("%f", &carta.populacao);
    printf("Digite a area\n");
    scanf("%f", &carta.area);
    printf("Digite o PIB\n");
    scanf("%f", &carta.PIB);
    printf("Digite quantos ponto turistico\n");
    scanf("%d", &carta.turistico);
    return carta; // ele retorna a struct
}

// criando uma struct para receber dados da segunda carta
// ele herda da struct Carta para acionar dados nela
struct Carta Carta2() {
    struct Carta carta;

    printf("Digite o nome da segunda carta\n");
    scanf("%s", &carta.nome);
    printf("Digite a cidade da segunda carta \n");
    scanf("%s", &carta.cidade);
    printf("Digite a populacao da segunda carta\n");
    scanf("%f", &carta.populacao);
    printf("Digite a area da segunda carta\n");
    scanf("%f", &carta.area);
    printf("Digite o PIB da segunda carta\n");
    scanf("%f", &carta.PIB);
    printf("Digite quantos ponto turistico da segunda carta\n");
    scanf("%d", &carta.turistico);
    return carta; // ele retorna o struct
}

int main(){
    // ele está instanciando a struct da primeira e segunda carta
    struct Carta cartaA = Carta1();
    struct Carta cartaB = Carta2();
    
    // ele calcula a densidade da carta 1 e carta 2
    // ele é do tipo float de dados
    float densidadeA = cartaA.populacao / cartaA.area;
    float densidadeB = cartaB.populacao / cartaB.area;
   
    // ele calcula o Pib Per Capita da carta 1 e carta 2
    // ele é do tipo float de dados
    float pibPerCapitaA = cartaA.PIB / cartaA.populacao;
    float pibPerCapitaB = cartaB.PIB / cartaB.populacao;
    
    // ele cria um atributo da carta 1 e carta 2
    // ele tambem é do tipo float de dados
    float superPoderCartaA = cartaA.turistico + cartaA.area + cartaA.PIB + cartaA.populacao;
    float superPoderCartaB = cartaB.turistico + cartaB.area + cartaB.PIB + cartaB.populacao;

    // uma variavel que será usada para receber a escolha do usuario
    int escolha;

    // Começa a escolha do Switch
    printf("Escolha uma Opcao");
    printf("Comparar tudo, Qual atributo venceu ou atributo pro atributo");
    printf("1. Comparar tudo");
    printf("2. Qual atributo venceu");
    printf("3. Comparar atributo pro atributo");
    scanf("%d", &escolha);
    
    // inicio do primeiro Switch do codigo, para escolher o que o usuario deseja
    switch(escolha){
    
    // escolha 1, para mostrar todos os atributos de uma vez
    // ele mostra os atributos tanto da carta 1 e carta 2 
    // mostra um do lado do outro
    case 1:
        printf("Comparação das cartas\n");
        printf("Nome das cartas\n");
        printf("Carta A: %s - Carta B: %s\n", cartaA.nome , cartaB.nome);
        printf("Nome das cidades\n");
        printf("Carta A: %s - Carta B: %s\n", cartaA.cidade, cartaB.cidade);
        printf("Turismo das cartas\n");
        printf("Carta A: %d - Carta B: %d\n", cartaA.turistico, cartaB.turistico);
        printf("Area das cartas\n");
        printf("Carta A: %f - Carta B: %f\n", cartaA.area, cartaB.area);
        printf("Pib das cartas\n");
        printf("Carta A: %f - Carta B: %f\n", cartaA.PIB, cartaB.PIB);
        printf("Populaçao das cartas\n");
        printf("Carta A: %f - Carta B: %f\n", cartaA.populacao, cartaB.populacao);
        printf("Densidade das cartas\n");
        printf("Carta A: %f - Carta B: %f\n", densidadeA, densidadeB);
        // Pib per capita das cartas
        printf("Pib per Capita das Cartas\n");
        printf("Carta A: %f - Carta B: %f\n", pibPerCapitaA, pibPerCapitaB);
        // super poderes da cartas
        printf("Super Poderes das Cartas\n");
        printf("Carta A: %f - Carta B: %f\n", superPoderCartaA, superPoderCartaB);
        break;
    //fim da escolha 1
    


    //começo da escolha 2, ele cria um outro Switch para
    // escolher qual atributo é mais forte que o outro
    // ele ver qual é melhor que o outro atributo da carta
    case 2:
        int escolhaVenceu;
        printf("Verificar qual venceu");
        printf("1. Area");
        printf("2. Pib");
        printf("3. Populacao");
        printf("4. Turismo");
        printf("5. Densidade");
        printf("Qual vai querer verificar?: ");
        scanf("%d",&escolhaVenceu);
        
        // um segunddo Switch
        // mas dentro da escolha 2
        switch(escolhaVenceu){
            case 1:
                // ele ver qual atributo Area é maior
                if(cartaA.area > cartaB.area){
                    printf("a area da carta A é maior que a da carta B");
                }else if(cartaB.area > cartaA.area){
                    printf("a area da carta B é maior que a da carta A");
                }else{
                    printf("Deu Empate");
                };
                break;
            case 2:
                // ele ver qual atributo PIB é maior
                if(cartaA.PIB > cartaB.PIB){
                    printf("o PIB da carta A é maior que a da carta B");
                }else if(cartaB.PIB > cartaA.PIB){
                    printf("o PIB da carta B é maior que a da carta A");
                }else{
                    printf("Deu Empate");
                };
                break;
            case 3:
                // ele ver qual atributo população é maior
                if(cartaA.populacao > cartaB.populacao){
                    printf("a população da carta A é maior que a da carta B");
                }else if(cartaB.populacao > cartaA.populacao){
                    printf("a populução da carta B é maior que a da carta A");
                }else{
                    printf("Deu Empate");
                };
                break;
            case 4:
                // ele ver qual atributo turismo é maior
                if(cartaA.turistico > cartaB.turistico){
                    printf("o turismo da carta A é maior que a da carta B");
                }else if(cartaB.turistico > cartaA.turistico){
                    printf("o turismo da carta B é maior que a da carta A");
                }else{
                    printf("Deu Empate");
                };
                break;
            case 5:
                // ele ver qual atributo densidade é menor
                if(densidadeA < densidadeB){
                    printf("o Densidade da carta A é menor que a da carta B");
                }else if(densidadeB < densidadeA){
                    printf("o Densidade da carta B é maior que a da carta A");
                }else{
                    printf("Deu Empate");
                };
                break;
            default:
                // caso a opção é invalida
                printf("Escolha invalida");
                break;
            }
            break;
            // fim do switch dentro da escolha 2
        // fim da escolha 2

    // inicio da 3 escolha do usuario
    // essa escolha, ele compara os atributos das cartas indivudalmente
    // ele tem um Switch dentro dele
    case 3:
        //ele cria uma variavel para receber 
        // a escolha do usuario
        int escolhaComparar;
        printf("Comparar atributos");
        printf("1. Comparar Area");
        printf("2. Comparar Pib");
        printf("3. Comparar Populacao");
        printf("4. Comparar Turismo");
        printf("5. Comparar Densidade");
        printf("Qual quer comparar?: ");
        scanf("%d",&escolhaComparar);
        

        // cria um segundo Switch dentro da terceira escolha
        // esse Switch serve para o usuario escolher o atributo
        // que quer comparar entre as cartas
        switch(escolhaComparar){
            case 1:
                printf("Area das cartas\n");
                printf("Carta A: %f - Carta B: %f\n", cartaA.area, cartaB.area);
                break;
            case 2:
                printf("Pib das cartas\n");
                printf("Carta A: %f - Carta B: %f\n", cartaA.PIB, cartaB.PIB);
                break;
            case 3:
                printf("Populaçao das cartas\n");
                printf("Carta A: %f - Carta B: %f\n", cartaA.populacao, cartaB.populacao);
                break;
            case 4:
                printf("Turismo das cartas\n");
                printf("Carta A: %d - Carta B: %d\n", cartaA.turistico, cartaB.turistico);
                break;
            case 5:
                printf("Densidade das cartas\n");
                printf("Carta A: %f - Carta B: %f\n", densidadeA, densidadeB);
                break;
            default:
               printf("Escolha invalida");
               break;
            }
        default:
            break;
        
    return 0;
}// cade o codigo carai kjkjkjkjkkjk

